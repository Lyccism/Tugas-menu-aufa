#include <iostream>
#include <string>
#include <climits>
#include <ctime>
using namespace std;

int main()
{
	int mainMenu;

	while (true)
	{
		cout << "==== MENU UTAMA ====" << endl;
		cout << "1. Golongan Type Data" << endl;
	cout << "2. Percabangan" << endl;
	cout << "3. Perulangan" << endl;
	cout << "4. Larik (Array)" << endl;
	cout << "5. Keluar Aplikasi" << endl;
	cout << "===================="<<endl;
	cout << "Pilih  (1 - 5)  :" << endl;
		cin >> mainMenu;

		if (cin.fail())
		{
			cout << "ERROR INPUT, PLEASE ONLY INPUT THE NUMBER!" << endl;
			cin.clear();
			cin.ignore(1000, '\n');
			continue;
		}
		if (mainMenu < 1 || mainMenu > 5)
		{
	cout << "ERROR! PLEASE CHOOSE THE CORRECT NUMBER (1 - 5)..." << endl; continue;
		}
		if (mainMenu == 5)
		{
	cout << "Anda Sudah Keluar!  Terimakasih" << endl;
			break;
		}
		if (mainMenu == 1) {
			int subMenu1;
				do {
				
	cout << "==== MENU GOLONGAN TYPE DATA ====" << endl;
	cout << "1. Golongan Angka" << endl;
	cout << "2. Golongan Karakter" << endl;
	cout << "3. Golongan Waktu" << endl;
	cout << "4. Golongan Boolean" << endl;
	cout << "5. Kembali Ke Menu Utama" <<endl;
	cout << "==================================" << endl;
	cout << "Pilih Sub Menu (1-5) :" << endl;
	cin >> subMenu1;

			if (subMenu1 == 1) {
			int angkaMenu;
				do {
	cout << " ==== MENU GOLONGAN ANGKA ====" << endl;
	cout << "Pilih Tipe Golongan  :" << endl;
	cout << "1. Bilangan Bulat" << endl;
	cout << "2. Bilangan Pecahan" << endl;
	cout << "3. Kembali Ke Menu Sebelumnya" << endl;
		cout << "Pilih (1-3)  :" << endl;
		cin >> angkaMenu;

			if (angkaMenu == 1) {
				int subpilihan1;
				do {
			
	cout << "=== MENU BILANGAN BULAT ===" << endl;
	cout << "1. Short" << endl;
	cout << "2. int" << endl;
	cout << "3. Long" << endl;
	cout << "4. Kembali Ke Menu Sebelumnya" << endl;
	cout << "Pilih (1-3)  : "<< endl;
	cin >>subpilihan1;

		if (subpilihan1 == 1) {
					
			short i, j;
			char ij;

	cout << "Masukkan Angka Pertama  : " << endl;
			cin >> i;
	cout << "Masukkan Angka Kedua : " << endl;
			cin >> j;
	cout << "Masukkan Operator ( +, -, *, /, %)  : " << endl;
			cin >> ij;
	cout << "Hasil Short  : " << endl;

			if (ij == '+') {
			short hasil_1 = i + j;
	cout << i << "+" << j << "=" << hasil_1;
	}
	
			else if (ij == '-') {
			short hasil_1 = i - j;
	cout << i << "-" << j << "=" << hasil_1;
		}
		
			else if (ij == '*') {
			short hasil_1 = i * j;
	cout << i << "*" << j << "=" << hasil_1;
	}
	
			else if (ij == '/') {
			if (j != 0) {
			short hasil_1 = i / j;
	cout << i << "/" << j << "=" << hasil_1;
			}
		else {
		cout << "ERROR! TIDAK BISA DIBAGI 0" << endl;

			}
		}
		
			else if (ij == '%') {
					if (j != 0) {
			short hasil_1 = i % j;
	cout << i << "%" << j << "=" << hasil_1;
		}  
		else {
	cout << "ERROR! TIDAK BISA MODULUS DENGAN 0" << endl;
		}
}
		else{
	cout << "ERROR! Operator Tidak Dikenali";
	cout << endl;
		}
	else if (subpilihan1 == 2) {
		int a, b;
		char op;
		
		cout << "Masukkan Angka Pertama  : "<<endl;
		cin >> a;
		cout << "Masukkan Angka Kedua  : "<<endl;
		cin >> b;
		cout << "Masukkan Operator (+, -, *, /, %)  : "<<endl;
		cin >> op;
		cout << "Hasil int  : ";
		
		if (op == '+') {
			int hasil_2 = a+b;
			cout << a <<"+" << b << "=" <<.hasil_2;
		}
		else if (op == '-') {
			int hasil_2 = a-b;
			cout << a << "-" << b << "=" << hasil_2;
		}
		else if (op == '*') {
			int hasil_2 = a*b;
			cout << a << "*" << b << "=" << hasil_2;
		}
		else if (op == '/') {
			if (b != 0){
			int hasil_2 = a/b;
				cout << a << "/" << b << hasil_2;
			}
			else {
				cout << "ERROR! TIDAK BISA DIBAGI DENGAN 0"<<endl;
			}
		}
		else if (op == '%') {
			if (op != 0) {
				int hasil_2 = a%b;
				cout << a << "%" << b << "=" << hasil_2;
			}
			else {
				cout << "ERROR! TIDAK BISA MODULUS DENGAN 0"<<endl;
			}
		}
		else if (subpilihan1 == 3) {
			int o, p;
			char os;
			
			cout << "Masukkan Angka Pertama  : "<< endl;
			cin >> o;
			cout << "Masukkan Angka Kedua  : "<< endl;
			cin >> p;
			cout << "Masukkan Operator (+, -, *, /, %)  : "
			cin >> os;
			cout << "Hasil Long  : "
			
			if (os == '+') {
			long hasil_3 = o+p;
			cout << o << "+" << p << "=" << hasil_3;
			}
			else if (os == '-') {
				long hasil_3 = o-p;
				cout << o << "-" << p << "=" << hasil_3;
			}
			else if (os == '*') {
				long hasil_3 = o*p;
				cout << o << "*" << p << "=" << hasil_3;
			}
			else if (os == '/') {
				if (p != 0) {
				long hasil_3 = o/p;
				cout << o << "/" << p << "=" << hasil_3;
				}
				else {
					cout << "ERROR! TIDAK BISA DIBAGI 0" << endl;
				}
			}
			else if (os == '%') {
				if (p != 0) {
					long hasil_3 = o%p;
					cout << o << "%" << p << "=" << hasil_3;
				}
				else {
					cout << "ERROR! TIDAK BISA MODULUS 0" << endl;
				}
			}
		}
	} while (subpilihan1 != 4);
	
	else if (angkaMenu == 2) {
		
		int subpilihan2;
		do {
			
			cout << "=== MENU BILANGAN PECAHAN ===" << endl;
			cout << "1. Float" << endl;
			cout << "2. Double" << endl;
			cout << "3. Kembali" << endl;
			cout << "Pilih (1-3)  : " << endl;
			cin >> subpilihan2;
			
			if (subpilihan2 == 1){
				float a, b;
				char ab;
				
				cout << "Masukkan Angka Pertama  : " << endl;
				cin >> a;
				cout << "Masukkan Angka Kedua  : " << endl:
				cin >> b;
				cout << "Masukkan Operator (+, -, *, /)  : " << endl;
				cin >> ab;
				
				if (ab == '+') {
					float hasil_4 = a+b;
					cout << a << "+" << b << "=" << hasil_4;
				}
				
				else if (ab == '-') {
					float hasil_4 = a-b;
					cout << a << "-" << b << "=" << 		hasil_4;
				}
				
				else if (ab == '*') {
							float hasil_4 = a*b;
							cout << a << "*" << b << "=" << hasil_4;
				}
				
				else if (ab == '/') {
							if (b != 0) {
								float hasil_4 = a/b;
								cout << a << "/" << b << "=" << hasil_4;
							}
							else {
								cout << "ERROR! TIDAK BISA MODULUS DENGAN 0" << endl;
							}
				}
			
			else if (subpilihan2 == 2) {
							double c, k;
							char ck;
							
							cout << "Masukkan Angka Pertama  : " << endl;
							cin >> c;
							cout << "Masukkan Angka Kedua  : " << endl;
							cin >> k;
							cout << "Masukkan Operator (+, -, *, /)  : " << endl;
							cin >> ck;
							
							if (ck == '+') {
								double hasil_5 = c+k;
								cout << c << "+" << k << "=" << hasil_5;
							}
							
							else if (ck == '-') {
								double hasil_5 = c-k;
								cout << c << "-" << k << "=" << hasil_5;
							}
							
							else if (ck == "*") {
								double hasil_5 = c*k;
								cout << c << "*" << k << "=" << hasil_5;
							}
							
							else if (ck == '/') {
								if (k != 0) {
								double hasil_5 = c/k;
								cout << c << "/" << k << "=" << hasil_5;
								}
								else {
									cout <<"ERROR! TIDAK BISA DIBAGI 0" << endl;
								}
							}
			}
			} while (subpilihan2 != 3);
			
			else if (submenu1 == 2) {
							int golchar;
							
							