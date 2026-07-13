#include <stdio.h>
//using namespace std;

int x=20; //Global Varaiable

int func1()
{
    int x=30;
    printf("%d\n", x);
    return x;
}

int func2()
{
    int x=10;
    printf("%d\n", x);
    return x;
}

int main()
{
    printf("Function m1: %d\n", x);
    func1();
    func2();
    printf("Function m2: %d\n", x);
    return 0;       
}