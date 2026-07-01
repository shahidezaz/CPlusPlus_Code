#include <iostream>
using namespace std;

bool max_digit_check(int m, int n)
{
    if (m<n)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    int a = 13, b = 20;
    bool check; 
    check=max_digit_check(a, b);
    cout<< "check is "<<check<<endl;
return 0;
}
