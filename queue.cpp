#include <iostream>
using namespace std;

class queue{  
            public:
            int n;int a[100];
            int front;
            int rear;
            public:
            void getdata() ;
            void enque() ;
            void deque() ;
            void display () ;
           };
  
void queue::getdata() 
{
int i;
cout<<"Enter the size of queue:";
cin>>n;
cout<<"Enter the elements:"<<endl;
for(i=0;i<
n;i++)
  {
  cin>>a[i];
  }
front=0;
rear=n-1; 
}

void queue::enque()
{
if(rear==100)
 {
 cout<<"stack overflow!"<<endl;
 }
else
 {
 cout<<"Enter an element you want to insert:"<<endl;
 cin>>a[++rear];
 }  
} 

void queue::display () 
{
int i;
cout<<"The elements are:"<<endl;
for(i=front;i<=rear;i++)
  {
  cout<<a[i];
  cout<<endl;
  }
}  

void queue:: deque()
{
if(front==rear+1)
 {
  cout<<"Queue underflow:"<<endl;
 }
else
 { 
 cout<<"Element "<<a[front]<<" will delete:"<<endl;
 front++;
 }
}

int main() 
{
queue q;
q. getdata();
int ch, i;
for(i=0;i<10;i++)
{
cout<<"Enter choice:\n 1.Insertion\n 2.Deletion\n 3.display\n 4.break";
cin>>ch;

switch(ch)
 {
  case 1:q.enque();
        break;
  case 2:q.deque();
         break;
  case 3:q.display();
         break;
  case 4:i=10;
        break;     
  default:cout<<"Invalid choice entered.";
 }
}
}
