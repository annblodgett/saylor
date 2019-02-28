#include <iostream>
#include <assert.h>
#include "Node.h"
#include "List.h"

//code from Stetson University: Joshua Eckroth's "Linked Lists". URL <https://learn.saylor.org/mod/page/view.php?id=18827>

using namespace std;

Node *
List::node_at (int i)
{


  // code assumes that i is  always less than the count variable
  assert (i < this->count);

  // find the front of the list
  Node *n = this->first;

  // walk through the list until we reach the desired position
  for (int j = 0; j < i; j++)
    {

      n = n->pnext;
    }

  // return a pointer to the desired node
  return n;
}

   // get the value at some position
double
List::val_at (int i)
{

  return (node_at (i))->value;
}

   // add a new node at the beginning of a list
void
List::insert_front (double value)
{

  //make a Node object
  Node *n = new Node;

  // set the value 
  n->value = value;

  //link the pointer to the previous front element
  n->pnext = this->first;

  //change the list to list our node as first
  this->first = n;

  //our list grew by one
  this->count++;

}

   // add a new node to the end of the list
void
List::push_back (double value)
{

  //if the list is empty call insert_front
  if (this->count == 0)
    {
      insert_front (value);
    }
  else
    {

      //make a new Node Object
      Node *n = new Node;

      //set the value
      n->value = value;

      // Get the previous end node
      Node *nlast = node_at (this->count - 1);

      //link the node we made to the end of the list
      nlast->pnext = n;

      //the list grew by one
      this->count++;
    }
}


    // insert a new node before the i'th node in the list
void
List::insert_before (int i, double value)
{

  //make sure index (i) is valid

  if (i < 0 || i > this->count)
    return;

  // if the index is zero put a node at the front of the list
  if (i == 0)
    {

      Node *n = new Node;
      n->value = value;
      n->pnext = this->first;
      this->first = n;
      this->count++;
    }

  else
    {

      //get the node in the position before we want to insert a new node
      Node *n = node_at (i - 1);
      // make a new node
      Node *n2 = new Node;

      // set our new node's value
      n2->value = value;

      //link the new node in 
      n2->pnext = n->pnext;
      n->pnext = n2;

      // list grew by one
      this->count++;
    }

}

   //remove node at some position
void
List::remove_at ( int i)
{


  // make sure the index is valid    
  if (i < 0 || i >= this->count)
    return;


  // if the index is zero delete the first node in the list
  if (i == 0)
    {
      Node *toDelete = this->first;
      this->first = toDelete->pnext;
      delete toDelete;
      this->count--;
    }
  else
    {
      // get the node before the node we will remove.
      Node *prev = node_at ( i - 1);

      // follow the link to the node we will delete
      Node *toDelete = prev->pnext;

      //link the node before the one we will take out to the node directly after the one we take out
      prev->pnext = toDelete->pnext;

      // delete the desired node
      delete toDelete;

      // the list loses an element
      this->count--;
    }


}

   // print all the values
void
List::print_list ()
{

  //Format the values to print one decimal place. 
  cout.precision (1);

  //Write floating point values in fixed-point notation instead of scientific notation.
  cout.setf (ios::fixed, ios::floatfield);


  cout << "{";

  // get the first node in the list
  Node *n = this->first;
  for (int i = 0; i < this->count; i++)
    {
      //walk through the list and print the value field of each node with commas between the elements
      cout << n->value;
      if (i < (this->count - 1))
	{
	  cout << ", ";
	}
      n = n->pnext;
    }
  cout << "}" << endl;

}

    // free up all the memory used by the list
void
List::delete_list()
{

  // get the first node in the list
  Node *n = this->first;

  // make a temporary node
  Node *n2;
  for (int i = 0; i < this->count; i++)
    {
      //set the temporary node to the next node in the list
      n2 = n;

      // get the pointer to the node following the one we will delete
      n = n->pnext;

      // delete the node
      delete n2;
    }

  //the list is now empty
  this->count = 0;
}
