/*A program in which you define two null-terminated strings by using two pointer variables of type char. 
Using only pointers the program must compare two strings character by character and inform what characters in the strings are different. */

#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char a[100], b[100];
	char *p = a, *q = b;
	int length, d=0;
	cout << "Please enter 2 strings: ";
	cin.getline(a,100);
	cin.getline(b,100);
	if (strlen(a) < strlen(b))
	{
        length = strlen(a);
	}
	else
	{
	  	length = strlen(b);
	}
	for (int i=0; i <length; i++)
	{
        if (*(p+i) != *(q+i))
        {
       	  cout << *(p+i) << " is different from " << *(q+i) <<endl;
        }
        else
        {
          cout <<" Two letters are the same!"<<endl;
          d++;
        }
	}
	if (d==length)
	{
		cout << "SAME WORD !";
	}

}
