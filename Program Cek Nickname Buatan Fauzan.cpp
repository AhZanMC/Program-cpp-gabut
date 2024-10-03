#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int jumlah;
	char nama[50];
	cout << "====================================================================" << endl;
	cout << "\tCEK NICKNAME ANDA" << endl;
	cout << "====================================================================" << endl;
	cout << "Masukkan Nickname Anda : "; cin >> nama;
	cout << "                                        \n";
	jumlah = strlen(nama);
	cout << "Panjang Nickname Anda : " << jumlah << endl;
	cout << endl;
		
	if(jumlah <= 4){
		cout << "\aSTATUS : Nickname Anda Terlalu Pendek";
	}if(jumlah > 4 && jumlah < 13){
		cout << "STATUS : Nickname Anda Diterima";
	}else if (jumlah >= 13){
		cout << "\aSTATUS : Nickname Anda Terlalu Panjang";
	}
	
	return 0;
}
