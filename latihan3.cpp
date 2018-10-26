 #include<iostream>

using namespace std;

int main() {
  cout<<"Program Menentukan Bilangan Tengah Dari 3 Bilangan Yang Berbeda "<<endl;
  int a,b,c;
  cout<<"1.Masukkan bilangan pertama = ";
  cin>>a;
  cout<<"2.Masukkan bilangan kedua   = ";
  cin>>b;
  cout<<"3.Masukkan bilangan ketiga  = ";
  cin>>c;

  if(b<c && a>c)
  cout<<"bilangan tengah adalah bilangan C"     ;
  else if(b>c && a<c)
  cout<<"bilangan tengah adalah bilangan C"     ;
  else if(c<b && c>a)
  cout<<"bilangan tengah adalah bilangan C"     ;
  else if(c>b && c<a)
  cout<<"bilangan tengah adalah bilangan C"     ;
  else if(b<a && a>c)
  cout<<"bilangan tengah adalah bilangan B"     ;
  else if(b>a && a<c)
  cout<<"bilangan tengah adalah bilangan B"     ;
  else if(a<b && c>a)
  cout<<"bilangan tengah adalah bilangan B"     ;
  else if(a>b && c<a)
  cout<<"bilangan tengah adalah bilangan B"     ;
  else if(b>a && c<a)
  cout<<"bilangan tengah adalah bilangan A"     ;
  else if(b<a && c>a)
  cout<<"bilangan tengah adalah bilangan A"     ;
  else if(a>b && a<c)
  cout<<"bilangan tengah adalah bilangan A"     ;
  else if(a<b && a>c)
  cout<<"bilangan tengah adalah bilangan A"     ;

 }
