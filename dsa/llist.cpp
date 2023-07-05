#include <cstddef>
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
class linked_list{
    Node *start;
    int d;
public:
    linked_list(){
        start=NULL;
    }
    Node *createNode(){
     Node *temp=new Node;
        return temp;
}
    void insertAtBeginning();
    void insertAtEnd();
    void insertBeforeNode();
    void insertAfterNode();
    void deleteAtBeginning();
    void deleteAtEnd();
    void deleteNode();
    void display();
    ~linked_list(){
        delete start;
    }
};

void linked_list::insertAtBeginning(){
    Node *newNode=createNode();
    cout<<"enter data to be inserted: ";
    cin>>d;
    if(start==NULL){
        start=newNode;
        newNode->data=d;
        newNode->next=NULL;
        return;
    }  
    newNode->next=start->next;
    start=newNode;
    cout<<"succesfully inserted: ";
    return;
}

void linked_list::insertAtEnd(){
    Node *newNode=createNode();
    cout<<"enter data to be inserted: ";
    cin>>d;
    if(start==NULL){
        start=newNode;
        newNode->data=d;
        newNode->next=NULL;
        return;
    }  
    Node *temp=createNode();

    temp=start;
    while((temp->next)!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=NULL;

}
void linked_list::insertBeforeNode(){
  Node *newNode=createNode();
  Node *temp=createNode();
  temp=start;
  int pos,i=1;
  cout<<"enter data to be inserted: ";
  cin>>d;
  if(start==NULL){
        start=newNode;
        newNode->data=d;
        newNode->next=NULL;
        return;
    }  
  cout<<"enter the position to be inserted: ";
  cin>>pos;

  while(i<pos-1){
    temp=temp->next;
    i+=1;
  }
  newNode->data=d;
  newNode->next=temp->next;
  temp->next=newNode;
}
 void linked_list::deleteAtBeginning(){
  Node *newNode=createNode();
  if(start==NULL){
    cout<<"void deletion:";
    return;
  }
  newNode=start;
  start=newNode->next;
  delete newNode;
}

void linked_list::deleteAtEnd(){
  Node *temp=createNode();
  Node *hold=createNode();
  temp=start;
  while((temp->next)->next!=NULL){
    temp=temp->next;
  }
  hold=temp->next;
  temp->next=NULL;
  delete hold;
  temp=NULL;
  delete temp;

}
