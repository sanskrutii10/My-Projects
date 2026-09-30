#include<iostream>
using namespace std;

class Student
{
public:
    int roll;
    char name[20];

    void stud()
    {
        cout<<"********Final Exam********";
    }
};

class getdata : virtual public Student
{
public:
    void gdata()
    {
        cout<<"\n_______________________________";
        cout<<"\nEnter roll no.: ";
        cin>>roll;

        cout<<"Enter student name: ";
        cin>>name;
    }
};

class putdata : virtual public Student
{
public:
    void pdata()
    {
        cout<<"\n_______________________________";
        cout<<"\n********Student Marklist********";
        cout<<"\n_______________________________";
        cout<<"\nRoll no.: "<<roll;
        cout<<"\nStudent name: "<<name;
    }
};

class StudentExam : public getdata, public putdata
{
public:
    int sub1,sub2,sub3,sub4;
    float per;

    void accept_data()
    {
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
        S.Student::stud();
        S.gdata();
        S.pdata();
        S.accept_data();
        S.display_data();
        S.calculate();
    }

    return 0;
}
