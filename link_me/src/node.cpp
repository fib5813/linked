#include "node.h"
#include <stdlib.h>

node::node(){
    element = 0;
    ptr = NULL;
}

void node::set_element(int value){
    element = value;
}

void node::set_ptr(node *pointer_value){
    ptr = pointer_value;
}

int node::get_element(void){
    return element;
}
