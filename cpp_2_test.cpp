#include<iostream>
using namespace std;

int main()
{
    int i;
    int sum = 0;
    char ch;

    cout << "������һ�����Ϳո�" << endl;
    while (cin >> i){
        sum += i;
        while (cin.peek() == ' ')
        {
            cin.get();
        }
        if (cin.peek() == '\n')
        {
            break;
        }
    }

    cout << "ans is:" << sum << endl;
    return 0;
}
