#include<iostream>
#include<string>

class Lovers
{
public:
    Lovers(std::string theName);
    void kiss(Lovers *lover);  //声明一个Lovers型的指针。。。
    void ask(Lovers *lover, std::string something);

protected:
    std::string name;

    friend class Others;
};
class Boyfriend : public Lovers
{
    public:
    Boyfriend(std::string theName);
};
class Girlfriend : public Lovers
{
public :
    Girlfriend(std::string theName);
};

class Others
{
public :
    Others(std::string theName);
    void kiss(Lovers *lover);

protected :
    std::string name;
};

Lovers::Lovers(std::string theName)
{
    name = theName;
}
void Lovers::kiss(Lovers *lover)
{
    std::cout << "kissssssssing " << lover -> name <<std::endl;
}
void Lovers::ask(Lovers *lover, std::string something)
{
    std::cout << "askkkkking  " << lover -> name << "  to  "
            << something << std::endl;
}
Boyfriend :: Boyfriend(std::string theName) : Lovers(theName)
{

}
Girlfriend::Girlfriend(std::string theName): Lovers(theName)
{

}
Others::Others(std::string theName)
{
    name = theName;
}
void Others::kiss(Lovers *lover)
{
    std::cout << "kissssssssing " << lover -> name <<std::endl;
}


int main()
{
    Boyfriend boyfriend("AAA");
    Girlfriend girlfriend ("ggg");

    Others others("what");

    girlfriend.kiss(&boyfriend);
    girlfriend.ask(&boyfriend," heiheihei ");

    others.kiss(&girlfriend);

    return 0;
}



