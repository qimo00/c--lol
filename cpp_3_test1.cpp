#include<iostream>

using namespace std;

int main()
{
    char p;
    cout << "shuru yiduan wenben \n";
    while(cin.peek() != '\n'){
        p = cin.get();
        cout << p;
    }
    cout << endl;

    return 0 ;
}
