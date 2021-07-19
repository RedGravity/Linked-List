class Linked_List
{
public:
  class Node{
  public:
    int value;
    Node* next;
    Node* prev;

    Node();
    Node(int val);
  };

  Linked_List();
  Linked_List(int val);
  int get_length();
  Linked_List::Node* get_head();
  Linked_List::Node* get_tail();
  void remove(int val);
  void add(int val);
  void print_list();
  void swap(Node* a, Node* b);
  void bubble_sort();

private:
  int length;
  Node* head;
  Node* tail;
};
