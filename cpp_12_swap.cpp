#include<iostream>
#include <string>
using namespace std;
void swap (int *x ,int *y);

int main()
{
    int a,b;
    a = 1;
    b = 1999;
    cout << a <<"..." <<b<<"\n";
    swap(&a, &b);
    cout << a <<"..." <<b<<"\n";

    return 0;
}
void swap (int *x ,int *y)  //只是声明传入的是指针，并不表示解引用
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
