#include <iostream>
using namespace std;

int fun(int x)
{
    x=30;
    return x;
}


int main()
{
    int x = 20;
    int a=fun(x);
    cout << "New x = " << a<<endl;
    return 0;
}

