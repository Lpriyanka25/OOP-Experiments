#include<iostream>
#include<iomanip>
using namespace std;
class student
{
	public:char name[20],prn[10],address[40],email[20],division[20];
	            long int mobile_number;
	            float grade_point;
	public:void getdata();
		    void putdata(int);
		    void ptdata(int);
};
void student::getdata()
{
		cout<<"enter name"<<endl;
		cin>>name;
		cout<<"enter prn"<<endl;
		cin>>prn;
		cout<<"enter address"<<endl;
		cin>>address;
		cout<<"enter email"<<endl;
		cin>>email;
		cout<<"enter division"<<endl;
		cin>>division;
		cout<<"enter mobile number"<<endl;
		cin>>mobile_number;
		cout<<"enter grade point"<<endl;
		cin>>grade_point;
	
}
void student:: putdata(int sr)
{ 	
		cout<<sr<<setw(14)<<name<<setw(15)<<address<<setw(20)<<email<<setw(15)<<mobile_number<<endl;
}
void student::ptdata(int sr)
{
		cout<<sr<<setw(14)<<name<<setw(12)<<prn<<setw(8)<<division<<setw(12)<<grade_point<<endl;	
}
int main()
{	
	int sr=0,i;
	student s[3];
	for(i=0;i<3;i++)
	{
		
		s[i].getdata();
		
	}
	cout<<"personal data"<<endl;
	cout<<"sr_no"<< setw(10)<< "name"<< setw(15)<<" address"<< setw(15)<<" email"<< setw(20)<< "mobile_no "<<endl;
	for(i=0;i<3;i++)
	{
		sr++;
		s[i].putdata(sr);
		
	}
	sr=0;
	cout<<"acadamic data"<<endl;
	cout<<"sr_no"<< setw(10) <<"name"<< setw(10)<< "prn"<< setw(12)<<" division"<< setw(15)<<"grade_point"<<endl;
	for(i=0;i<3;i++)
	{	sr++;
		s[i].ptdata(sr);
	}
}
