#include<iostream>
#include<windows.h>
#define FULL_GAS 85

class Car
{
public :
    Car(void);
    std::string color;
    std::string engine;
    int gas_tank;
    unsigned int Whell;

    void setWhell(int Whl);
    void setEngine(std::string eng);
    void setColor(std::string color);
    void fill_tank(float liter);
    void warning(void);
    int running (void);
};
Car::Car(void)
{
    color = "white";
    engine = "ae86";
    Whell = 5;
    gas_tank = FULL_GAS;
}

void Car::setEngine(std::string eng)
{
    engine = eng;
}
void Car::warning()
{
    std::cout << "warning \n";
}

void Car::setColor(std::string set_color)
{
    color = set_color;
}
void Car::fill_tank(float liter)
{

    gas_tank += liter;
    if (gas_tank>FULL_GAS)
    {
        gas_tank = FULL_GAS;
    }
}

int Car::running()
{
    int i;
    std::cout << "sidnfsdlfinsidfnsdl\n";
    gas_tank--;
    std::cout << "haisheng: " << 100*gas_tank/FULL_GAS <<"\n";
    if (gas_tank < 10)
        {
            warning();
            std::cout << "ÊÇ·ñ¼ÓÓÍ£¨y/n£©" ;
            std::cin >> i;
            if ('Y'==i || 'y' == i)
            {
                fill_tank(FULL_GAS);
            }
        }
    return gas_tank;
}


int main()
{
    char i;
    Car mycar;

    mycar.gas_tank =  FULL_GAS;
    //mycar.setColor("black");
    mycar.setEngine("AE86");
    std::cout << mycar.color;
    while(mycar.running())
    {

    }


    return 0;


}
