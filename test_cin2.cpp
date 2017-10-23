#include<iostream>
#include<string>
using namespace std;
int main()
{
    while(1)
    {
        char i;
        int temp = 1;
        cout << "input 1/2/3;" << endl;
        cin >> i;
        switch( i )
        {
            case '1':
                cout << "111111" << endl;
                break;
            case '2':
                cout << "222222" << endl;
                break;
            case '3':cout << "333333" << endl;
                break;
            default :
                temp = 0;
                break;

        }
        cout << temp <<endl;
        if (temp == 0)
        {
            cout << "error \n" ;
            break;
        }

    }

    cout << "game over; \n";
    return 0;
}
