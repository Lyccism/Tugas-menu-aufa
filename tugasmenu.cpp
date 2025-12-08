#include <iostream>
#include <string>
#include <climits>
#include <ctime>
using namespace std;

//MAIN MENU
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
            cout << "ERROR! PLEASE CHOOSE THE CORRECT NUMBER (1 - 5)..." << endl; 
            continue;
        }
        if (mainMenu == 5)
        {
            cout << "Anda Sudah Keluar!  Terimakasih" << endl;
            break;
        }
        if (mainMenu == 1) {
            int submenu1;
            do {
                
                cout << "==== MENU GOLONGAN TYPE DATA ====" << endl;
                cout << "1. Golongan Angka" << endl;
                cout << "2. Golongan Karakter" << endl;
                cout << "3. Golongan Waktu" << endl;
                cout << "4. Golongan Boolean" << endl;
                cout << "5. Kembali Ke Menu Utama" <<endl;
                cout << "==================================" << endl;
                cout << "Pilih Sub Menu (1-5) :" << endl;
                cin >> submenu1;

                if (submenu1 == 1) {
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
                                cout << "Pilih (1-4)  : "<< endl;
                                cin >> subpilihan1;

                                if (subpilihan1 == 1) {
                                    
                                    short i, j;
                                    char ij;
                                    
                                    cout << "==== Short ====" << endl;    
                                    cout << "Masukkan Angka Pertama  : " << endl;
                                    cin >> i;
                                    cout << "Masukkan Angka Kedua : " << endl;
                                    cin >> j;
                                    cout << "Masukkan Operator ( +, -, *, /, %)  : " << endl;
                                    cin >> ij;
                                    cout << "Hasil Short  : ";

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
                                    else {
                                        cout << "ERROR! Operator Tidak Dikenali";
                                        cout << endl;
                                    }
                                }
                                else if (subpilihan1 == 2) {
                                    int a, b;
                                    char op;
                                    
                                    cout << "==== int ====" << endl;
                                    cout << "Masukkan Angka Pertama  : "<<endl;
                                    cin >> a;
                                    cout << "Masukkan Angka Kedua  : "<<endl;
                                    cin >> b;
                                    cout << "Masukkan Operator (+, -, *, /, %)  : "<<endl;
                                    cin >> op;
                                    cout << "Hasil int  : ";
                                    
                                    if (op == '+') {
                                        int hasil_2 = a+b;
                                        cout << a <<"+" << b << "=" <<hasil_2;
                                    }
                                    else if (op == '-') {
                                        int hasil_2 = a-b;
                                        cout << a << "-" << b << "=" << hasil_2;
                                    }
                                    else if (op == '*') {
                                        int hasil2 = a*b;
                                        cout << a << "*" << b << "=" << hasil2;
                                    }
                                    else if (op == '/') {
                                        if (b != 0){
                                            int hasil_2 = a/b;
                                            cout << a << "/" << b << "=" << hasil_2;
                                        }
                                        else {
                                            cout << "ERROR! TIDAK BISA DIBAGI DENGAN 0"<<endl;
                                        }
                                    }
                                    else if (op == '%') {
                                        if (b != 0) {
                                            int hasil_2 = a%b;
                                            cout << a << "%" << b << "=" << hasil_2;
                                        }
                                        else {
                                            cout << "ERROR! TIDAK BISA MODULUS DENGAN 0"<<endl;
                                        }
                                    }
                                }
                                else if (subpilihan1 == 3) {
                                    long o, p;
                                    char os;
                                    
                                    cout << "==== Long ====" << endl;
                                    cout << "Masukkan Angka Pertama  : "<< endl;
                                    cin >> o;
                                    cout << "Masukkan Angka Kedua  : "<< endl;
                                    cin >> p;
                                    cout << "Masukkan Operator (+, -, *, /, %)  : " << endl;
                                    cin >> os;
                                    cout << "Hasil Long  : ";
                                    
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
                        }
                        else if (angkaMenu == 2) {
                            int subpilihan2;
                            do {
                                
                                cout << "=== MENU BILANGAN PECAHAN ===" << endl;
                                cout << "1. Float" << endl;
                                cout << "2. Double" << endl;
                                cout << "3. Kembali Ke Menu Sebelumnya" << endl;
                                cout << "Pilih (1-3)  : " << endl;
                                cin >> subpilihan2;
                                
                                if (subpilihan2 == 1){
                                    float a, b;
                                    char ab;
                                    
                                    cout << "==== Float ====" << endl;
                                    cout << "Masukkan Angka Pertama  : " << endl;
                                    cin >> a;
                                    cout << "Masukkan Angka Kedua  : " << endl;
                                    cin >> b;
                                    cout << "Masukkan Operator (+, -, *, /)  : " << endl;
                                    cin >> ab;
                                    
                                    if (ab == '+') {
                                        float hasil_4 = a+b;
                                        cout << a << "+" << b << "=" << hasil_4;
                                    }
                                    
                                    else if (ab == '-') {
                                        float hasil_4 = a-b;
                                        cout << a << "-" << b << "=" << hasil_4;
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
                                            cout << "ERROR! TIDAK BISA DIBAGI DENGAN 0" << endl;
                                        }
                                    }
                                }
                                else if (subpilihan2 == 2) {
                                    double c, k;
                                    char ck;
                                    
                                    cout << "==== Double ====" << endl;
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
                                    
                                    else if (ck == '*') {
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
                        }
                    } while (angkaMenu != 3);
                }
                else if (submenu1 == 2) {
                    int golchar;
                    
                    do { 
                        
                        cout << "=== GOLONGAN KARAKTER ===" << endl;
                        cout << "1. Char" << endl;
                        cout << "2. String" << endl;
                        cout << "3. Kembali Ke Menu Sebelumnya" << endl;
                        cout << "Pilih (1-3) : " << endl;
                        cin >> golchar;
                        
                        if (golchar == 1) {
                            char c, g;
                            
                            cout << "==== Karakter ====" << endl;
                            cout << "Masukkan 1 Karakter Pertama  : " << endl;
                            cin >> c;
                            cout << "Masukkan 1 Karakter Kedua  : " << endl;
                            cin >> g;
                            
                            cout << "Karakter Pertama Yang Dimasukkan  : " << c << endl;
                            cout << "Karakter Kedua Yang Dimasukkan  : " << g << endl;
                        }
                        
                        else if (golchar == 2) {
                            string w;
                            
                            cout << "Masukkan String  : " << endl;
                            cin >> w;
                            cout << "Hasil String  : " << w << endl;
                        }
                    } while (golchar != 3);
                }
                else if (submenu1 == 3){
                    int date_time;
                    do{
                        
                        cout << "=== Golongan Waktu ===" << endl;
                        cout << "1. Tanggal (Date)" << endl;
                        cout << "2. Waktu (Time)" << endl;
                        cout << "3. Tanggal Waktu (DateTime)" << endl;
                        cout << "4. Kembali Ke Menu Sebelumnya" << endl;
                        cout << "Pilih (1-4) : " << endl;
                        cin >> date_time;
                        
                        time_t now = time(0);
                        tm *local = localtime (&now);
                        
                        if (date_time == 1) {
                            
                            cout << "=== Tanggal ===" << endl;
                            cout <<"Tanggal  : " << local->tm_mday << "/" << (1 + local->tm_mon) << "/" << (1900 + local->tm_year) << endl;
                        }
                        
                        else if (date_time == 2) {
                            
                            cout << "=== Waktu ===" << endl;
                            cout << "Waktu  : " << local->tm_hour << ":" << local->tm_min << ":" << local->tm_sec << endl;
                        }
                        
                        else if (date_time == 3) {
                            
                            cout << "=== Tanggal Waktu ===" << endl;
                            cout << "Tanggal Waktu  : "  << local->tm_mday << "/" << (1 + local->tm_mon) << "/" << (1900 + local->tm_year) << " " << local->tm_hour << ":" << local->tm_min << ":" << local->tm_sec << endl;
                        }
                    } while (date_time != 4);
                }
                
                else if (submenu1 == 4) {
                    cout << "=== Gol Boolean ===" << endl;
                    cout << "Tipe data: Boolean" << endl;
                    
                    bool benar = true;
                    bool salah = false;
                    
                    cout << "true  = " << benar << endl;
                    cout << "false = " << salah << endl;
                    
                    cout << "\nContoh operasi:" << endl;
                    cout << "true && false = " << (benar && salah) << endl;
                    cout << "true || false = " << (benar || salah) << endl;
                    cout << "!true = " << (!benar) << endl;
                    
                    int angka;
                    cout << "\nMasukkan angka: ";
                    cin >> angka;
                    
                    bool isGenap = (angka % 2 == 0);
                    bool isPositif = (angka > 0);
                    
                    cout << angka << " genap? " << isGenap << endl;
                    cout << angka << " positif? " << isPositif << endl;
                }
            } while(submenu1 != 5);
        }
        
        //Percabangan
        else if (mainMenu == 2) {
            int percabanganMenu;
            do {
                cout << "=== Percabangan ===" << endl;
                cout << "1. If" << endl;
                cout << "2. If...else" << endl;
                cout << "3. If...else if...else" << endl;
                cout << "4. switch...case" << endl;
                cout << "5. Ternary" << endl;
                cout << "6. Kembali Ke Menu Utama" << endl;
                cout << "Pilih: ";
                cin >> percabanganMenu;
                
                if (percabanganMenu >= 1 && percabanganMenu <= 5) {
                    int nilai;
                    cout << "Masukkan nilai: ";
                    cin >> nilai;
                
                    if(percabanganMenu == 1) {
                        // IF
                        cout << "=== If ===" << endl;
                        if(nilai >= 60) {
                            cout << "Selamat! Anda lulus." << endl;
                        }
                        cout << "Program selesai." << endl;
                    }
                    else if(percabanganMenu == 2) {
                        // IF...ELSE
                        cout << "=== If...else ===" << endl;
                        if(nilai >= 60) {
                            cout << "Selamat! Anda lulus." << endl;
                        } else {
                            cout << "Maaf, Anda tidak lulus." << endl;
                        }
                    }
                    else if(percabanganMenu == 3) {
                        // IF...ELSE IF...ELSE
                        cout << "=== If...else if...else ===" << endl;
                        if(nilai >= 85) {
                            cout << "Grade: A" << endl;
                        } else if(nilai >= 70) {
                            cout << "Grade: B" << endl;
                        } else if(nilai >= 60) {
                            cout << "Grade: C" << endl;
                        } else if(nilai >= 50) {
                            cout << "Grade: D" << endl;
                        } else {
                            cout << "Grade: E" << endl;
                        }
                    }
                    else if(percabanganMenu == 4) {
                        // SWITCH...CASE
                        cout << "=== switch...case ===" << endl;
                        int pilihan;
                        cout << "Pilih hari (1-3):" << endl;
                        cout << "1. Senin" << endl;
                        cout << "2. Selasa" << endl;
                        cout << "3. Rabu" << endl;
                        cout << "Pilihan: ";
                        cin >> pilihan;
                        
                        switch(pilihan) {
                            case 1:
                                cout << "Hari Senin" << endl;
                                break;
                            case 2:
                                cout << "Hari Selasa" << endl;
                                break;
                            case 3:
                                cout << "Hari Rabu" << endl;
                                break;
                            default:
                                cout << "Pilihan tidak valid" << endl;
                        }
                    }
                    else if(percabanganMenu == 5) {
                        // TERNARY
                        cout << "=== Ternary ===" << endl;
                        string hasil = (nilai >= 60) ? "Lulus" : "Tidak Lulus";
                        cout << "Status: " << hasil << endl;
                        
                        // Contoh lain
                        string jenis = (nilai % 2 == 0) ? "Genap" : "Ganjil";
                        cout << "Bilangan " << nilai << " adalah " << jenis << endl;
                    }
                }
            } while(percabanganMenu != 6);
        }
        
        else if (mainMenu == 3) {
            int menuperulangan;
            do {
                
                cout << "==== MENU PERULANGAN ===" << endl;
                cout << "1. for" << endl; 
                cout << "2. while" << endl;
                cout << "3. do....while" << endl;
                cout << "4. Kembali Ke Menu Utama" << endl;
                cout << "Pilih (1-4)  : " << endl;
                cin >> menuperulangan;
                
                if (menuperulangan == 1) {
                    
                    cout << "=== for ===" << endl;
                    cout << "perulangan 1 sampai 10" << endl;
                    for (int confor = 1; confor <= 10; confor++) {
                        cout << "Iterasi ke - " << confor << endl;
                    }
                }
                
                else if (menuperulangan == 2) {
                    
                    cout << "=== While ===" << endl;
                    cout << "Contoh Perulangan Sampai 10" << endl;
                    
                    int p = 1;
                    while (p <= 10) {
                        cout << "Iterasi Ke - " << p << endl;
                        p++;
                    }
                }
                else if(menuperulangan == 3) {
                    // DO...WHILE
                    cout << "=== do...while ===" << endl;
                    int counter = 1;
                    do {
                        cout << "Iterasi Ke - " << counter << endl;
                        counter++;
                    } while(counter <= 10);
                }
            } while(menuperulangan != 4);
        }
        
        else if (mainMenu == 4) {
            int arrayMenu;
            do {
                cout << "==== MENU LARIK (ARRAY) ====" << endl;
                cout << "1. Array 1 Dimensi" << endl;
                cout << "2. Array 2 Dimensi" << endl;
                cout << "3. Kembali Ke Menu Utama" << endl;
                cout << "Pilih (1-3)  : " << endl;
                cin >> arrayMenu;
                
                if(arrayMenu == 1) {
                    // ARRAY 1 DIMENSI
                    cout << "\n=== Array 1 dimensi ===" << endl;
                    int arr[5] = {10, 20, 30, 40, 50};
                    
                    cout << "Isi array:" << endl;
                    for(int i = 0; i < 5; i++) {
                        cout << "arr[" << i << "] = " << arr[i] << endl;
                    }
                    
                    // Hitung total
                    int total = 0;
                    for(int i = 0; i < 5; i++) {
                        total += arr[i];
                    }
                    cout << "Total semua elemen: " << total << endl;
                }
                else if(arrayMenu == 2) {
                    // ARRAY 2 DIMENSI
                    cout << "\n=== Array 2 dimensi ===" << endl;
                    int matrix[2][3] = {
                        {1, 2, 3},
                        {4, 5, 6}
                    };
                    
                    cout << "Matriks 2x3:" << endl;
                    for(int i = 0; i < 2; i++) {
                        for(int j = 0; j < 3; j++) {
                            cout << matrix[i][j] << " ";
                        }
                        cout << endl;
                    }
                }
            } while(arrayMenu != 3);
        }
        
        cout << "\nTekan Enter untuk melanjutkan...";
        cin.ignore();
        cin.get();
    }
    
    return 0;
}
