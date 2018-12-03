#include <iostream>
using namespace std;

 int a=1, b=-1, c=2, d, e, i;
 int a3=1, b3=1, c3=1, d3, i3;
 int a2=-1, b2=1, c2=-3, d2, e2;

 int main(void) {
    cout<<"First 15 values of series: 1 0 2 1 3 2 4 3 5..."<<endl;
    cout<<"Values are: "<<a<<" ";
    for (i = 1; i <= 7; ++i) {

      d = a + b;
      cout<<d<<" ";
      e = d + c;
      cout<<e<<" ";
      a = e;
    }

    cout<<"\n\nFirst 15 values of series: 1 1 1 3 5 9 17..."<<endl;
    cout<<"Value are: "<<a3<<" "<<b3<<" "<<c3<<" ";
 	for (i3 = 1; i3 <= 12; ++i3) {

 	  d3 = a3 + b3 + c3;
 	  cout<<d3<<" ";
      a3 = b3;
      b3 = c3;
      c3 = d3;
    }

    cout<<"\n\nFirst 15 values of series: -1 0 -3 -2 -5 -4 -7..."<<endl;
    cout<<"Values are: "<<a2<<" ";
    for (i = 1; i <= 7; ++i) {

      d2 = a2 + b2;
      cout<<d2<<" ";
      e2 = d2 + c2;
      cout<<e2<<" ";
      a2 = e2;
    }
    cout<<endl;

}
