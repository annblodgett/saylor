//============================================================================
// Name        : binaryTreeExercise.cpp
// Author      : Ann Blodgett
// Version     :
// URL         : http://web.archive.org/web/20121022015551/http://cse222.wikispaces.com/Binary+Tree+Exercise
// Description : CS107 from saylor.org '6.2: Coding Drill: List of Binary Trees'
//============================================================================



/*
 * Assignment Description:
1) Given some text (in a file or a string), break it into words.
2) Convert each word to all lowerCase letters. (A pre-normalized copy of the Gettysburg Address is given in ——-).
3 Create a node with the first word of the document.
4) Refer to it (store it in a variable) as "tree", for it shall be the root.
5) For each succeeding word, find or insert a node in the tree with the word in it.
6) Create a function which prints out the tree.
7) Create a function which returns the size (the number of nodes) in each tree.
8) Augment your definition of a node to include a tally.
		As you build a tree, keep a tally of how many times each word is observed.
9) Alter your output to show tallies:
10)Create a function which traverses the tree and outputs the words in alphabetical order.
11)Create a function which outputs a histogram of the depths of the nodes.
12)Create a function which displays the shape of a tree.
		It's hard to make it pretty if all you have is text, so don't waste a lot of time.
		I'd go further, and opine that text is an insufficient medium to draw very pretty trees.
		Laying the tree on its side is practical.
13)Create a function which takes a possibly badly-balanced tree and produces a balanced- or nearly-balanced tree.
		(Unless there are 2^n - 1 words, the tree cannot be perfectly balanced.)
14)When things seem to work on small tests, use the Gettysburg Address.
 */
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main() {

	//open the input file
	//read the first word in the file and then make it the root of a new tree
	//repeat until there are no more lines in the file:
		//scan the input file line by line
		//break the line into words
		//insert each word into  Binary Tree in the appropriate spot

	// After the entire file is read, close the file

	//Print the tree out

	//Print the size of the tree out

	//Print the words in the tree in alphabetical order

	//Print a histogram of the depths of the notes

	//Print the shape of the tree if it were on its side

	//Balance the tree

	//Print the tree

	return 0;
}
