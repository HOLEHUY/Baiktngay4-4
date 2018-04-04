#include<iostream>
using namespace std;
int ktnt(int n)
{int i,s=0;
 if(n<=0) return 0;
 if(n==1) return 0;
 if(n==2) return 1;
 if(n>2) 
 {for (i=1;i<=n/2;i++)
   if(n%i==0) s=s+1;
 }
 if(s>1) return 0; else return 1;
}
int main()
{int sum,a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
 cout<<"Cac so tu 1 den 20 la: "<<endl;
 for(int i=0;i<=19;i++) cout<<a[i]<<"\t";cout<<endl;
 cout<<"Cac so tu 20 den 1 la: "<<endl;
 for(int i=19;i>=0;i--) cout<<a[i]<<"\t"; cout<<endl;
 cout<<"Cac so chan tu 1 den 20 la: "<<endl;
 for(int i=0;i<=19;i++) if(a[i]%2==0) cout<<a[i]<<"\t";cout<<endl;
 cout<<"Cac so le tu 1 den 20 la: "<<endl;
 for(int i=0;i<=19;i++) if(a[i]%2!=0) cout<<a[i]<<"\t"; cout<<endl;
 cout<<"cac so nguyen to tu 1 den 20 la: "<<endl;
 for(int i=0;i<=19;i++) if(ktnt(a[i])==1) cout<<a[i]<<"\t";cout<<endl;
 cout<<"tong cac so tu 1 den 20 la: "<<endl;
 for(int i=0;i<=19;i++) sum=sum+a[i];
 cout<<sum<<endl;
 return 0;
}
