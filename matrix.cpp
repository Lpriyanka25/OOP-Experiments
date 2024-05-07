#include<iostream>
using namespace std;

class matrix{
          public:int r1, c1, r2, c2;
                 int a[20][20];
                 int b[20][20];
                 int c[20][20];
          public:void getdata();
                 void display();
                 void operator+() ;
                 void operator-() ;
                 void operator*() ;
                 void operator/(int i) ;
                          
};


void matrix::getdata()
{
cout<<"Enter rows and Columns of matrix1:"<<endl;
cin>>r1>>c1;
int i, j;
cout<<"Enter the elements:"<<endl;
for(i=0;i<r1;i++)
  {
   for(j=0;j<c1;j++)
   {
    cin>>a[i][j];
   }
  }
  
cout<<"Enter rows and Columns of matrix2:"<<endl;
cin>>r2>>c2;
cout<<"Enter the elements of matrix 2:"<<endl;
for(i=0;i<r2;i++)
  {
   for(j=0;j<c2;j++)
   {
    cin>>b[i][j];
   }
  }
  
}

void matrix::display()
{
int i,j;
cout<<"The matrix 1 is"<<endl;
for(i=0;i<r1;i++)
  {
   for(j=0;j<c1;j++)
   {
    cout<<a[i][j];
    cout<<"\t";
   }
   cout<<endl;
  }

cout<<"The matrix 2 is:"<<endl;
for(i=0;i<r2;i++)
  {
   for(j=0;j<c2;j++)
   {
    cout<<b[i][j];
    cout<<"\t";
   }
   cout<<endl;
  }
  
}

void matrix::operator+() 
{
int i, j, k;
if(r1==r2 && c1==c2)
{
  for(i=0;i<r1;i++)
  {
   for(j=0;j<c1;j++)
   {
    c[i][j]=a[i][j]+b[i][j];
   }
  }
 cout<<"The addition matrix is:"<<endl;
 for(i=0;i<r1;i++)
  {
   for(j=0;j<c1;j++)
   {
    cout<<c[i][j];
    cout<<"\t";
   }
   cout<<endl;
  }
 }  
 else
 {
  cout<<"Rows and columns of matrix 1&2 are not equal"<<endl;
  cout<<"So, addition is not possible"<<endl;
 }
} 
 
void matrix:: operator-()
{
int i, j;
if(r1==r2 && c1==c2)
 {
  for(i=0;i<r1;i++)
  {
   for(j=0;j<c1;j++)
   {
    c[i][j]=a[i][j]-b[i][j];
   }
  }
 cout<<"The subtraction matrix is:"<<endl;
 for(i=0;i<r1;i++)
  {
   for(j=0;j<c1;j++)
   {
    cout<<c[i][j];
    cout<<"\t";
   }
   cout<<endl;
  }
 } 
else
 {
 cout<<"Rows and columns of matrix 1&2 are not equal"<<endl;
  cout<<"So, subtraction is not possible"<<endl;
 }
 
} 
 
void matrix::operator*() 
{
int i, j, k;
cout<<"The multiplication of matrix is:"<<endl;
for(i=0;i<r1;i++)
 {
  for(j=0;j<c2;j++)
  {
    c[i][j]=0;
   for(k=0;k<c1;k++)
   {
   c[i][j]+=a[i][k]*b[k][j];
   }
  }
 }
 
 for(i=0;i<r1;i++)
 {
   for(j=0;j<c2;j++)
   {
    cout<<c[i][j];
    cout<<"\t";
   }
   cout<<endl;
 }
}

void matrix::operator/(int i) 
{
int j, k;
if(r1==c1 && r2==c2)
 {
 cout<<"The division of matrix is:"<<endl;
 for(i=0;i<r1;i++)
 {
   for(j=0;j<c1;j++)
   {
     c[i][j]=0;
     c[i][j]=a[i][j]/b[i][j];
   }
 }
 
 for(i=0;i<r1;i++)
  {
   for(j=0;j<c1;j++)
   {
    cout<<c[i][j];
    cout<<"\t";
   }
   cout<<endl;
  }
 }
 else
 {
 cout<<"Rows and columns of matrix 1&2 are not equal";
  cout<<"So, Division is not possible"<<endl;
 }
} 

int main()
{
int i, ch;
matrix m;
m.getdata();
m. display();
for(i=0;i<10;i++)
{
cout<<"\nEnter your choice:1.Addition \n 2.Subtraction 3.Multiplication \n 4.Division \n 5.break"<<endl;
 cin>>ch;
 switch(ch)
 {
  case 1:+m;
         break;
  case 2: -m;    
         break;
  case 3:*m;
         break;
  case 4: m. operator/(i) ;
         break;
  case 5:i=20;
         break;
  default:cout<<"Invalid choice entered!"<<endl;
         break;
 }
 }
}
