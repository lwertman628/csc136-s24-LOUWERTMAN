#include "linkedList.h"
#include <iostream>

using namespace std;

linkedList::linkedList()
{
  head = nullptr;
  tail = nullptr;
  count = 0;
}

void linkedList::insertAtEnd(int data){
  node* temp = new node();
  temp->num = data;
  temp->next = nullptr;
  if(head==nullptr){
    head = temp;
    tail = temp;
  }else{
    tail->next = temp;
    tail = tail->next;
  }
}

void linkedList::print() const{
  node *temp = head;
  while(temp!=nullptr){
    cout <<temp -> num << " ";
    temp = temp->next;
  }
  cout << endl;
}





