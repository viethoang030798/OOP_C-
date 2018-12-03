#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
    struct TS
    {
           char ht[25];
           int sbd;
           float t,l,h,td;
           };
    TS*ts,tg;
    int n,i,j;
    cout<<"\n Nhap so thi sinh : N= ";
    cin>>n;
    ts=new TS[n+1];

                 for (i=1;i<=n;i++)
                 {
                     cout<<"\n Nhap thi sinh so :"<<i<<"\n Ho ten:";
                     cin.ignore(1);
                     cin.get(ts[i].ht,25);
                     cout<<"\nSo bao danh:";
                     cin>>ts[i].sbd;
                     cout<<"\n Nhap lan luot  diem thi dai hoc toan, ly, hoa:";
                     cin>>ts[i].t;
                     cin>>ts[i].l;
                     cin>>ts[i].h;
                     ts[i].td=ts[i].t+ts[i].l+ts[i].h;

                     }
                     cout<<"\n Danh sach thi sinh truoc khi sap xep la:\n ";
                     for (i=1;i<=n;i++)
                         {
                             cout<<"\nHo ten: "<<ts[i].ht;
                             cout<<"\nSo bao danh:"<<ts[i].sbd;
                             cout<<"\n Tong diem: "<<ts[i].td;}
                             getch();
                     for (i=1;i<=n;i++)
                     for (j=1;j<=n;j++)
                     if (ts[i].td>ts[j].td)
                     {
                         tg=ts[i];
                         ts[i]=ts[j];
                         ts[j]=tg;
                         }
                         cout<<"\nDach sach sinh vien sau khi sap xep la:\n\n";
                         for (i=1;i<=n;i++)
                         {
                             cout<<"\nHo ten: "<<ts[i].ht;
                             cout<<"\nSo bao danh:"<<ts[i].sbd;
                             cout<<"\n Tong diem: "<<ts[i].td;
                             delete ts;


                             }
                             getch ();
    }
