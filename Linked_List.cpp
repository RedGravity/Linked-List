#include "Linked_List.h"
#include <iostream>

// Default Constructor
Linked_List::Linked_List(){
  head = new Node();
  tail = new Node();
  head->next = tail;
  tail->prev = head;
  length = 0;
}

// Create a list with an initial value for first node
Linked_List::Linked_List(int val){
  head = new Node();
  tail = new Node();
  Node* first_node = new Node();
  first_node->value = val;
  head->next = first_node;
  tail->prev = first_node;
  first_node->next = tail;
  first_node->prev = head;
  length = 1;
}

// Get the length of the string
int Linked_List::get_length(){
  return length;
}

// Get a pointer to the head Node
Linked_List::Node* Linked_List::get_head(){
  return head;
}

// Get a pointer to the tail Node
Linked_List::Node* Linked_List::get_tail(){
  return tail;
}

// Removes first list node with value == val.
// Returns 1 if a Node was removed, Returns 0 if not.
void Linked_List::remove(int val){
  Node* temp = head->next;
  while(temp != tail){
    if(temp->value == val){
      temp->prev->next = temp->next;
      temp->next->prev = temp->prev;
      delete temp;
      length--;
    }
    temp = temp->next;
  }
}

// Add an item to the end of the list
void Linked_List::add(int val){
  Node* newNode = new Node();
  newNode->value = val;
  newNode->next = tail;
  newNode->prev = tail->prev;
  tail->prev->next = newNode;
  tail->prev = newNode;
  length++;
}

// Print the Linked List
void Linked_List::print_list(){
  Node* temp = head;
  while(temp->next != tail){
    temp = temp->next;
    std::cout << temp->value << std::endl;
  }
}


// Uses bubble sort to order the nodes in ascending order, and prints the list
void Linked_List::bubble_sort(){
  for(int i = 0; i < length; i++){
    Node* a = head->next;
    Node* b = head->next->next;
    for(int j = 0; j < length-1; j++){
      if(a->value > b->value) swap(a, b);
      a = a->next;
      b = b->next;
    }
  }
  this->print_list();
}


// Method used within bubble sort method to swap node values
void Linked_List::swap(Node* a, Node* b){
  int temp = a->value;
  a->value = b->value;
  b->value = temp;
}


// default constructor
Linked_List::Node::Node(){
  value = 0;
}


// Class Constructor
Linked_List::Node::Node(int val){
  value = val;
}
