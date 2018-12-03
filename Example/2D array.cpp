#include <iostream>
#include <time.h> 
#include <stdlib.h> 

using namespace std;


int main(void) {

typedef int integer;

//C++ does not check array bounds. It means that if in the
//following declaration we write, for example mat[3][3], the
//compiler won't print any error messages neither during the 
//compilation nor during the run-time.

const integer ROWS=9, COLS=9;
integer i, j;
double mat[ROWS][COLS];

//Herre we initialize the random number seed with current time
srand(time(NULL));

//Here we print the maximum of the random number
cout<<RAND_MAX<<endl;

//In the following we initiliaze the matrix with 
//numbers between 0 and 0.99 using rand() function
//and modulo and division operations
cout<<"Initializing the matrix..."<<endl;
for(i=0; i<ROWS; i++)
 for(j=0; j<COLS; j++)
  mat[i][j]=rand()%100/100.0;

cout<<"The content of the matrix "<<ROWS<<"X"<<COLS<<endl;
for(i=0; i<ROWS; i++) {
 
 for(j=0; j<COLS; j++){
  cout<<mat[i][j]<<"\t";
  }
 cout<<endl;
}

return 0;
}

