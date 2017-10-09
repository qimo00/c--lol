#include<iostream>
#include<string>

class Animal  //类声明不需要（）但是最后一定要加分号；；；；
{
public:
    std::string mouth;
    std::string name;
    Animal(std::string theName);
    void eat(void);
    void eat(int et);
    void sleep(void);
    void drool(void);
};


class Turtle:public Animal
{
public:
    Turtle(std::string theName);
    void swim(void);
};

class Pig : public Animal
{
public:
    Pig(std::string theName);

    void henghengheng(void);
};

Animal::Animal(std::string theName)
{
    name = theName;
}

void Animal::eat(){
    std::cout << "i am eating;;\n" ;

}
void Animal::eat(int et)
{
    std::cout << et <<"llllls;df;;;;;;;\n";
}

void Animal::sleep(){
    std::cout << "i am sleeping;;\n";
}

void Animal::drool(){
    std::cout << "i am drooling;;\n";
}

Pig::Pig(std::string theName) : Animal(theName)
{

}
void Pig::henghengheng(){
    std::cout << "i am henghengheng;;\n";
}
//void Pig::eat()
//{
//    std::cout << "i am a pig ,i am eating ;;\n";
//}

Turtle::Turtle(std::string theName) : Animal(theName)
{

}

void Turtle::swim(){
    std::cout << "i am swimming;;\n";
}

int main()
{
    Pig pig("小猪猪");
    Turtle turtle("小龟龟");
    std::cout << "pig is " <<pig.name << "\n";
    std::cout << "turtle is "<<turtle.name << '\n';
    pig.eat();
    pig.eat(14);
    turtle.eat();
    pig.henghengheng();
    turtle.swim();

    return 0;

}





