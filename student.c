#include<stdio.h>
void getdata();
void putdata();
struct student
{
	char name[50],address[50],email[20],class[50];
	float gp;
	long int mn;
	int prn,i;
}s1,s2,s3;
void getdata()
{
	int i;
	printf(" for student 1\n");
	printf("enter  name of student\n");
	scanf("%s",&s1.name);
	printf("enter  address");
	scanf("%s",&s1.address);
	printf("enter  prn of student\n");
	scanf("%d",&s1.prn);
	printf("enter  email address of student\n");
	scanf("%s",&s1.email);
	printf("enter  class of student");
	scanf("%s",&s1.class);
	printf("enter  grade point of student\n");
	scanf("%f",&s1.gp);
	printf("enter  mobile no of student\n");
	scanf("%ld",&s1.mn);

	printf(" for student 2\n");
	printf("enter  name of student\n");
	scanf("%s",&s2.name);
	printf("enter  address");
	scanf("%s",&s2.address);
	printf("enter  prn of student\n");
	scanf("%d",&s2.prn);
	printf("enter  email address of student\n");
	scanf("%s",&s2.email);
	printf("enter  class of student");
	scanf("%s",&s2.class);
	printf("enter  grade point of student\n");
	scanf("%f",&s2.gp);
	printf("enter  mobile no of student\n");
	scanf("%ld",&s2.mn);
	
	printf(" for student 3\n");
	printf("enter  name of student\n");
	scanf("%s",&s3.name);
	printf("enter  address");
	scanf("%s",&s3.address);
	printf("enter  prn of student\n");
	scanf("%d",&s3.prn);
	printf("enter  email address of student\n");
	scanf("%s",&s3.email);
	printf("enter  class of student\n");
	scanf("%s",&s3.class);
	printf("enter  grade point of student\n");
	scanf("%f",&s3.gp);
	printf("enter  mobile no of student\n");
	scanf("%ld",&s3.mn);
}
int main()
	{
int sr, i;
	getdata();
	
	printf("student personal data\n");
	printf("sr\tname\t\taddress\t\tmobileno\t\t\temail\n");
sr=1;
	printf("%d\t%s\t\t%s\t\t%ld\t\t\t%s\n",sr,s1.name,s1.address,s1.mn,s1.email);
sr=2;
	printf("%d\t%s\t\t%s\t\t%ld\t\t\t%s\n",sr,s2.name,s2.address,s2.mn,s2.email);
sr=3;
	printf("%d\t%s\t\t%s\t\t%ld\t\t\t%s\n",sr,s3.name,s3.address,s3.mn,s3.email);
	
	printf("student acadamic data\n");
	printf("sr\tname\t\tclass\t\tprn\t\t\tgrade point\n");
sr=1;
	printf("%d\t%s\t\t%s\t\t%d\t\t\t%2f\n",sr,s1.name,s1.class,s1.prn,s1.gp);
sr=2;
	printf("%d\t%s\t\t%s\t\t%d\t\t\t%2f\n",sr,s2.name,s2.class,s2.prn,s2.gp);
sr=3;
	printf("%d\t%s\t\t%s\t\t%d\t\t\t%2f\n",sr,s3.name,s3.class,s3.prn,s3.gp);
}			
