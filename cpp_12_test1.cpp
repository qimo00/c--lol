#include<iostream>
#include<string>
using namespace std;
void changeAge(int *age,int newage);

int main()
{
    int age = 24;
    cout << "now age is" << age << "\n";
    changeAge( &age , age + 1);
    cout << "age is " << age <<"\n";

}
void changeAge(int *age, int newage) //传入一个地址，修改地址内保存的内容
{
    *age = newage;
    cout << "this age is " << *age << "\n";

}
