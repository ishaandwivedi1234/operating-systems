#include<bits/stdc++.h>
using namespace std;

class Stack {
	public:
	int top;
	Stack(){
		top =-1;
		
		
	}
		
		int arr[10];
		
		void push(int num){
		
			if ( top < 9){
			++top;
			arr[top]=num;
			}	
			else 
			cout<<"Stack Overflow\n";
		}
		
		void display(){
		if(top==-1)
		cout<<"Stack Is empty\n";
		else{
			for(int i =top ;i >= 0; i--)
			cout<<arr[i]<<endl;
			}
		}
		
		void pop(){
		
			arr[top]=0;
			top--;
		
		}
};
int main(void){
	cout<<"Press 0 to Stop This Programme \n";
	int loop_control =1,option;
	Stack stack;
	while(loop_control){
	
	cout<<"1 . To Push \n";
	cout<<"2. To Pop\n";
	cout<<"3. Display\n";
	cin>>option;
	if(option == 1){
	int num;
	cout<<"Enter A Number To Push \n";
	cin>>num;
	stack.push(num);
	}
	else if( option == 2 ){
	cout<<"Poping.....\n";
	stack.pop();
	cout<<"Done.......\n";
	
	}
	else{
	stack.display();
		}
	cout<<"Press 0 to stop or 1 to continue\n";
	cin>>loop_control;	
	system("cls");
	}

return 0;
}
