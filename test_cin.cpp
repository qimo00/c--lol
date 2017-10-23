#include<iostream>
using namespace std;

int main()
{
    char b,c;
    char a,str[8];
    a = cin.get();
    b = cin.peek();
    c =cin.peek();


    cin.getline(str,6);
    cout << str <<endl;
    cout << str[0] <<' '<<str[3]<<endl;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    return 0;

}
