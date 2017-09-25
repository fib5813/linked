#include <iostream>
#include "node.h"
#include "list.h"

int main()
{
    list one;
    one.add_node(12);
    one.add_node(65);
    one.add_node(625);
    one.add_node(653);
    one.add_node(654);
    one.print_list();
    std::cout << "hii" << '\n';

    return 0  ;
}
