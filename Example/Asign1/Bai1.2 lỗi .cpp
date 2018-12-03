#include<iostream>

using namespace std;

int main()
{
    int i,j,temp,a[50],size=5,temp2,temp3;
    char name[50], id[50];
    cout<<"How many students? ";
    cin>> size;
	cout<<"\nEnter student info \n";

	for(i=0; i<size; i++)
	{
	    cout<<"Student "<<i+1<<" name: ";
		cin>>name[i];

		cout<<"Student "<<i+1<<" id: ";
		cin>>id[i];

	    cout<<"Student "<<i+1<<" grade: ";
		cin>>a[i];
	}

  cout<<"\nStored Data Before Sorting In Array :: \n\n";

  for(i=0;i<size;i++)
  {
  cout<<" "<<name[i]<<" ";
  cout<<" "<<id[i]<<" ";
  cout<<" "<<a[i]<<" ";
  }

 for(i=0;i<size;i++)
 {
     for(j=0;j<size-i-1;j++)
     {


         if(a[j]>a[j+1])
         {
             temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
             temp2=name[j];
             name[j]=name[j+1];
             name[j+1]=temp2;
             temp3=id[j];
             id[j]=id[j+1];
             id[j+1]=temp3;
         }


     }
 }

 cout<<"\n\nStored Data After Sorting In Array :: \n\n";

 for(i=0;i<size;i++)
  {
  cout<<"Student "<<i+1<<" name: "<<name[i]<<endl;
  cout<<"Student "<<i+1<<" id: " <<id[i]<<endl;
  cout<<"Student "<<i+1<<" grade: "<<a[i]<<endl;
  cout<<endl;

  }

  cout<<"\n";

  return 0;

 }