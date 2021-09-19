#include <iostream>
using namespace std;
struct node
{
	int data;
	node*prev;
	node*next;
};
node*head=NULL;
node*tail=NULL;
int insertdata(int n)
{
	node*ptr=new node;
	ptr->data=n;
	ptr->prev=NULL;
	ptr->next=NULL;
	if(head==NULL)
	{
		head=ptr;
		tail=ptr;
	}
	else
	{
		tail->next=ptr;
		ptr->prev=tail;
		tail=ptr;
	}
}
int display()
{
	if(head==NULL)
	{
		cout<<"\nLink list is empty...!!!\n";
	}
	node*temp=head;
	while(temp!=NULL)
	{
		cout<<"\nvalue : "<<temp->data;
		temp=temp->next;
	}
}
int displayreverse()
{
	if(head==NULL)
	{
		cout<<"\nLink list is empty...!!!\n";
	}
	node*temp=tail;
	while(temp!=NULL)
	{
		cout<<"\nvalue : "<<temp->data;
		temp=temp->prev;
	}
}
int search()
{
	int value,found=0,i=1;
	if(head==NULL)
	{
		cout<<"\nLink list is empty...!!!\n";
	}
	else
	{
		cout<<"\nenter value for searching : ";
		cin>>value;
		node*temp=head;
		while(temp!=NULL)
		{
			if(value==temp->data)
			{
				cout<<"\nValue found in linklist with forward search : "<<value<<" at position "<<i<<endl;
				found++;
				break;
			}
			temp=temp->next;
			i++;
		}
		if(found==0)
		{
			cout<<"\nvalue not found...!!!\n";
		}
	}
}
int searchreverse()
{
		int value,found=0,i=1;
	if(head==NULL)
	{
		cout<<"\nLink list is empty...!!!\n";
	}
	else
	{
		cout<<"\nenter value for searching : ";
		cin>>value;
		node*temp=tail;
		while(temp!=NULL)
		{
			if(value==temp->data)
			{
				cout<<"\nValue found in linklist with reverse search : "<<value<<" at position "<<i<<endl;
				found++;
				break;
			}
			temp=temp->prev;
			i++;
		}
		if(found==0)
		{
			cout<<"\nvalue not found...!!!\n";
		}
	}
}
int update()
{
	int value,found=0,i=1;
	if(head==NULL)
	{
		cout<<"\nLink list is empty...!!!\n";
	}
	else
	{
		cout<<"\nenter value for updating : ";
		cin>>value;
		node*temp=head;
		while(temp!=NULL)
		{
			if(value==temp->data)
			{
				cout<<"\nValue found in linklist with forward search : "<<value<<" at position "<<i<<endl;
				cout<<"\n\nenter new value for update : ";
				cin>>value;
				cout<<"\n\nvalue is updated sucessfully...!!!\n";
				temp->data=value;
				found++;
				break;
			}
			temp=temp->next;
			i++;
		}
		if(found==0)
		{
			cout<<"\nvalue not found...!!!\n";
		}
	}
}
int deletee()
{
	int value,count=0,found=0;
	if(head==NULL)
	{
		cout<<"\nLink list is empty...!!!\n";
	}
	else
	{
		cout<<"\nEnter value for deletion : ";
		cin>>value;
		node*temp=head;
		while(temp!=NULL)
		{
			count++;
			temp=temp->next;
		}
		if(count==1)
		{
			cout<<"\nValue found in linklist : "<<value<<" at position "<<endl;
			temp=head;
			head=NULL;
			tail=NULL;
			delete temp;
			cout<<"\n only first node is deleted ";
			found++;
		}
		else if(value==head->data)
		{
			temp=head;
			head=head->next;
		    head->prev=NULL;
		    delete temp;
		    cout<<"\nnode is deleted from front ";
			found++;
		}
		else if(value==tail->data)
		{
			temp=tail;
			tail=tail->prev;
			tail->next=NULL;
			delete temp;
			cout<<"\nnode is deleted from end...!!!";
			found++;
		}
		else 
		{
			node*prev_ptr=head;
			temp=head->next;
			node*next_ptr=temp->next;
			while(temp!=NULL)
			{
				if(value==temp->data)
				{
					prev_ptr->next=next_ptr;
					next_ptr->prev=prev_ptr;
					delete temp;
					cout<<"\n\nnode is deleted \n";
					found++;
					break;
				}
				prev_ptr=temp;
				temp=next_ptr;
				next_ptr=next_ptr->next;
			}
			
		}
		}
	
		if(found==0)
		{
			cout<<"\nvalue not found...!!!\n";
		}
	}

int main()
{
		int a,value;
loop:	cout<<endl<<"1:insert node\n2:display forward section \n3:display reverse section \n";
cout<<"4:search in forward oder\n5:search in reverse oder\n6:update value\n7:delete value from list\n8:enter choice : ";
	cin>>a;
	system("cls");
	switch(a)
	{
		case 1:
			cout<<"enter value : ";
			cin>>value;
			insertdata(value);
			break;
			case 2:
				display();
				break;
				case 3:
					displayreverse();
					break;
					case 4:
						search();
						break;
						case 5:
							searchreverse();
							break;
							case 6:
								update();
								break;
								case 7:
									deletee();
									break;
}
	
	goto loop;
}

