#include<iostream>
using namespace std;
class parent
{
    protected:
    int a,b;
    public:
    void input()
    {
        cout<<"enter 2 nums: ";
        cin>>a>>b;
    }
};
class child1: public parent
{
    int c;
    public:
    void sum()
    {
        c=a+b;
        cout<<"sum= "<<c<<endl;
    }
};
class child2: public parent
{
    int d;
    public:
    void mul()
    {
        d=a*b;
        cout<<"multiply= "<<d<<endl;
    }
};
int main()
{
    child1 a;
    child2 m;
    a.input();
    a.sum();
    m.input();
    m.mul();
    
}