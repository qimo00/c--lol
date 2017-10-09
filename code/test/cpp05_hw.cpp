//重载函数：calc（）：
//一个参数，求平方；两个参数，求积；三个参数，求和
// 存在问题 ：如何
#include<iostream>
using namespace std;
double calc(double c1);
double calc(double c1,double c2);
double calc(double c1,double c2,double c3);

int main()
{
    double c1,c2,c3;
    cout << "input 3 numbers(apart by space):" << endl;
    cin >> c1 >> c2 >> c3;
    cout << "1 number "<< calc(c1)<<endl;
    cout << "2 numbers " << calc(c1,c2)<< endl;
    cout << "3 numbers "<< calc(c1,c2,c3) <<endl;

    return 0;
}
double calc(double c1)
{
    return c1*c1;
}
double calc(double c1,double c2)
{
    return c1*c2;
}
double calc(double c1,double c2,double c3)
{
    return c1+c2+c3;
}
