#include <iostream>
#include "node.h"

int main()
{
    node start;
    start.set_element(33);
    int value = start.get_element();
    std::cout << value << '\n';

    return 0  ;
}
