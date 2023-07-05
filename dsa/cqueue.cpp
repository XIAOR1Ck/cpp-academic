#include<iostream>
#define max 5
using namespace std;
class cqueue{
  int front,rear,queue[max];
  public:
    cqueue(){
    front=-1;
    rear=-1;
  }
    void enque(){
      if((front==0&&rear==max-1)|| rear==front-1){
      cout<<"queue is full";
      return;
    }
    if(front=-1)
      front=0;
    int data;
    cout<<"enter the data to be inserted: ";
    cin>>data;
    rear+=1;
    queue[rear%max]=data;
  }
  void deque(){
    if(rear==-1){
      cout<<"the queue is empty";
      return;
    }
    if(front==rear){
      cout<<"the data deleted is: "<<queue[front];
      front=-1;
      rear=-1;
    }
    cout<<"the deleted element is: "<<queue[front];
    front+=1;
  }
  void display(){
    if(front==-1){
      cout<<"underflow";
      return;
    }
    cout<<"the elements are: "<<endl;
    for(int i=front;(i%max)!=rear+1;i++){
      cout<<queue[i]<<" ";
    }
  }
};
int main(){
  int choice;
	cqueue obj;
	while(choice!=4){
		cout<<"enter your choice:"<<endl;
		cout<<"1.enque"<<endl;
		cout<<"2.deque"<<endl;
		cout<<"3.dispaly"<<endl;
		cout<<"4.exit"<<endl;
		cin>>choice;
		switch(choice){
		case 1:
			obj.enque();
			break;
		case 2:
			obj.deque();
			break;
		case 3:
			obj.display();
			break;
		case 4:
			break;
		default:
			cout<<"enter a proper choice"<<endl;
		}
	}
  return 0;
}
