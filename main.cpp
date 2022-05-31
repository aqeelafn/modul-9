#include <iostream>
#include "stack.h"
#include "queue.h"

using namespace std;

int main() {
  stack S;
  queue Q;
  address P;

  // Terbimbing
  cout << "Tugas Terbimbing" << endl;
  create_stack(S);

  push(S, 2);
  push(S, 3);
  push(S, 4);
  push(S, 5);

  print_stack(S);
  pop(S);
  print_stack(S);

  cout << endl;

  // Terbimbing Ascending Descending
  cout << "Tugas Terbimbing Ascending Descending" << endl;
  create_stack(S);

  push(S, 12);
  push(S, 17);
  push(S, 5);
  push(S, 10);
  push(S, 15);
  push(S, 25);
  push(S, 11);
  push(S, 22);
  push(S, 19);

  print_stack(S);
  ascending(S);
  print_stack(S);
  descending(S);
  print_stack(S);

  cout << endl;

  // Tugas Mandiri
  cout << "Tugas Mandiri" << endl;
  create_queue(Q);

  P = create_element("Andi Transfer Doni 50.000");
  masukkan_transaksi(Q, P);

  P = create_element("Doni Transfer Saras 10.000");
  masukkan_transaksi(Q, P);

  P = create_element("Tono Transfer Bili 20.000");
  masukkan_transaksi(Q, P);

  print_queue(Q);

  proses_transaksi(Q, P);
  cout << "Transaksi terproses (dequeue): " << info(P) << endl << endl;

  print_queue(Q);

  return 0;
}
