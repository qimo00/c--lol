#include<iostream>
#include<string>

class Pet
{
    public:
    Pet(std::string theName);
    ~Pet();
    static int getCount();

    protected:
    std::string name;

    private:
    static int count;
};
class Dog : public Pet
{
    public:
    Dog(std::string theName);
};

class Cat:public Pet
{
    public :
    Cat(std::string theName);
};

int Pet::count = 0;   //在静态区域给Pet::count 分配内存，并赋值

Pet::Pet(std::string theName)
{
    name = theName;
    count++ ;
    std::cout << "the " << name << " is born!!!\n\n";

}
Pet::~Pet()
{
    count-- ;
    std::cout << name << " is dead~!!!~\n\n\n" ;
}
int Pet::getCount()
{
    return count;
}
Dog::Dog(std::string theName) : Pet(theName)
{
}
Cat::Cat(std::string theName) : Pet(theName)
{
}

int main()
{
    Dog dog("TOM");
    Cat cat("Jerry");

    std::cout<< "now there is " << Pet::getCount() << std::endl;
            //使用static才可以这样调用类的方法，，，
    {
        Dog dog2("Tom @");
        Cat cat2("Jerry @");
        std::cout<< "now there is " << Pet::getCount() << std::endl;
    }

    std::cout<< "now there is " << Pet::getCount() << std::endl;

}







