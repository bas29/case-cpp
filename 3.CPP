#include<iostream.h>
#include<conio.h>
float segitiga(int a,int t)
{
 float luas;
 luas=0.5*a*t;
 return luas;
}
float persegi(int p, int l)
{
 float luas1;
 luas1=p*l;
 return luas1;
}
float lingkaran(float r,float phi=3.14)
{
float luas2;
luas2=phi*r*r;
return luas2;
}
void main()
{
int pilih;
cout<<"Pilih:";
cin>>pilih;
switch(pilih)
{
case 1:
{int b1,b2,hasil1;
cout<<"Alas : ";cin>>b1;
cout<<"Tinggi : :";cin>>b2;
cout<<"Luas Segitiga = "<<segitiga(b1,b2);};
break;
case 2:
{int a1,a2,hasil2;
cout<<"Panjang : ";cin>>a1;
cout<<"Lebar : ";cin>>a2;
cout<<"Luas Persegi = "<<persegi(a1,a2);
};break;
case 3:
{int c1,hasil3;
cout<<"Jari-Jari :";cin>>c1;
cout<<"Luas Lingkaran ="<<lingkaran(c1);
};break;
}
getch();
}
