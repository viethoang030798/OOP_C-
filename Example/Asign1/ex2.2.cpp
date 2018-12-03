#include <iostream>
using namespace std;

struct student
{
    char name[50];
    int roll;
    float marks;

    char id[50];
} s[10];

int main()
{
    int t, t2, t3;
    int j;
    cout << "Enter information of students: " << endl;

    // storing information
    for(int i = 0; i < 2; ++i)
    {
        s[i].roll = i+1;
        cout << "Student no" << s[i].roll << "," << endl;

        cout << "Enter name: ";
        cin >> s[i].name;

        cout << "Enter id: ";
        cin >> s[i].id;


        cout << "Enter marks: ";
        cin >> s[i].marks;



        cout << endl;
    }




for(int i=0;i<2;i++)
 {
     for(j=0;j<2-i-1;j++)
     {


         if(s[j].marks > s[j+1].marks)
         {
             t=s[j].marks;
             s[j].marks=s[j+1].marks;
             s[j+1].marks=t;
             t2=s[j].name;
             s[j].name=s[j+1].name;
             s[j+1].name=t2;
             t3=s[j].marks;
             s[j].marks=s[j+1].marks;
             s[j+1].marks=t3;
         }


     }




    cout << "Displaying Information: " << endl;

    // Displaying information
    for(int i = 0; i < 2; ++i)
    {
        cout << "\nRoll number: " << i+1 << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "id: " << s[i].id << endl;
        cout << "Marks: " << s[i].marks << endl;

    }

    return 0;
}