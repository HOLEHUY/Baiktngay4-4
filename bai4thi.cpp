#include<iostream>
using namespace std;
int main()
{int n,t,m,max=0;
 do
 {cout<<"nhap vao so nguyen duong ( dieu kien so khong lon hon 10000) : ";
  cin>>n;
 }
 while((n<0)||(n>10000));
 m=n;
 while(m!=0) 
 {t=m%10;
  m=m/10;
  if(t>max) max=t;
 }
 cout<<"CHU SO LON NHAT TRONG SO "<<n<<" la "<<max;
 return 0;
}
