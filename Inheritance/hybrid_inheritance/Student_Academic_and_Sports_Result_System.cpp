#include<iostream>
using namespace std;
class Student
{
    protected:
    string name; 
    int rollNo;
    public:
    void getStudentDetails()
    {
        cout<<"enter name: ";
        cin>>name;
        cout<<"enter roll no: ";
        cin>>rollNo;
    }
};
class Test: public virtual Student
{
    protected:
    int subject1, subject2;
    public:
    void getTestMarks()
    {
        cout<<"enter marks of subject 1: ";
        cin>>subject1;
        cout<<"enter marks of subject 2: ";
        cin>>subject2;
    }
};
class Sports: public virtual Student
{
    protected:
    int sportsMarks;
    public:
    void getSportsMarks()
    {
        cout<<"enter sports marks: ";
        cin>>sportsMarks;
    }
};
class Result:public Test,public Sports
{
    protected:
    int totalMarks;
    public:
    void calculateResult()
    {
       totalMarks= subject1 + subject2 + sportsMarks;

    }
    void displayResult()
    {
        cout<<"ENTER STUDENT NAME: "<<name<<endl;
        cout<<"ENTER STUDENT ROLL NUMBER: "<<rollNo<<endl;
        cout<<"ENTER STUDENT SPORTS MARKS: "<<sportsMarks<<endl;
        cout<<"STUDENT MARKS IN SUBJECT 1= "<<subject1<<endl;
        cout<<"STUDENT MARKS IN SUBJECT 2= "<<subject2<<endl;
        cout<<"ENTER STUDENT SPORTS MARKS: "<<sportsMarks<<endl;
        cout<<"ENTER STUDENT TOTAL MARKS: "<<totalMarks<<endl;

    }
};
int main()
{
    Result r;
    r.getStudentDetails();
    r.getTestMarks();
    r.getSportsMarks();
    r.calculateResult();
    r.displayResult();
}