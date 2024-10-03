#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	char jawab;
	cout << "=================================" << endl;
	cout << "Dah Subscribe Belum : ??" << endl;
	cout << "1.) Udah (y)" << endl;
	cout << "2.) Belum (t)" << endl;
	cout << "=================================" << endl;
	cout << "PIlih : ";cin >> jawab;
	cout << endl;
	
	switch(jawab){
		case 'y' :
			cout << "[AhZanMC] : Wahhh makasih dah subrek,emakmu pasti bangga" << endl;
			break;
		case 't' :
			cout << "[AhZanMC] : Dihhh sok asik (emote batu)" << endl;
			break;
		default:
			cout << "Bruhhh inputnya salah" << endl;
	}
	
}
