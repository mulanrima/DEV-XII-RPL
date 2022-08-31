#include <iostream>
#include <string>

using namespace std;
int main()
{

	string kartu ,pilih;
	cout<<"KARTU"<<endl;
	cout<<"================================"<<endl;
	cout<<"Masukkan kartu anda (Gold/Premium) :"  ;
    cin>>kartu;
    if(kartu=="Gold"){
	
    		cout<<"Pilih bonus anda (ambil bonus/tukar poin) :"  ;
    		cin.get();
    		getline(cin,pilih);
    		if(pilih=="ambil bonus"){
    				cout<<"Selamat bonus anda telah diambil" <<endl ;
			} else if (pilih=="tukar poin"){
					cout<<"Selamat bonus anda telah ditukar poin"<<endl ;
					}
			}else if (kartu=="Premium"){
		cout<<"Pilih bonus anda (ambil bonus/tukar poin) :"  ;
    		cin.get();
    		getline(cin,pilih);
    		if(pilih=="ambil bonus"){
    				cout<<"Selamat bonus anda telah diambil" <<endl ;
			} else if (pilih=="tukar poin"){
					cout<<"Selamat bonus anda telah ditukar poin"<<endl ;
					}
					
					}
					return 0;
}
