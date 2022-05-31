//
// Created by Ariq Heritsa on 31/05/22.
//

#include "queue.h"

// 1305213031 - Ariq Heritsa Maalik
void create_queue(queue &Q) {
  head(Q) = nil;
}

// 1305213031 - Ariq Heritsa Maalik
address create_element(string x) {
  address P = new element;

  info(P) = x;
  next(P) = nil;

  return P;
}

// 1305213031 - Ariq Heritsa Maalik
void masukkan_transaksi(queue &Q, address P) {
  address current = head(Q);

  if (current == nil) {
    head(Q) = P;
  } else {
    while (next(current) != nil) {
      current = next(current);
    }

    next(current) = P;
  }
}

// 1305213031 - Ariq Heritsa Maalik
void proses_transaksi(queue &Q, address &P) {
  if (head(Q) != nil) {
    P = head(Q);
    head(Q) = next(P);
    next(P) = nil;
  }
}

// 1305213031 - Ariq Heritsa Maalik
void print_queue(queue Q) {
  if (head(Q) == nil) {
    cout << "Queue kosong!" << endl;
  } else {
    address P = head(Q);
    int i = 1;

    cout << "Daftar Antrian" << endl;

    while (P != nil) {
      cout << i << ". " << info(P) << endl;
      P = next(P);
      i++;
    }

    cout << endl;
  }
}
