#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout << "input a string " <<endl;
    //cin>>str;     //输入一段字符串，保存在str中
    getline (cin,str);  //从cin中读取一行；

    cout <<str<<endl;

    return 0;

}
