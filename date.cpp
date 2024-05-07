#include<iostream>
using namespace std;
class Date
{
	private :int day;
		      int month;
		      int year;
		      string s;
	public :

 	void display()
	{
		cout<<day<<"-"<<month<<"-"<<year<<endl;
		switch(month)
		{
			case 1:
			s="jan";
			break;
			case 2:
			s="feb";
			break;
			case 3:
			s="mar";
			break;
			case 4:
			s="apr";
			break;
			case 5:
			s="may";
			break;
			case 6:
			s="jun";
			break;
			case 7:
			s="jul";
			break;
			case 8:
			s="aug";
			case 9:
			s="sep";
			break;
			case 10:
			s="oct";
			break;
			case 11:
			s="nov";
			break;
			case 12:
			s="dec";
			break;
			default :
			s="invalid";
			break;
		}
		cout<<day<<"-"<<s<<"-"<<year<<endl;
		year=year%100;
		cout<<day<<"/"<<month<<"/"<<year<<endl;
	}
	 Date(int d,int m,int y)
	{
		day=d;
		month=m;
		year=y;
	}
};
int main()
{
	int dd,yy,dd2,yy2,d,m,y;
	int mm,mm2;
	cout<<"enter the day,month,year";
	cin>>dd>>mm>>yy;
	Date d1(dd,mm,yy);
	cout<<"enter the day,month,year";
	cin>>dd2>>mm2>>yy2;
	Date d2(dd2,mm2,yy2);
	d1.display();
	d2.display();
	if(dd<dd2)
	{
		d=dd2-dd;
	}
	else
	{
		if(mm2==2||mm2==4||mm2==6||mm2==8||mm2==9||mm2==11||mm2==1)
		{
			dd2=dd2+31;
			d=dd2-dd;
		}
		else if(mm2==3&&yy2%10==4)
		{
			dd2=dd2+29;
			d=dd2-dd;
		}
		else if(mm2==3&&yy2%10!=4)
		{
			dd2=dd2+28;
			d=dd2-dd;
		}
		else
		{
			dd2=dd2+30;
			d=dd2-dd;
		}
	}
	if(mm2>=mm)
	{
		m=mm2-mm;
	}
	else
	{
		mm2=mm2+12;
		m=mm2-mm;
		yy2--;
	}

	y=yy2-yy;
	cout<<"DIFFERANCE"<<endl;
	cout<<y<<"year"<<m<<"month"<<d<<"days";
}	
			
