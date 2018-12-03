/* A program in which you define a reference for a pointer variable. */
#include <iostream>
using namespace std;

int main(){
	
	int a=1;
	int *p = &a;
	cout << "The origin value of Pointer: " << *p <<endl;
	int &y = *p;  // set y to be alias for value *p
	y += 2;     // change value of y then *p will be change also
	cout << "The value of pointer after set Reference (alias) :" << *p <<endl;
}