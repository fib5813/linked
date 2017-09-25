#include "node.h"
#ifndef _LIST
#define _LIST

class list{
public:
    list();
    void add_node(int value);
    void print_list(void);

private:
    node *head;

};

#endif
