#include <iostream>

int main()
{
    int i = 0;
    bool condition = true;
    for ( ; i < 5;)
    {
        std::cout << "Hello World" << std::endl;
        i++;
        if (!(i < 5))
            condition = false;
    }
    std::cout << condition << std::endl;
    return 0;
}
