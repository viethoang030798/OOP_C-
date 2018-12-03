#include <iostream>
using namespace std;

int main(){

  struct Student
   {
      double active, point;
        char name[50];
        bool at;
   }s[10];

  int n, i;


  // Input information
  cout << "COURSE RATE "<< endl;
  cout << "Enter the number of students: ";
  cin  >> n;
  int g[n], a[n], b[n], c[n];

  for(int i=0; i<n;i++)
  {
    cout << "Enter student name: ";
    cin  >> s[i].name;
    cout << "Level of Activeness: ";
    cin  >> s[i].active;
    cout << "The percentage of points from the exam: ";
    cin  >> s[i].point;
    cout << "Whether the project work has been done or not[yes/no]? ";
    cin  >> c[i];

  }


  // Output information
  cout <<"\nRESULT"<<endl;
  for(int i=0; i<n;i++)
  {
     if(s[i].point <40|| c[i]==0)
     {
       cout <<s[i].name << " FAILED THE COURSE!"<<endl;
     }

     if(s[i].active > 0.5)
     {
       g[i]= 1;
     }else g[i]=0;

     if(40 <= s[i].point && s[i].point <= 100 && c[i]==1)
     {
      a[i] = s[i].point - 40;
      b[i] = a[i]/15 +1 ;  // because the (point -40) divide to 15 will take the int part, so we have to add 1.
       cout <<s[i].name << " PASS THE COURSE!"<<endl<< "Grade: "<< g[i] + b[i] <<endl; 
     }




  }

}
