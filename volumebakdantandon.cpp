#include <iostream>

using namespace std;

int main ()
{
	float p,l,t,r,tt,v;
	
	cout<<"PROGRAM C++ MENGHITUNG VOLUME BAK DAN TANDON"<<endl;
	cout<<"================================"<<endl;
	cout<<"Masukkan Panjang Bak\t\t:  ";
	cin>>p;
	cout<<"Masukkan Lebar Bak\t\t:  ";
	cin>>l;
	cout<<"Masukkan Tinggi Bak\t\t:  ";
	cin>>t;
	cout<<"Masukkan Jari-jari Tandon\t: ";
	cin>>r;
	cout<<"Masukkan Tinggi Tandon\t\t:  ";
	cin>>tt;
	v = p*l*t + 3.14*r*r*tt;
	cout<<"Jadi volume bak dan tandon\t: "<<v<<endl;
	
	return 0;
}
