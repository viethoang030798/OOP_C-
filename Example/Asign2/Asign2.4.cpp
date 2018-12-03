/*A program which reads a string from the standard input and prints the content of the string in ascending order. 
Use pointer(s) in the string handling.*/

#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char str[10][100], temp[100];
	int i=0;
	cout << "Please input string: "<< endl;
	while (cin>>temp && i!=10)
	{
		strcpy(str[i++], temp);
	}
	char (*rows)[100] = str;
    int cnt=0;
	for (int j=0; j<i-1; ++j)
	{
		for (int k=j+1; k<i; ++k)
		{
            while ((*(rows+j)[cnt])==(*(rows+k)[cnt]) && (cnt!=sizeof(str[j])/sizeof(str[j][0]) || cnt!=sizeof(str[k])/sizeof(str[k][0])))
            { 
              cnt++;
            }

			if ((*(rows+j)[cnt])>(*(rows+k)[cnt]))
            {
				strcpy(temp, *(rows+j));
				strcpy(*(rows+j), *(rows+k));
				strcpy(*(rows+k), temp);
                                cnt=0;
			}

		}
	}
	cout <<endl << "Result: " <<endl;
	for (int j=0; j<i; ++j)
	{
		cout<< *(rows+j)<<endl;
	}
		return 0;
}
