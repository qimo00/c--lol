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
void swap (int *x ,int *y)  //ֻ�������������ָ�룬������ʾ������
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
