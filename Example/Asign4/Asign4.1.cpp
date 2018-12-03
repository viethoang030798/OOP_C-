#include <iostream>

using namespace std;
#define MAX 10

void read_numbers(float num[], int i);
void find_min(float num[], int i);
void find_max(float num [], int i);

int main(void){
	int i,n;
	float num[MAX];
	cout <<"How many numbers in the array?"<<endl;
	cin  >>n;


    cout<<"NUMBER INPUT"<<endl;
	read_numbers(num, n);
	cout<<"\nRESULT"<<endl;
	cout<<"MIN is ";
	find_min(num,n);
	cout<<"\nMAX is ";
	find_max(num,n);
	return 0;
}

void read_numbers(float num[], int i){
	for(int j=0; j<i; j++)
	{
		cout <<"Please input number: ";
		cin  >> num[j];
	}
}


void find_min(float num[], int i){
	int a[0];
    int min = a[0];
    for(int j=0; j<i;j++)
    {
      if (num[j] < min)
      	min = num[j];
    }
    cout <<min;

}

void find_max(float num[], int i){
	int a[0];
    int max = a[0];
    for(int j=0; j<i;j++)
    {
      if (num[j] > max)
      	max = num[j];
    }
    cout <<max;

}
