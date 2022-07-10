#include <iostream>
using namespace std;

int main (){
	
	int A;
	cout << "Program Kedewasaan\n\n";
	cout << "Masukkan umur Anda : ";
	cin >> A;
	
	if (A <= 5){
		cout << "Balita\n\n";
		}
		else if (A <= 17){
		cout << "Anak-anak\n\n";
		}
		else {
		cout << "Dewasa\n\n";
		}
		system("pause");
}
