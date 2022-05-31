//
// Created by Ariq Heritsa on 31/05/22.
//

#include "stack.h"

// 1305213031 - Ariq Heritsa Maalik
void create_stack(stack &S) {
  top(S) = 0;
}

// 1305213031 - Ariq Heritsa Maalik
bool is_empty(stack S) {
  return top(S) == 0;
}

// 1305213031 - Ariq Heritsa Maalik
bool is_full(stack S) {
  return top(S) == 10;
}

// 1305213031 - Ariq Heritsa Maalik
void push(stack &S, infotype x) {
  if (!is_full(S)) {
    info(S)[top(S)] = x;
    top(S)++;
  }
}

// 1305213031 - Ariq Heritsa Maalik
int pop(stack &S) {
  int popped = nil;

  if (!is_empty(S)) {
    top(S)--;
    popped = info(S)[top(S)];
  }

  return popped;
}

// 1305213031 - Ariq Heritsa Maalik
void print_stack(stack S) {
  if (is_empty(S)) {
    std::cout << "Stack kosong!" << std::endl;
  }

  for (int i = top(S) - 1; i >= 0; i--) {
    std::cout << info(S)[i] << " ";
  }

  std::cout << std::endl;
}

// 1305213031 - Ariq Heritsa Maalik
void ascending(stack &S) {
  infotype temp;
  int min;

  for (int i = 0; i < top(S); i++) {
    min = i;

    for (int j = i + 1; j < top(S); j++) {
      if (info(S)[j] < info(S)[min]) {
        min = j;
      }
    }

    temp = info(S)[i];
    info(S)[i] = info(S)[min];
    info(S)[min] = temp;
  }
}

// 1305213031 - Ariq Heritsa Maalik
void descending(stack &S) {
  infotype temp;
  int max;

  for (int i = 0; i < top(S); i++) {
    max = i;

    for (int j = i + 1; j < top(S); j++) {
      if (info(S)[j] > info(S)[max]) {
        max = j;
      }
    }

    temp = info(S)[i];
    info(S)[i] = info(S)[max];
    info(S)[max] = temp;
  }
}
