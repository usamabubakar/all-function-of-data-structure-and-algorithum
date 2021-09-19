#include<iostream>
using namespace std;
#define SIZE 5
int array[SIZE];
int rear=-1;
int front=-1;
int enqueue(int value)
{
	if(rear==SIZE-1)
	{
		cout<<endl<<endl<<"queue is full";
	}
	else
	{
		if(front==-1)
		front=0;
		rear++;
		array[rear]=value;
	}
}
int dequeue()
{
	if(rear==-1&&front==-1)
	{
		cout<<endl<<"queue is empty"<<endl;
	}
	else
	{
		if(front==rear)
		{
			front=rear=-1;
			cout<<endl<<"value is dequeue"<<endl;
			
		}
		else
		{
		
		front++;
			cout<<endl<<"value is dequeue"<<endl;
	}
	}
}
int display()
{
	if(rear==-1&&front==-1)
	{
		cout<<endl<<"queue is empty"<<endl;
	}
	else
	{
	
	for(int i=front;i<=rear;i++)
	{
		cout<<endl<<"value : "<<array[i]<<endl;
	}
}
}
int main()
{
	int choice, flag=1, value;
 while( flag == 1)
 {
 cout<<"\n1.enqueue 2.dequeue 3.DISPLAY_STACK 5.EXIT\n";
 cin>>choice; 
 system("cls");
 switch (choice)
 {
 case 1: cout<<"Enter Value:\n";
         cin>>value;
         enqueue(value);
         break;
 case 2: dequeue();
         break;
 case 3: display();
         break;
 case 5: flag = 0;
         break;
 }
 }
  return 0;
}
