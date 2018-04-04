#include <iostream>
#include <cstring>
using namespace std;
int main()
{ char ten[100];
  float toan,hoa,ly,tb;
  cout<<"nhap ho va ten :"<<endl;
  cin>>ten;
  cout<<"nhap diem toan: "<<endl;
  cin>>toan;
  cout<<"nhap diem ly : "<<endl;
  cin>>ly;
  cout<<"nhap diem hoa : "<<endl;cin>>hoa;
  tb=(toan+ly+hoa)/3;
  cout<<"Diem trung binh cua 3 mon la:"<<tb<<endl;
  if(tb>=8) cout<<"xep loai XUAT SAC "<<endl;
  if((tb>=7)&&(tb<8)) cout<<"xep loai GIOI "<<endl;
  if((tb<7)&&(tb>=6)) cout<<"xep loai KHA "<<endl;
  if((tb<6)&&(tb>=5)) cout<<"xep loai TRUNG BINH "<<endl;
  if(tb<5) cout<<"xep loai YEU "<<endl;
  return 0;
}
