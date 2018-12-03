/*
A program, which reads a number of names from the keyboard and then prints them to the standard output device in ascending order.
In the program define a function for reading names, one function for sorting them and another function for printing them out.
The program should ask in the beginning how many numbers the user is going to enter.
*/

#include <iostream>
#include <cstring>
#define LEN 20

using namespace std;

//char *enterNames();
void read_names(char**, int);
void sort_names(char**, int);
void print_names(char**, int);


int main()
{
   int num;
  char** names;

   cout << "\nNumber of names to be sorted in ascending order\n";
   cin >> num;

   cin.get();

   try{
	   names = new char*[num];

	   for(int i=0; i<num; i++){
		   names[i]=new char[LEN];
	   }


	}catch(bad_alloc &xa){
		cout<<"\nAllocation failure<<"<<endl;
		return 1;
	}


	cout<<"Reading names..."<<endl;
	read_names(names, num);

	cout<<"Sorting names in ascending order..."<<endl;
	sort_names(names, num);

	cout<<"Printing names..."<<endl;
	print_names(names, num);
	
	//Here we free memory
	for(int i=0; i<num; i++)
	 delete names[i];
	 
	delete []names;
	
}

void read_names(char **names, int num) {

	 for(int i=0; i<num; i++){

		 cout<<"Enter "<<(i+1)<<". name: ";
		 cin.getline(names[i], LEN, '\n');
	 }


}

void print_names(char **names, int num) {

	 for(int i=0; i<num; i++){
		 cout<<names[i]<<endl;
	 }
}

void sort_names(char **names, int num) {

	char *temp;
	 for(int i=0; i<num; i++){
		 for(int j=i+1; j<num; j++){
		 if(strcmp(names[i], names[j])>0) {
             temp=names[i];
             names[i]=names[j];
             names[j]=temp;
		 }

	 }
}
}
