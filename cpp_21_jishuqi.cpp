#include<iostream>
#include<string>

class Pet
{
public:
    Pet(std::string theName);
    void eat();
    void sleep();
    virtual void play();  //ding yi wei xu fang fa ,zai zi lei zhong dou ji cheng xu fang fa .

protected:
    std::string name;
};

class Cat : public Pet
{
public :
    Cat(std::string theName);
    void climb();
    void play();
};
class Dog : public Pet
{
public :
    Dog(std::string theName);

    void bark();
    void play();  //overload£»fugai.
};
Pet::Pet(std::string theName)
{
    name = theName;
}
void Pet::eat()
{
    std::cout << name <<" is eating@@!~~\n";
}
void Pet::sleep()
{
    std::cout << name <<" is sleeping !@#~\n";
}
void Pet::play()
{
    std::cout << name << " is playing !@#~~~~\n";
}
Cat::Cat(std::string theName) : Pet(theName)
{

}
void Cat::climb()
{
    std::cout << name << " is climbing!@#~!@#~!#~!\n";
}
void Cat::play()
{
    Pet::play();
    std::cout << name << " is a cat pppppp!@#!2\n";
}
Dog::Dog(std::string theName) : Pet(theName)
{

}
void Dog::bark()
{
    std::cout << name << " is barking@!#!@#~~~\n";
}
void Dog::play()
{
    Pet::play();
    std::cout << name << " is a dog ssssssss!@#\n";
}

int main()
{
    Pet *cat = new Cat("cccaaattt1111");
    Pet *dog = new Dog("dddoooggg2222");

    cat ->eat();
    cat -> sleep();
    cat -> play();
    dog ->eat();
    dog -> sleep();
    dog -> play();
    delete cat;
    delete dog;
}
