#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int A[7];
	int j, k, C, temp, quit, select;
	
	cout << "Pengurutan Array | Agung Prasetyo (S1TIS210398)\n";
	back:
	cout << "Masukkan nlai pada elemen array : " << endl;
	for (C = 0; C < 7; C++){
		
		//menginput elemen array
		cout << "A[" << C << "] = ";
		cin >> A[C];
		cout << "\n";
	}
	cout << "Nilai elemen array sebelum diurutkan : " << endl;
	for (C = 0; C < 7; C++){
		cout << "A[" << C << "] = " << A[C] << endl;
	}
	
	//pengurutan metode maksimum-minimum
	int jmaks, U = 6;
	for (j = 0; j < 6; j++){
		jmaks = 0;
		for (k = 0; k <= U; k++){
			if(A[k] > A[jmaks]){
				jmaks = k;
			}
		}
		
		//penukaran nilai elemen array
		temp = A[U];
		A[U] = A[jmaks];
		A[jmaks] = temp;
		U--;
	}
	
	cout << "\nNilai Elemen setelah diurutkan : " << endl;
	for (C = 0; C < 7; C++){
		cout << "A[" << C << "] = " << A[C] << endl;
	}
	
	cout << "\n";
	cout << "Ulangi mengisi elemen Array? 1 = Iya | 0 = Tidak\n";
	cout << "==>> ";
	cin >> quit;
	cout << "\n\n";
	select:
	if(quit == 1){
		goto back;
		cout << "\n\n";
	} else if(quit == 0) {
		return 0;
	} else {
		cout << "Input salah!\n";
		cout << "Ulangi mengisi elemen Array? 1 = Iya | 0 = Tidak\n";
		cout << "==>> ";
		cin >> quit;
		cout << "\n\n";
		goto select;
		getch();
	}
}
