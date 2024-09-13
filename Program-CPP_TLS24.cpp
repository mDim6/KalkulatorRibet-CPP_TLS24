#include <iostream>
#include <cmath>
using namespace std;

int menu1;

int main () {
    //menu utama
    cout << "Selamat datang di kalkulator ribet\n";
    cout <<"Pilih menu yang sesuai dengan keinginan anda\n";
    cout <<"1 - Profil pembuat\n";
    cout <<"2 - Penjumlahan, Pengurangan, Perkalian, dan Pembagian\n";
    cout <<"3 - Persamaan kuadratik\n";
    cout <<"4 - Derivatif\n";
    cout <<"99 - Keluar\n";
    cin >> menu1;
        if(menu1==1){
            //perkenalan diri
            cout <<"Profil pembuat\n";
            cout <<"Nama: Muhammad Dimas Aryobagaskara\n";
            cout <<"NIM: 24/534000/TK/59177\n";
            cout <<"Prodi: Teknik Elektro\n";
            cout <<"Kelas: A\n";
            cin >> menu1;
        //menu operasi bilangan
        }else if(menu1==2){
            cout <<"Berapa banyak bilangan yang diinginkan: 2 atau 3\n";
            //banyak bilangan
            int bil;
            cin >> bil;
            //berhitung 2 angka
            if(bil == 2){
                double A, B;
                char op;
                cin >> A >> op >> B;
                if (op == '+'){
                    cout << A + B;;
                } else if (op == '-'){
                    cout << A - B;
                } else if (op == '*'){
                    cout << A * B;
                } else if (op == '/'){
                    cout << A / B;
                } else {
                    cout << "Operasi salah!";
                }
            //berhitung 3 angka, ruwet tapi
            }else {
                double A, B, C, AB, BC;
                char op1, op2;
                cin >> A >> op1 >> B >> op2 >> C;
                if (op1 == '*'){
                    AB = A*B;
                }else if (op1 == '/'){
                    AB = A/B;
                }else if (op2 == '*'){
                    BC = B*C;
                }else if (op2 == '/'){
                    BC = B/C;
                }else if (op1 == '+'){
                    AB = A+B;
                }else if (op1 == '-'){
                    AB = A-B;
                }
                if (op1 == '+'){
                    cout << A+BC;
                }else if (op1 == '-'){
                    cout << A-BC;
                }else if (op2 == '+'){
                    cout << AB+C;
                }else if (op2 == '-'){
                    cout << AB-C;
                }else if (op2 == '*'){
                    cout << AB*C;
                }else if (op2 == '/'){
                    cout << AB/C;
                }
            }
        //menu kuadratik
        }else if(menu1==3){
        double A, B, Bsq, C;
        cout << "Masukkan dengan input A, B, C dengan format Ax^2+Bx+C=0\n";
        cin >> A >> B >> C;
        Bsq = round(pow(B, 2));
        cout << "Titik simetrinya adalah " << -B/(2.0*A) << " dan titik puncaknya adalah (" << -B/(2.0*A) << "," << A*B*B/(4.0*A) - B*B/(2.0*A) + C << ")" << endl;
            if (Bsq-4*A*C < 0){
                cout << "Akar X merupakan bilangan kompleks";
            } else if (-(-B + sqrt(Bsq-4*A*C))/2*A == -(-B - sqrt(Bsq-4*A*C))/2*A){
                cout << "Akar X adalah " << (-B + sqrt(Bsq-4*A*C))/2*A;
            } else {
                cout << "Akar X1 adalah " << (-B + sqrt(Bsq-4*A*C))/2*A << " dan X2 adalah " << (-B - sqrt(Bsq-4*A*C))/2*A;
            }
        //menu derivatif
        }else if (menu1 = 4){
            cout << "Polinomial derajat berapa (max 100)\n";
            int poli, polinum[100];
            cin >> poli;
            for (int i=0; i < poli+1; i++){
                    cin >> polinum[i];
            }
            for (int i=0; i < poli; i++){
                    cout << "(" << polinum[i]*(poli-i) << ")x^" << poli-i-1;
                if(i != poli - 1){
                        cout << "+";
                }
            }
        }else if(menu1==99){
            return 0;
        }else {
            cout << "Pilih menu yang sesuai";
    }
}