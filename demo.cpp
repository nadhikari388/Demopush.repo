#include <iostream>
namespace myspace{
    void sayHello()
    {
        std::cout << "Hello, world form myspace!"<< std::endl;
    }
}

int main()
{
myspace::sayHello();
return 0;
}
