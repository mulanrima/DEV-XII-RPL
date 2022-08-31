#include <iostream>
#include <string>

using namespace std;
int main()
{
	string raptor_prompt_variable_zzyz;
	string w;
	
	cout << "Masukkan Warna";
	cout <<"\n==========================" << endl;
	cin >> w;
	if (w=="Merah" || w=="merah" || w=="MERAH" || w=="MERAH")
	{
		cout << "Berhenti" << endl;			}
	else
	{
		if (w=="Kuning" || w=="kuning" || w=="KUNING" || w=="KUNING")
		{
			cout << "Hati-hati" << endl;		}
		else 
		{
			if (w=="Hijau" || w=="hijau" || w=="HIJAU" || w=="HIJAU")
			{
				cout << "Jalan" << endl;		}
			else
			{
				cout << "Warna Salah" << endl;	}	
	   }
	}
	
	return 0;
}
