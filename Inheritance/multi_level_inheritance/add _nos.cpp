#include<iostream>
using namespace std;
class grandp
{
    protected:
    int a;
    public:
    void inputA()
    {
        cout<<"enter 1st value: ";
        cin>>a;
    }
};
class parent: public grandp
{
    protected:
    int b;
    public:
    void inputB()
    {
        cout<<"enter 2nd value: ";
        cin>>b;
    }
};
class child: public parent
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
    c.inputA();
    c.inputB();
    c.sum();
}