/* A program which reads five decimal numbers from the keyboard and stores them to an array. 
Use a pointer to calculate the sum of numbers in the array and print the result to the standard output device. */
#include <iostream>
using namespace std;

int main(){
	double a[5];
	for (int i=0; i<5; ++i)
	{
		cout <<" Please input number "<<i+1<<": "<<endl;
		cin  >> a[i];
	}
	double *p = a;
	double sum=0;
	for (int i=0; i<5; ++i){
		sum += *(p+i);
	}
	cout << "The sum is " <<sum<<endl;
	return 0;
}


