//定义数组容纳10个整数，计算这些值的累加和，平均值并输出
//为了提高兼容性，用宏定义决定数目

#include <iostream>
#define ITEM 5
using namespace std;

int main()
{
    int num[ITEM];
    int sum = 0;
    float average;
    cout << "input" << ITEM <<" numbers " << endl;
    for (int i=0;i<ITEM;i++)
    {
        cout << "input the " << i+1 <<" number: ";
        while ( !(cin >> num[i] ) )
        {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "input another number:"<<endl;

        }
        sum = sum + num[i];
    }
    average = (float)sum / ITEM;
    cout << "the sum is " << sum << '\n'
      << "the average is " << average << endl;
}
