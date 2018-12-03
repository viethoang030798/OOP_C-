#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
struct TS
{
    char name[50];
    int roll;
    float marks;

    char id[50];
};
TS*ts,tg;
ts=new TS[4];

    int i,t, t2, t3;
    int j;
    cout << "Enter information of students: " << endl;

    // storing information
    for(int i = 0; i < 3; ++i)
    {
        ts[i].roll = i+1;
        cout << "|Student " << ts[i].roll << " |" << endl;

        cout << "Enter student name: ";
        cin >> ts[i].name;

        cout << "Enter student iD: ";
        cin >> ts[i].id;


        cout << "Enter student grades: ";
        cin >> ts[i].marks;



        cout << endl;
    }


  for (i=0;i<3;i++){
                     for (j=0;j<2-i;j++){
                     if (ts[j].marks>ts[j+1].marks)
                     {
                         tg=ts[j];
                         ts[j]=ts[j+1];
                         ts[j+1]=tg;
                         }
                     }
}

    cout << "Displaying information in ascending order: " << endl;

    // Displaying information
    for(int i = 0; i < 3; ++i)
    {
        cout << "\nRoll number: " << i+1 << endl;
        cout << "Student name: " << ts[i].name << endl;
        cout << "Studen iD: " << ts[i].id << endl;
        cout << "Grades: " << ts[i].marks << endl;

    }

    return 0;
}
