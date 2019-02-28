/******************************************************************************

CS201 1.5.1

Write a program in C++ to create and display a Singly Linked List
*******************************************************************************/
#include <iostream>
#include "Node.h"
#include "List.h"

using namespace std;



int main()
{
    
    List* mylist = new List;

    
    for(double i=30.0; i>0.0; i--){
        
        mylist ->push_back(i);
    }
    
    mylist ->print_list();
    

    return 0;
}
