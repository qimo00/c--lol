#include<iostream>
using namespace std;
int main()
{
    const int SIZE = 50;
    char buf[SIZE];

    cout << "please input some words:"     <<endl;
    cin.read (buf , 20);
    cout << "the word is:";
    cout.write(buf ,20);
    cout << endl;
    return 0;

}
