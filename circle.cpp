#include<iostream>
#include<cmath>
using namespace std;

class circle
{
    protected:
        int centerx;
            int centery;
            int radius;
                   
    public:
        circle();
            circle(int cx,int cy);
            circle(int cx,int cy,int r);
            void calcarea();
            void calcircumference();

};

class line:public circle
{
    private:int x1;int x2;int y1;int y2;
        public:float distance, c;
            float m;
        public:
            void getdata();
            void istangent() ;
            void istangent(float d);

};

circle::circle()
{
centerx=0;
centery=0;
radius=0;
}

circle::circle(int cx,int cy)
{
centerx=cx;
centery=cy;
cout<<"Points of center of circle1 are:"<<cx<<"&"<<cy<<endl;
}

circle::circle(int cx,int cy,int r)
{
cout<<"Enter the radius of a circle:"<<endl;
cin>>r;
centerx=cx;
centery=cy;
radius=r;
cout<<"Points of center of circle2 are:"<<cx<<"&"<<cy<<endl;
cout<<"Radius of circle2:"<<r<<endl;
}

void circle::calcircumference()
{
float circumf=2*3.14*radius;
cout<<"Circumference  of circle2:"<<circumf<<endl;
}

void circle::calcarea()
{
float area;
area=3.14*radius*radius;
cout<<"Area of circle2:"<<area<<endl;
}

void line::getdata()
{
cout<<"Enter the point1(x,y) of line:";
cin>>x1>>y1;
cout<<"Enter the point2(x,y) of line:";
cin>>x2>>y2;
}

void line::istangent()
{
m=(y2-y1)/(x2-x1);
cout<<"Slope of line:"<<m<<endl;
m=-1/m;
c=y1-(m*x1);
cout<<"Y-intercept of a circle is:"<<c<<endl;
distance=abs((m*centerx*centery+c)/sqrt(1+m*m));
}

void line::istangent(float d)
{
d=distance;
if(d==radius)
 {
  cout<<"Line is tangent to a circle2."<<endl;
 }
 else
 {
 cout<<"Line is not tangent to a circle2."<<endl;
 }
}
int main ()
{
circle c1;
circle c2(4,5);
circle c3(5,10,1);
c3.calcircumference();
c3.calcarea();

line l1;
l1.getdata();
l1.istangent();
l1.istangent(1) ;
}
