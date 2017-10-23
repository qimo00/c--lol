#include <iostream>
using namespace std;
int addArray( int *Array , int n);

int main()
{

    int data[] = {0,1,2,3,4,5,6,7,8,9};
    int size = sizeof(data) / sizeof(data[0]);

    cout << "the answer is " << addArray(data,size) << endl;
    cout << "size is " << sizeof (data) <<endl;
    cout << "sizeof data0 is "<< sizeof (data[0])<<endl;
    return 0 ;
}

int addArray(int *Array , int n )
{
    int sum = 0;
    int i;
    cout << "size of array" << sizeof (Array) <<endl;
    for (i = 0; i < n; i++){
        sum += *Array;
        Array++;
    }
    return sum;
}
