#include<iostream>
#define max 10
using namespace std;
class queue_el{
private:
	int front, rear, queue[max];
public:
	queue_el(){
		front=-1;
		rear=-1;
	}
	void enque(){
		if(rear==max-1){
			cout<<"queue is full"<<endl;
			return;
		}
		int data;
		if(front==-1)
			front=0;
		cout<<"enter data to be inserted"<<endl;
		cin>>data;
		rear+=1;
		queue[rear]=data;

	}
	void deque(){
		if(front==-1||front>rear){
			cout<<"queue is empty"<<endl;
			return;
		}
		cout<<"the deleted data is: "<<queue[front]<<endl;
		front+=1;

	}
	void display(){
		if(rear==-1||front>rear){
			cout<<"queue is empty"<<endl;
			return;
		}
		cout<<"the elements in the queue are: "<<endl;
		for(int i=0;i<=rear;i++){
			cout<<queue[i]<<" ";
		}
	}
};
int main(){
	int choice;
	queue_el obj;
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
}
