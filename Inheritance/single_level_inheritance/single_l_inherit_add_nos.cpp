//add 2 nos.
#include <iostream>
using namespace std;
class parent
{
    protected:
    int a,b;
    public:
    void input()
    { cout<<"enter 2 numbers: ";
      cin>>a>>b;
    }
};
class child: public parent
{
    int c;
    public:
    void sum(){
    c=a+b;
    cout<<"sum= "<<c<<endl;}
};
int main()
{
    child c1;
    c1.input();
    c1.sum();
}
