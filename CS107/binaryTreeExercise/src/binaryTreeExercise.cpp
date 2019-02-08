//============================================================================
// Name        : binaryTreeExercise.cpp
// Author      : Ann Blodgett
// Version     :
// URL         : http://web.archive.org/web/20121022015551/http://cse222.wikispaces.com/Binary+Tree+Exercise
// Description : CS107 from saylor.org '6.2: Coding Drill: List of Binary Trees'
//============================================================================


#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
/*
 *
 * This binary tree code implementation *IS NOT MINE *
 * It is from http://math.hws.edu/eck/cs225/s03/binary_trees/
 * Author is David Eck; I am re-using the excellent code he has written.
 *
 */

struct TreeNode {
        // An object of type TreeNode represents one node
        // in a binary tree of strings.

   string item;      // The data in this node.
   TreeNode *left;    // Pointer to left subtree.
   TreeNode *right;   // Pointer to right subtree.

   TreeNode(string str) {
          // Constructor.  Make a node containing str.
      item = str;
      left = NULL;
      right = NULL;
   }

};  // end struct Treenode

void treeInsert(TreeNode *&root, string newItem) {
       // Add the item to the binary sort tree to which the parameter
       // "root" refers.  Note that root is passed by reference since
       // its value can change in the case where the tree is empty.
   if ( root == NULL ) {
          // The tree is empty.  Set root to point to a new node containing
          // the new item.  This becomes the only node in the tree.
      root = new TreeNode( newItem );
              // NOTE:  The left and right subtrees of root
              // are automatically set to NULL by the constructor.
              // This is important!
      return;
   }
   else if ( newItem < root->item ) {
      treeInsert( root->left, newItem );
   }
   else {
      treeInsert( root->right, newItem );
   }
}  // end treeInsert()



int countNodes( TreeNode *root ) {
      // Count the nodes in the binary tree to which
      // root points, and return the answer.
   if ( root == NULL )
      return 0;  // The tree is empty.  It contains no nodes.
   else {
      int count = 1;   // Start by counting the root.
      count += countNodes(root->left);  // Add the number of nodes
                                       //     in the left subtree.
      count += countNodes(root->right); // Add the number of nodes
                                       //    in the right subtree.
      return count;  // Return the total.
   }
} // end countNodes()

void inorderPrint( TreeNode *root ) {
      // Print all the items in the tree to which root points.
      // The items in the left subtree are printed first, followed
      // by the item in the root node, followed by the items in
      // the right subtree.
   if ( root != NULL ) {  // (Otherwise, there's nothing to print.)
      inorderPrint( root->left );    // Print items in left subtree.
      cout << root->item << " ";     // Print the root item.
      inorderPrint( root->right );   // Print items in right subtree.
   }
} // end inorderPrint()

int main() {

	//get input
	string line;
	vector <string> wordList;
	ifstream input;

	input.open("gettysburg_words.txt");

	if (input.is_open()) {
		while (!input.eof()) {
			getline(input, line);
			string word;
			stringstream s(line);

			while (s >> word) {
				std::transform(word.begin(), word.end(), word.begin(),::tolower);
				wordList.push_back(word);
			} //end second while
		} //end first while
	} //end if
	else {
		cout << "Error opening file" << endl;
	} //end else
	input.close();

	string first;
	first = wordList[0];
	TreeNode* tree;
	tree = new TreeNode(first);


	for(unsigned int i =1; i< wordList.size(); i++){
		treeInsert(tree, wordList[i]);
	}// end for

	cout <<"There are "<< countNodes(tree)<<" nodes in the tree."<<endl;
	return 0;



}
