#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout << "input a string " <<endl;
    //cin>>str;     //����һ���ַ�����������str��
    getline (cin,str);  //��cin�ж�ȡһ�У�

    cout <<str<<endl;

    return 0;

}
