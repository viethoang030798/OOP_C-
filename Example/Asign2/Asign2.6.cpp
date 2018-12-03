/* A program in which you define two separate arrays of type Property data structure (in lecture II) and uses pointers 
to compare, find and print out those elemnts of arrays which are equal in both arrays; values for house, car and boat 
are the same. */

#include <iostream>
#include <cstring>
using namespace std;

struct Property{
 char house[10];
 unsigned short car;
 unsigned short boat;
};

int main(){
	int n1, n2;
	cout << "Enter number of friends in town1 & town2 (seperate by space): " <<endl;
	cin  >> n1; 
	cin  >> n2; 
	Property town1[n1];
	Property town2[n2];
	Property *p = town1;
	Property *q = town2;
	cout << "TOWN 1" <<endl;
	for (int i=0; i<n1; ++i)
	{	
		cout << "Enter number of houses, cars and boats that friend " <<i+1 << " own (seperate by space): "<<endl;
		cin  >> p[i].house;
		cin  >> p[i].car;         //scanf("%s%u%u", &((p+i)->house), &((p+i)->car), &((p+i)->boat));
		cin  >> p[i].boat;   
	}
	cout <<"TOWN 2" <<endl;
    for (int i=0; i<n2; ++i)
	{	
		cout << "Enter number of houses, cars and boats that friend " <<i+1 << " own (seperate by space): "<<endl;
		cin  >> q[i].house;
		cin  >> q[i].car;         //scanf("%s%u%u", &((p+i)->house), &((p+i)->car), &((p+i)->boat));
		cin  >> q[i].boat;  
	}
	int same=0;
	for (int i=0; i<sizeof(town1)/sizeof(town1[0]); ++i)
	{
		for (int j=0; j<sizeof(town2)/sizeof(town2[0]); ++j)
		{
			if (!strcmp((p+i)->house, (q+j)->house) && ((p+i)->car == (q+j)->car) && ((p+i)->boat == (q+j)->boat))
			{
				same=1;
				cout <<"Friend owns a house? " << p[i].house <<" \tFriend owns " << p[i].car<<" car(s)\t"<< "Friend owns "<<p[i].boat<<" boat(s)\n" <<endl; 
				break;
			}
		}
	}
	if (!same)
		cout <<"Both towns don't have anything in common" <<endl;
	return 0;
}