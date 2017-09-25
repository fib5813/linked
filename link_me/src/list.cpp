#include "node.h"
#include "list.h"
#include <stdlib.h>
#include <iostream>

list::list(){
    head = NULL;
}

void list::add_node(int value){
    node *new_node = new node();
    new_node->element = value;
    new_node->ptr = NULL;
    //std::cout << "new element :"<< new_node.element << '\n';
    //std::cout << new_node.ptr << '\n';
    if (NULL == head){
        head = new_node;
        std::cout << "head= "<<head << '\n';
    }
    else{
        node *end_ptr = head;
        std::cout <<"end_ptr = "<< end_ptr << '\n';
        while (end_ptr->ptr != NULL){
            std::cout << end_ptr->ptr << "\t" << end_ptr->element << '\n';
            end_ptr = end_ptr->ptr;
        }
        end_ptr->ptr = new_node;
        std::cout<<new_node<<"\t"<<end_ptr->element<<"\n";
    }
}

void list::print_list(){
    node *curr_ptr = head;
    std::cout<<"^^^^^^^^^^^^^^^^^"<<"\n";
    while(curr_ptr->ptr!=NULL){
        std::cout << curr_ptr->element << '\n';
        curr_ptr = curr_ptr->ptr;
    }
    std::cout << curr_ptr->element << '\n';
}
