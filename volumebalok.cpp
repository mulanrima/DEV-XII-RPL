#include <iostream>
using namespace std;

int main (){
	float x,y,z,v;
	cout<<"PROGRAM C++ MENGHITUNG VOLUME BALOK"<<endl;
	cout<<"-----------------------------------"<<endl;
	//Menginput nilai panjang, lebar dan tinggi
	cout<<"Masukkan Panjang Balok\t: ";
	cin>>x;
	cout<<"Masukkan Lebar Balok\t\t: ";
	cin>>y;
	cout<<"Masukkan Tinggi Balok\t\t: ";
	cin>>z;
	v=x*y*z;
	cout<<"Volume Balok\t\t: "<<v<<endl;
	return 0;
	
	
}
