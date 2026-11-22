#include<iostream>
using namespace std;
class Parent1
{
    protected:
    int a;
    public:
    void inpA()
    {
        cout<<"enter 1st number: ";
        cin>>a;
    }
};
class Parent2
{
    protected:
    int b;
    public:
    void inpB()
    {
        cout<<"enter 2nd number: ";
        cin>>b;
    }
};
class child: public Parent1,public Parent2
{
    int c;
    public:
    void sum()
    {
        c=a+b;
        cout<<"sum= "<<c<<endl;
    }
};
int main()
{
    child c;
    c.inpA();
    c.inpB();
    c.sum();
}