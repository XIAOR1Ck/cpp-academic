#include<iostream>
#define max 10
usinG namespace std;
class stack_implementation{
private:
  int stack[max], top=-1, data;
public:
  void pop(){
if(top==-1){
      cout<<"the stack is empty"<<endl;
        return;
    }
    cout<<"the item popped is: "<<stack[top]<<endl;
    top-=1;
  }
 void push(){
    int a;
    if(top==max-1){
      cout<<"stack is full"<<endl;
      return;
    }
    cout<<"enter a number: ";
    cin>>a;
    top+=1;
    stack[top]=a;
    cout<<a<<" is added to the stack"<<endl;
  }
  void display(){
    if(top==-1){
      cout<<"stack is empty:"<<endl;
      return;
    }
    for(int i=0; i<=top;i++){
      cout<<stack[i]<<" ";
    }
  }
};
int main(){
  stack_implementation ob1;
  int choice;
  while(choice!=4){
  cout<<endl<<"choice: "<<endl;
  cout<<"1_push to stack."<<endl;
  cout<<"2_pop from stack"<<endl;
  cout<<"3_display stack elements"<<endl;
  cout<<"4_exit"<<endl;
  cout<<"Enter your choice: ";
    cin>>choice;
 
  switch(choice){
    case 1:
      ob1.push();
      break;
    case 2:
      ob1.pop();
      break;
    case 3:
      ob1.display();
      break;
    default:
      cout<<"enter a proper choice";
      break;

  }
  }
  return 0;
}
