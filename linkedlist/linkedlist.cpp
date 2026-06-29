#include <stdio.h>
#include <iostream>

struct ListNode{
    int data;
    ListNode* next;
};

int ListLength(ListNode* head){
    int length=0;
    struct ListNode* current=head;

    while(current!=NULL){
        length++;
        current=current->next;
    }
    return length;
}

void InsertAtEnd(ListNode** head,int data){

    ListNode* newNode = new ListNode();
    newNode->data=data;
    newNode->next=NULL;

    if(head==NULL){
        return;
    }

    // what if it is empty

    if(*head==NULL){
        *head=newNode;
        return;
    }

    ListNode* current = *head;
    while(current->next!=NULL){
        current = current->next;
    }
    current->next = newNode;
    
}   

int main(){
  std::cout << "Hello, world!\n";
  return 0;
}