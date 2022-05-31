//
// Created by Ariq Heritsa on 31/05/22.
//

#ifndef STD_1305213031_MOD9_JURNAL_ARN_STACK_H
#define STD_1305213031_MOD9_JURNAL_ARN_STACK_H

#include <iostream>

#define nil NULL
#define top(S) S.top
#define info(S) S.info

typedef int infotype;

struct stack {
  infotype info[10];
  int top;
};

void create_stack(stack &S);

bool is_empty(stack S);

bool is_full(stack S);

void push(stack &S, infotype x);

int pop(stack &S);

void print_stack(stack S);

void ascending(stack &S);

void descending(stack &S);

#endif //STD_1305213031_MOD9_JURNAL_ARN_STACK_H
