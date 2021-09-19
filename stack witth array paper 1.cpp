#include<iostream>
using namespace std;
#define SIZE 5
int array[SIZE];
int top=-1;
bool isFull()
{
	if(top==SIZE-1)
	return true;
	else
	return false;
}
bool isEmpty()
{
	if(top<0)
	return true;
	else 
	return false;
}
int push(int a)
{
if(isFull())
{
	cout<<endl<<"stack is full";
}
else 
{

top++;
array[top]=a;
}
}
int pop()
{
	if(isEmpty())
	{
		cout<<"\nstack is empty";
	}
	else
	top--;
}
int display()
{
	if(isEmpty())
	{
		cout<<endl<<"stack is empty"<<endl;
	}
	else
	for(int i=0;i<=top;i++)
	{
		cout<<endl<<"element of stack: "<<array[i]<<endl;
	}
}
int main()
{
	int choice, z=1, value;
 while(z==1)
 {
 cout<<"\n1.PUSH\n2.POP\n3.DISPLAY_STACK\n";
 cin>>choice; 
 switch (choice)
 {
 case 1:
         cout<<"Enter Value for insertion: ";
         cin>>value;
         push(value);
         break;
 case 2:
 	 pop();
         break;
 case 3: 
 	 display();
         break;
 case 4: 
 	 z=0;
         break;
 }
 }
  return 0;

}
