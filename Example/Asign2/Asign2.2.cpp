#include <iostream>
using namespace std;


 struct Property{
 char house[10];
 char *car;
 char *boat;
};

int main(void) {
 
 int i;
 char car[] ={'0','1','0','\0'};
 char boat[]={'2','0','0','\0'};
 Property friends[] = { {"Yes", car, boat}, {"No",(car+1), (boat+1)}, {"No", (car+2), (boat+2)} };
 Property *p;

  //Here we initialize pointer p with the address of the first location in 
 //array friends. The other way to initialize p with the first
 //location of array  friends would be this one: p=&friends[0]
 p=friends;

 for(i=0; i<(sizeof(friends)/sizeof(friends[0])); i++) 
 {
   cout<<"\nFriend "<<(i+1)<<" owns a house? "<<p[i].house;
   cout<<"\tFriend "<<(i+1)<<" owns "<< *(p[i].car)<<"car(s).";
   cout<<"\tFriend "<<(i+1)<<" owns "<< *(p[i].boat)<<"boat(s)."<<endl;
 }

return 0;
}
