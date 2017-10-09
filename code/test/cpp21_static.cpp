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

int Pet::count = 0;   //�ھ�̬�����Pet::count �����ڴ棬����ֵ

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
            //ʹ��static�ſ�������������ķ���������
    {
        Dog dog2("Tom @");
        Cat cat2("Jerry @");
        std::cout<< "now there is " << Pet::getCount() << std::endl;
    }

    std::cout<< "now there is " << Pet::getCount() << std::endl;

}







