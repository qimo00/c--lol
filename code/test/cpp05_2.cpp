// �������ص����ӣ����ؿ�������ͬ�ĺ�����ʾ��ͬ�Ĺ���
//ֻ��ͨ����ͬ�Ĳ����������أ�������ͨ����ͬ�ķ���ֵ��������

#include <iostream>
using namespace std;
void converTemperature(double tempin,char typein);
void converTemperature(int tempin,char typein);   //��������������

int main()
{
    double tempin;
    int tempinint;
    char typein;

    cout<< "please input a temper";
    cin >> tempin >> typein;    //���ӿո񣬣�������Ҳ������ͬ����
    cin.ignore(100,'\n');
    cout << "\n";
    converTemperature(tempin,typein);

    cout<< "please input a temper";
    cin >> tempinint >> typein;
    cin.ignore(100,'\n');
    cout << "\n";
    converTemperature(tempinint,typein);
    return 0;

}

void converTemperature(double tempin,char typein)
{
    double tempout;
    char typeout;

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

}

void converTemperature(int tempin,char typein)
{
    int tempout;
    char typeout;

     switch (typein)
    {
        case 'c':
        case 'C':
            tempout = tempin *9/5 +32;
            typeout = 'F';
            typein = 'C';
            break;
        case 'f':
        case 'F':
            tempout = (tempin - 32)*5/9;
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

}

