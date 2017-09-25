
#ifndef _NODE
#define _NODE

class node{
public:
    node();
    void set_element(int value);
    void set_ptr(node *pointer_value);
    int get_element(void);

private:
    int element;
    node* ptr;

};



#endif
