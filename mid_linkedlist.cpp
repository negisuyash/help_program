#include<iostream>
using namespace std;

struct node
{
	int info;
	node* next;
};

class linked_list
{
	node* A;
	public:
		linked_list()
		{
			A=NULL;
		}
		void add(int data)
		{
			if(A==NULL)
			{
				node* new_node=new node();
				new_node->info=data;
				new_node->next=NULL;
				A=new_node;
			}
			else
			{
				node* traverse_node=A;
				while(traverse_node->next!=NULL)
				{
					traverse_node=traverse_node->next;
				}
				node* new_node=new node();
				new_node->info=data;
				new_node->next=NULL;
				traverse_node->next=new_node;
			}
		}
		void display()
		{
			node* traverse_node=A;
			cout<<endl;
			do
			{
				cout<<traverse_node->info<<" ";
				traverse_node=traverse_node->next;
			}while(traverse_node->next!=NULL);
			cout<<traverse_node->info;
		}
		void find_mid()
		{
			
			int counter=0;
			node* traverse_node=A;
			do
			{
				traverse_node=traverse_node->next;
				counter++;
				
			}while(traverse_node->next!=NULL);
			counter++;
			//cout<<"\nflag 1";
			traverse_node=A;
			for(int i=0;i<(counter/2);i++)
			{
				traverse_node=traverse_node->next;
			}
			cout<<"\n MID OF LINKED LIST IS:"<<traverse_node->info<<"\n ";
		}
};

int main()
{
	linked_list l;
	l.add(1);
	l.add(5);
	l.add(2);
	l.add(6);
	l.add(9);
	l.display();
	l.find_mid();
	return 0;
}
