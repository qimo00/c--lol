//������������10��������������Щֵ���ۼӺͣ�ƽ��ֵ�����
//Ϊ����߼����ԣ��ú궨�������Ŀ

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
