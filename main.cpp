#include "Linked_List.h"
#include <iostream>
using namespace std;

int main(){
  Linked_List list(3);

  list.add(4);
  list.add(1);
  list.add(8);
  list.add(6);
  list.add(9);
  list.add(7);
  list.add(9);
  list.add(21);
  list.add(19);
  list.add(25);
  list.add(30);
  list.add(15);

  list.print_list();
  cout << endl << list.get_length() << endl;

}
