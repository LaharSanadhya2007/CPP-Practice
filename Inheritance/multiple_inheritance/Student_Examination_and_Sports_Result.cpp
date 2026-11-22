#include<iostream>
using namespace std;
class Student
{
    protected:
    char name[20]; 
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
class Sports
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
class Result: public Student, public Sports
{
    int examMarks, totalMarks;
    public:
    void getExamMarks()
    {
        cout<<"enter examination marks: ";
        cin>>examMarks;
    }
    void calculateTotal()
    {
        totalMarks=examMarks+sportsMarks;
    }
    void displayResult()
    {
        cout<<"ENTER STUDENT NAME: "<<name<<endl;
        cout<<"ENTER STUDENT ROLL NUMBER: "<<rollNo<<endl;
        cout<<"ENTER STUDENT SPORTS MARKS: "<<sportsMarks<<endl;
        cout<<"ENTER STUDENT EXAMINATION MARKS: "<<examMarks<<endl;
        cout<<"ENTER STUDENT TOTAL MARKS: "<<totalMarks<<endl;

    }
};
int main()
{
    Result r;
    r.getStudentDetails();
    r.getSportsMarks();
    r.getExamMarks();
    r.calculateTotal();
    r.displayResult();
}