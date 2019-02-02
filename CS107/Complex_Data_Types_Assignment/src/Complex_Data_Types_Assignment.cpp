//============================================================================
// Name        : Complex_Data_Types_Assignment.cpp
// Author      : Ann Blodgett
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <stdio.h>

#define MAXDATA 1024

typedef struct {
  double data[MAXDATA];
  int nrows;
  int ncols;
} Matrix;

void printmat(Matrix M);
Matrix matrixmult(Matrix A, Matrix B);

int main(int argc, char *argv[])
{
  Matrix A = { {1.2, 2.3,
                3.4, 4.5,
                5.6, 6.7},
               3,
               2};
  Matrix B = { {5.5, 6.6, 7.7,
                1.2, 2.1, 3.3},
               2,
               3};
  printmat(A);
  printmat(B);

    Matrix C = matrixmult(A, B);
    printmat(C);

  return 0;
}



void printmat(Matrix M)
//from http://web.archive.org/web/20160424111722/http://gribblelab.org/CBootcamp/code/exercises/6_1.c
// O(n^2) iterative
{
  int i, j;
  printf("[\n");
  for (i=0; i<M.nrows; i++){
	  for(j=0; j<M.ncols; j++){
		  printf("%6.3f ", M.data[i*M.ncols+j]);
	  }
	  printf("\n");
	  }
  printf("]\n\n");
  }


Matrix matrixmult(Matrix A, Matrix B)
// from http://web.archive.org/web/20160424111726/http://gribblelab.org/CBootcamp/code/exercises/6_2.c

// O(n^3) iterative.  See https://en.wikipedia.org/wiki/Matrix_multiplication_algorithm
{
 // Let C be a new matrix of appropriate size
  Matrix C;

  // Check to make sure multiplication is defined;
  // To be defined the number of rows in matrix A must equal the number of rows in Matrix B
  if(A.ncols != B.nrows) {
	  printf("Invalid operation: number of columns in Matrix A does not equal the number of rows in Matrix B\n");
  }

  else {
	  int i,j,k;
	  double count;
	  // go through the loop the number of times matrix A has rows
	  for(i=0; i< A.nrows; i++){
		  // loop again the number of times B has columns (should equal A rows)
		  for(j=0; j< B.ncols; j++){
			  // initialize count to zero
			  count = 0.0;
			  // go through the loop as many times as A has columns
			  for(k = 0; k <A.ncols;k++){
				  // update the count variable to be the multiplication of A[i*A num of columns+k] and  B[k*num of columns +j]
				  count = count + A.data[i*A.ncols +k]*B.data[k*B.ncols +j];
			  }
			  // update C's data array with the value stored in count
			  C.data[i*A.nrows+j] = count;
		  }
	  }
	  // Matrix C will have the same number of rows as A and columns as B
	  C.nrows = A.nrows;
	  C.ncols = B.ncols;
  }
// return C
  return C;
}
