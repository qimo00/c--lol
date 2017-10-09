#include <iostream>
using namespace std;
int main()
{
    double tempin,tempout;
    char typein,typeout;

    cout<< "please input a temper";
    cin >> tempin >> typein;
    cin.ignore(100,'\n');
    cout << "\n";

    switch (typein)
    {
        case 'c':
        case 'C':
            tempout = tempin *9.0/5.0 +32;
            typeout = 'F';
            typein = 'C';
            break;
        case 'f':
        case 'F':
            tempout = (tempin - 32)*5.0/9.0;
            typeout = 'C';
            typein = 'F';
            break;

        default:
            typeout = 'E';
            break;
    }
    if (typeout != 'E')
    {
        cout << tempin << typein <<" = "<<tempout <<typeout
                <<"\n\n";

    }
    else
    {
        cout << "input error" << "\n\n";
    }

    cout << "please enter any word to stop";
    cin.get();

    return 0;

}




