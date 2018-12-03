#include <iostream>
using namespace std;

int main() { 
 char a[100];
 cout << "Please input a string: " <<endl;
 cin.getline(a, 100);
 char *p;
   for (p=a; (*p)!='\0'; ++p)
   {
      if ((*p)!=' ')
			cout<< *p;
	}
	return 0;

}