#include <iostream>
using namespace std;

int max_digit_check(int m, int n)
{
    if (m<n)
    {
        cout<<m<<endl;
        return m;
    }
    else
    {
        cout<<n<<endl;
        return n;
    }
}


int main()
{
    int a = 33, b = 20;
    int check = max_digit_check(a, b);
    cout<< "check is "<<check<<endl;
return 0;
}
