#ifndef LIST_H
#define LIST_H
class List {
private:

// attributes
    Node* first;
    int count;
    
// behaviors
public:
    Node* node_at(int i);
   
   // get the value at some position
    double val_at(int i);
   
   // add a new node at the beginning of a list
    void insert_front(double value);
   
   // add a new node to the end of the list
    void push_back(double value);
   
    // insert a new node before the i'th node in the list
    void insert_before(int i, double value);
   
   //remove node at some position
    void remove_at(int i);
   
   // print all the values
    void print_list();
    
    // free up all the memory used by the list
    void delete_list();
    
};

#endif