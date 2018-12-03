/*A program in which you define two data structures: room and customer. The fields for
room should be: room_id, type (single, double, ...) and price per night.
The fields for customer should be: name, room_id and number_of_nights.
The program must ask the number of rooms and customers from the user,
allocate memory for them and read data for them.
After reading the data, the program must print a list which shows
 what room (room_id) is occupied by what customer and display the customer information. */

#include <iostream>
#include <cstring>
using namespace std;

struct Room
{
  int room_id;
  char type[50];
  int price_per_night;
};

struct Customer
{
  char name[50];
  int room_id;
  int numbers_of_night;
};


int main(){
  int n1,n2,ret;
  cout <<"How many rooms are there?"<<endl;
  cin  >>n1;
  cout <<"How many customers are there?"<<endl;
  cin  >>n2;
  Room ro[n1];
  Room *p = ro;
  Customer cus[n2];
  Customer *q = cus;

  /*try
  {
  //Here we reserve an array of 3 locations and assign the memory address of
  //its first location to pro.
    p = new Room[50];
    q = new Customer[50];
  }
  catch (bad_alloc xa)                                             // try and catch function dont affect the result of code
  {
     cout<<"Memory allocation Failed!";
     return 1;
  }*/

  cout <<"\nROOM INFO"<<endl;
  for (int i=0; i<n1; i++)
  {
    cout << "Room No"<<i+1<<endl;
  	cout << "ID: ";
  	cin  >> p[i].room_id;
  	cout << "Room type: ";
  	cin  >> p[i].type;
  	cout << "Price/night(Euro): ";
  	cin  >> p[i].price_per_night;
  }

  cout <<"\nCUSTOMER INFO"<<endl;
  for (int i=0; i<n2; i++)
  {
    cout << "Customer No"<<i+1<<endl;
  	cout << "Name: ";
  	cin  >> q[i].name;
  	cout << "Room ID: ";
  	cin  >> q[i].room_id;
  	cout << "Night(s) will stay: ";
  	cin  >> q[i].numbers_of_night;
  }


  cout <<"\nRESULT"<<endl;
  for(int i=0; i<n1;i++)
  {
    cout << "\nCustomer(s) in room ID: "<<p[i].room_id<<" Type: "<<p[i].type<<endl;
    for(int j=0; j<n2;j++)
     {
        //cout << "XX " <<p[i].room_id << "xx"<< q[j].room_id<<endl;
     	if(p[i].room_id == q[j].room_id)

     	{
           cout <<"Name: " <<q[j].name<<endl;
           cout <<"Will stay "<<q[j].numbers_of_night<<" night(s)."<<endl;
           cout <<"Total price is "<<q[j].numbers_of_night * p[i].price_per_night<<" euros"<<endl;
     	}

     }
  }
  p=NULL;          //Here we set the value of pro to NULL to make sure that it
  q=NULL;                //doesn't refer to data.
  delete [] p;          //Here we delete the memory array reserved in the beginning.
  delete [] q;
  return 0;
}
