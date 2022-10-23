//
// Created by Ariq Heritsa on 31/05/22.
//

#ifndef STD_1305213031_MOD9_JURNAL_ARN_QUEUE_H
#define STD_1305213031_MOD9_JURNAL_ARN_QUEUE_H

#include <iostream>

using namespace std;

#define nil NULL
#define head(Q) Q.head
#define info(P) P->info
#define next(P) P->next

typedef struct element *address;

struct element {
  string info;
  address next;
};

struct queue {
  address head;
};

void create_queue(queue &Q);

address create_element(string x);

void masukkan_transaksi(queue &Q, address P);

void proses_transaksi(queue &Q, address &P);

void print_queue(queue Q);

int jumlah_antrian(queue Q);

#endif //STD_1305213031_MOD9_JURNAL_ARN_QUEUE_H
