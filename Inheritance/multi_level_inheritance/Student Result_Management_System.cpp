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
        cout<<"enter roll no.: ";
        cin>>rollNo;
    }

};
class Marks: public Student
{
    protected:
    float subject1, subject2, subject3;
    public:
    void getMarks()
    {
        cout<<"enter marks of subject 1: ";
        cin>>subject1;
        cout<<"enter marks of subject 2: ";
        cin>>subject2;
        cout<<"enter marks of subject 3: ";
        cin>>subject3;
    }

};
class Result: public Marks
{
    float total, percentage;
    public:
    void calculateResult()
    {
        total=subject1 + subject2 + subject3;
        percentage=(total/300)*100;
    }

    void displayResult()
    {
        cout<<"STUDENT NAME= "<<name<<endl;
        cout<<"STUDENT ROLL NO= "<<rollNo<<endl;
        cout<<"STUDENT MARKS IN SUBJECT 1= "<<subject1<<endl;
        cout<<"STUDENT MARKS IN SUBJECT 2= "<<subject2<<endl;
        cout<<"STUDENT MARKS IN SUBJECT 3= "<<subject3<<endl;
        cout<<"STUDENT TOTAL MARKS= "<<total<<endl;
        cout<<"STUDENT PERCENTAGE= "<<percentage<<endl;
    }

};
int main()
{
    Result r;
    r.getStudentDetails();
    r.getMarks();
    r.calculateResult();
    r.displayResult();
}
