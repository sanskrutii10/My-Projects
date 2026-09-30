#include<iostream>
using namespace std;
class Student
{
	int roll;
	char name[20];
	public:
	void getdata()
	{
		cout<<"\n_______________________________";
		cout<<"\nEnter roll no.: ";
		cin>>roll;
		cout<<"Enter student name: ";
		cin>>name;
	}
	void putdata()
	{
		cout<<"\n_______________________________";
		cout<<"\n********Student Marklist********";
		cout<<"\n_______________________________";
		cout<<"\nRoll no.: "<<roll;
		cout<<"\nStudent name :"<<name;
	}
};
class StudentExam : public Student
{
	public:
	int sub1,sub2,sub3,sub4;
	float per;
	public:
	void accept_data()
	{
		getdata();
		cout<<"\nEnter Marks for Subject 1: ";
		cin>>sub1;
		cout<<"Enter Marks for Subject 2: ";
		cin>>sub2;
		cout<<"Enter Marks for Subject 3: ";
		cin>>sub3;
		cout<<"Enter Marks for Subject 4: ";
		cin>>sub4;
		
	}
	void display_data()
	{
		putdata();
		cout<<"\nMarks of Subject 1 : "<<sub1;
		cout<<"\nMarks of Subject 2 : "<<sub2;
		cout<<"\nMarks of Subject 3 : "<<sub3;
		cout<<"\nMarks of Subject 4 : "<<sub4;
	}
	void calculate()
	{
		per=(sub1+sub2+sub3+sub4)/4.0;
		cout<<"\nTotal Percentage : "<<per;
		cout<<"\n_______________________________\n";
	}
};
int main()
{
StudentExam S;
int i,cnt;
cout<<"\nEnter no.of student you want:";
cin>>cnt;
for(i=0;i<cnt;i++)
{
S.accept_data();
S.display_data();
S.calculate();
}
return 0;
}

