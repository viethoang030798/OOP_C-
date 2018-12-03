/* A program in which you define two separate arrays of type Property data structure (in lecture II) and uses pointers 
to compare, find and print out those elemnts of arrays which are equal in both arrays; values for house, car and boat 
are the same. */

#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

struct Property{
 char house[10];
 unsigned short car;
 unsigned short boat;
};

int main(){
	int n1, n2;
	cout << "Enter number of friends in town1 & town2 (seperate by space): " <<endl 
	scanf("%d%d", &n1, &n2);
	Property town1[n1];
	Property town2[n2];
	Property *p = town1;
	Property *q = town2;
	cout << "TOWN 1" <<endl;
	for (int i=0; i<n1; ++i)
	{	
		cout << "Enter number of houses, cars and boats that friend " <<i+1 << " own (seperate by space): "<<endl;
		scanf("%s%u%u", &((p+i)->house), &((p+i)->car), &((p+i)->boat));
	}
	cout <<"TOWN 2" <<endl;
    for (int i=0; i<n2; ++i)
	{	
		cout << "Enter number of houses, cars and boats that friend " <<i+1 << " own (seperate by space): "<<endl;
		scanf("%s%u%u", &((q+i)->house), &((q+i)->car), &((q+i)->boat));
	}
	int same=0;
	for (int i=0; i<sizeof(town1)/sizeof(town1[0]); ++i){
		for (int j=0; j<sizeof(town2)/sizeof(town2[0]); ++j){
			if (!strcmp((p+i)->house, (q+j)->house) && ((p+i)->car == (q+j)->car) && ((p+i)->boat == (q+j)->boat))
			{
				same=1;
				printf("Friend owns a house? %s \tFriend owns %u car(s)\tFriend owns %u boat(s)\n", (p+i)->house, (p+i)->car, (p+i)->boat); 
				break;
			}
		}
	}
	if (!same)
		printf("Both towns don't have anything in common");
	return 0;
}