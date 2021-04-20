//this cpp file implements queue using array concept
#include<iostream>
using namespace std;
//global queue atributes size of static queue is n and  it is 10
int Q[5],n=10,f=-1,r=-1;
//prototypes of functions
void enque( int e);
int deque();
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
//insert data at rear if queue is not full
void enque( int e)
{
	//check if queue is full
	if(r==n-1)
	{
		cout<<"Queue is full: cannot insert"<<endl;
		
	}
	else
	{
		//inc rear and then insert
		r++;
		Q[r]=e;
		//if first insert
		if(f==-1)
			f=0;
	}

}
//this function remove data from front
int deque()
{
	int y;
	//check if queue is not empty
	if(f==-1)
	{
		cout<<"\nCannot delete from empty queue"<<endl;
		return -999;
	}
	//copy front data
	y=Q[f];
	//manage front if last element is being deleted
	if(f==r)
	{
		f=-1;
		r=-1;
	}
	else
	f++;
	//return front data
	return y;

}
//this function peek data from front without deleting it
int peek()
{
	//check if queue is empty
	if(f==-1)
	{
		cout<<"\nCannot peek from empty queue"<<endl;
		return -999;
	}	
	//return front data if queue is not empty
	else
		return(Q[f]);
	
}

