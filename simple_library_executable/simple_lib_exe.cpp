#include <lib.h>
#include <iostream>
#include <memory>

int main()
{
    std::unique_ptr<int> count_ptr{};
    count_ptr = std::make_unique<int>(4);

    for (int i{}; i < *count_ptr; ++i)
    {
        std::cout << simple::simpleInt() << std::endl;
    }
    return 0;
}
