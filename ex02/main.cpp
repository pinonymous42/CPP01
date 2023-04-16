#include <iostream>

int main(void)
{
    std::string brain("HI THIS IS BRAIN");
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;

    std::cout << "print the memory address" << std::endl;
    std::cout << std::hex << &brain << std::endl;
    std::cout << std::hex << stringPTR << std::endl;
    std::cout << std::hex << &stringREF << std::endl;

    std::cout << "print the value" << std::endl;
    std::cout << brain << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
}