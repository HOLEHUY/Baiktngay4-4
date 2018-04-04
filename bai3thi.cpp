#include<iostream>
using namespace std;
int main()
{float max,min,t,a[20];
 for(int i=0;i<=19;i++) 
 { cout<<"nhap so thu "<<i+1<<":";
   cin>>a[i];
 }
 max=a[0];
for(int i=0;i<=19;i++) if(a[i]>max) max=a[i];
cout<<"so lon nhat la : "<<max<<endl;
min=a[0];
for(int i=0;i<=19;i++) if(a[i]<min) min=a[i];
cout<<"so nho nhat la : "<<min<<endl;
for(int i=0;i<=19;i++)
 for(int j=0;j<=19;j++)
  if(a[i]<a[j]) 
   { t=a[i];a[i]=a[j];a[j]=t;
   }
cout<<"cac so sap xep tu lon den be la: "<<endl;
for(int i=0;i<=19;i++) cout<<a[i]<<"\t";cout<<endl;
for(int i=0;i<=19;i++)
 for(int j=0;j<=19;j++)
  if(a[i]>a[j]) 
   { t=a[i];a[i]=a[j];a[j]=t;
   }
cout<<"cac so sap xep tu be den lon la: "<<endl;
for(int i=0;i<=19;i++) cout<<a[i]<<"\t";cout<<endl;
return 0;
}
