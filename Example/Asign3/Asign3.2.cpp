/*A program, which uses new and delete operator for reserving memory for an array of prime numbers.
The program must ask the interval from which prime numbers must be searched, find them,
save them to the array and print them to the standard output. */
#include <iostream>
using namespace std;

int main(){
	int n;
	int *p;
    int prime[17] ={0,1,3,5,7,11,13,17,19,23,29,31,37,39,41,43,47};
    cout << "Prime numbers array: {1,3,5,7,11,13,17,19,23,29,31,37,39,41,43,47}"<<endl;
	cout << "There are 16 prime numbers in the array. How many numbers would you like to search?"<<endl;
	cin  >> n;
	p= new (nothrow) int[n];
	int a;
	int c[n];

    cout << "Enter numerical order of the prime number you would like to search!" <<endl;
	for(int i=0; i <n; i++)
	{
	    cout << "No?";
		cin  >>a;
        c[i] =prime[a];
		p[i] =a;
	}

	cout <<"\nRESULT"<<endl;
    for(int i=0; i <n; i++)
    {
    	cout<<"The No"<<*(p+i)<<" prime number is: " << c[i]<<endl;
    }
    delete [] p; 
}
