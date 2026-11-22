#include<iostream>
using namespace std;
class Employee
{
    protected:
    char name[20];
    int basicSalary;
    public:
    void getEmployeeDetails()
    {
        cout<<"enter employee name: ";
        cin>>name;
        cout<<"enter salary: ";
        cin>>basicSalary;
    }
};
class Salary: public Employee
{
    int bonus, TotalSalary;
    public:
    void calculateSalary()
    {
        
        cout<<"enter bonus: ";
        cin>>bonus;
        TotalSalary = basicSalary + bonus;
    }
    void displaySalary()
    {
        cout<<"EMPLOYEE NAME: "<<name<<endl;
        cout<<"BASIC SALARY: "<<basicSalary<<endl;
        cout<<"BONUS: "<<bonus<<endl;
        cout<<"TOTAL SALARY: "<<TotalSalary<<endl;
    }
};
int main()
{
    Salary s;
    s.getEmployeeDetails();
    s.calculateSalary();
    s.displaySalary();
}