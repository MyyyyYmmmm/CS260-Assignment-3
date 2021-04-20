//this cpp file implements queue using linked list concept
#include<iostream>
using namespace std;
//structure node for linked list that stores int data and pointer to next node
struct node
{
	int data;
	struct node* next;
}*H,*T; //global pointers for head and tail

//add elemet at rear of linked list 
void enque(int);

//function that delete content from front
int deque();
//function that peek element from front without deleting it
int peek();

//main function to test working
int main()
{   int c=0,x,p;
	//test until choose to exit
	while(c!=4)
	{
		cout<<"\nEnter choice:\n1.Enqueue\n2.Dequeue\n3.PeekFront\n4.Exit"<<endl;
		cin>>c;
		//control to test various function
		switch(c)
		{
			//to insert data at rear
			case 1:
			{
				cout<<"\nInsert int data to enqueue"<<endl;
				cin>>x;;
				enque(x);
				break;
			}
			
			//to delete data from front
			case 2:
			{
				x=deque();
				if(x!=-999)
					cout<<x<<" is deleted from front"<<endl;
				break;
			}
			
		
			//to peek value from front
			case 3:
			{
				x=peek();
				if(x!=-999)
					cout<<x<<" is peeked from front"<<endl;
				break;
			}
			//if choose to exit
			case 4:
			{
				cout<<"Successfully Termination"<<endl;
				break;
			}
			//invalid case
			default: cout<<"INVALID CHOICE"<<endl;
		}
	}
	return 0;
}
//this function peek value from front without deleting it
int peek()
{    
	int x;   
	struct node* temp;
	temp=H;
	//check if strcuture is not empty and returns -999 dummy data if empty list/queue
	if(H==NULL)
	{
		cout<<"Can't peek from Empty Structure"<<endl;
		return -999;
	}
	//returns value from front
	else
	{
		return H->data;
	}
}
//this function insert data at rear
void enque(int x)
{      
	struct node* newnode;
	//allocate memory to newnode
	newnode=new(struct node);
	//check if succesfuly memory allocated
	if(newnode==NULL)
	{
		printf("\nNode not created");
		return;
	}
	//set nodes atributes
	newnode->data=x;
	newnode->next=NULL;
	//if it is first data
	if(H==NULL)
	{
		H=newnode;
		T=newnode;
	}
	//not fist data
	else
	{
		T->next=newnode;
		T=newnode;
	}

}
//this function delete data from front
int deque()
{    
	int x;   
	struct node* temp;
	temp=H;
	//check if yet there is no data the -999 dummy data returned
	if(H==NULL)
	{
		cout<<"Can't delete from Empty Structure"<<endl;
		return -999;
	}
	//if atleast one data 
	x=H->data;
	if(H->next==NULL)
	{
		T=NULL;
	}
	H=H->next;
	//delete memory allocated to front node
	delete(temp);
	//return front value
	return x;
}

