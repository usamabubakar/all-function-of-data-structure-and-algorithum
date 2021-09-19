#include <iostream>
using namespace std;
struct node
{
	int data;
	node*link;
};
node*head=NULL;
int insert(int value)
{
	node*ptr=new node;
	ptr->data=value;
	ptr->link=NULL;
	if(head==NULL)
	{
		head=ptr;
	}
	else
	{
		node*temp=head;
		while(temp->link!=NULL)
		{
			temp=temp->link;
		}
		temp->link=ptr;
	}
}
int main()
{
	int a,value;
loop:	cout<<endl<<"1:insert node"<<endl<<"enter choice : ";
	cin>>a;
	    system("cls");
	    switch(a)
	    {
	      case 1:
                  cout<<"enter value of node : ";
                  cin>>value;
                  insert(value);
                  break;
	      default:
	          cout<<"Invalid Choice..!";
	    }
	    goto loop;
}
