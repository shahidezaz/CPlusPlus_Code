#include <iostream>
using namespace std;

int func1(int a, int b)
{
    int z;
    z=a+b;
    return z;
}
int func2(int a,  int b)
{
    int m;
    m=a+b;
    return m;
}
int func3(int a, int b)
{
    cout<<a+b<<endl<<endl;
return a+b;
}

int main()
{
    int a, b,y;
    a=func1(9,2);
    b=func2(4,8);
    cout<<a<<endl;
    cout<<b<<endl;
    y=func3(a,b);
    cout<<y<<endl;
return 0;
}