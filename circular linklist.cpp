#include<iostream>
using namespace std;
int size=0;
struct node
{
	int data;
	node*link;
};
node*head=NULL;
node*tail=NULL;
int insertnode(int n)
{
	node*ptr=new node;
	ptr->data=n;
	ptr->link=NULL;
	size++;
	if(head==NULL)
	{
		head=ptr;
	    tail=ptr;
	    ptr->link=head;
	    
	}
	else
	{
		tail->link=ptr;
		tail=ptr;
		tail->link=head;
	}
}
int display()
{
	int c=0;
	if(head==NULL)
	{
		cout<<"\ncircular list is empty...!\n";
		
	}
	else
	{
		node*temp=head;
		while(c!=size)
		{
			cout<<"\nValue : "<<temp->data<<endl;
			temp=temp->link;
			c++;
		}
	}
}
int search()
{
	int c=0,n,found=0;
	if(head==NULL)
	{
		cout<<"\ncircular list is empty...!\n";
		
	}
	else
	{
		cout<<"\n\nEnter value for searching : ";
		cin>>n;
		node*temp=head;
		while(c!=size)
		{
			if(n==temp->data)
			{
				cout<<"\nvalue is found : "<<temp->data;
				found++;
				break;
			}
			temp=temp->link;
			c++;
		}
		if(found==0)
		{
			cout<<"\n\nValue not found...!!!\n";
		}
	}
	
}
int updat()
{
	int c=0,n,found=0;
	if(head==NULL)
	{
		cout<<"\ncircular list is empty...!\n";
		
	}
	else
	{
		cout<<"\n\nEnter value for searching : ";
		cin>>n;
		node*temp=head;
		while(c!=size)
		{
			if(n==temp->data)
			{
				cout<<"\nvalue is found : "<<temp->data;
				cout<<"\n\nEnter new value : ";
				cin>>n;
				temp->data=n;
				found++;
				break;
			}
			temp=temp->link;
			c++;
		}
		if(found==0)
		{
			cout<<"\n\nValue not found...!!!\n";
		}
	}
	
}
int deletee()
{
	int c=0,n,found=0;
	if(head==NULL)
	{
		cout<<"\ncircular list is empty...!\n";
		
	}
	else
	{
		cout<<"\n\nEnter value for deletion : ";
		cin>>n;
		node*temp=head;
		if(size==1&&n==head->data)
		{
			cout<<"\nvalue is found and deleted\n\n";
			head=NULL;
			tail=NULL;
			delete temp;
			found++;
		}
		else if(n==head->data)
		{
			head=head->link;
			tail->link=head;
			size--;
				cout<<"\nvalue is found and deleted\n\n";
			delete temp;
			found++;
		}
		else if(n==tail->data)
		{
		    while(temp->link!=tail)
		    {
		    	temp=temp->link;
			}
			node*prev=tail;
			tail=temp;
			tail->link=head;
			delete prev;
				cout<<"\nvalue is found and deleted\n\n";
				found++;
				size--;
		}
		else
		{
			node*prev=head;
			temp=head->link;
			while(c!=size)
			{
				if(n==temp->data)
				{
				
				prev->link=temp->link;
    			size--;
				found++;
					cout<<"\nvalue is found and deleted\n\n";
				delete temp;
				break;			
			}
			prev=temp;
			temp=temp->link;
			c++;
			}
		}
		if(found==0)
		{
			cout<<"\n\nvalue not found..!!\n\n";
		}
	}
}
int insertfront(int n)
{
	node *temp=new node;
 	temp->data=n;
 	temp->link=NULL;
  if(tail==NULL)
  {
  	tail=temp;
  	tail->link=tail;
  }
  else
   {
   	temp->link=tail->link;
   	tail->link=temp;
   }
}
int main()
{
		int a,value;
loop:	cout<<endl<<"1:insert node\n2:display\n3:search\n4:update value\n5:delete value from list\n6:insert front\nenter choice : ";
	cin>>a;
	system("cls");
	switch(a)
	{
		case 1:
			cout<<"enter value : ";
			cin>>value;
			insertnode(value);
			break;
			case 2:
				display();
				break;
				case 3:
					search();
					break;
					case 4:
							updat();
							break;
							case 5:
									deletee();
									break;
									case 6:
										cout<<"enter value : ";
										cin>>value;
										insertfront(value);
										break;
}
	
	goto loop;
}
