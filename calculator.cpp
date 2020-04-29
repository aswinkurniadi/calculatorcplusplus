#include <iostream>
#include <iomanip>
using namespace std;

float result;
int i = 1;

void garis(){
	cout << "---------------------------------------" << endl;
} 

void banner(){
	garis();
	cout << "PROGRAM KALKULATOR SEDERHANA" << endl;
	cout << "By Aswin Kurniadi" << endl;
	garis();
}

void process(float input1, float input2, char operasi){
	if (operasi == '+') {
		result = input1 + input2;
	} else 
	if (operasi == '-') {
		result = input1 - input2;
	} else 
	if (operasi == '*') {
		result = input1 * input2;
	} else 
	if (operasi == '/') {
		result = input1 / input2;
	} else {
		cout << "Input yang anda masukkan salah! cek[input1, input2, mapun operasinya]";
	}	
}

void input(){
	float input1, input2;
	char operasi;
	
	cout << "Masukkan angka Pertama : ";
	cin >> input1;
	cout << "Masukkan Operasinya ['+','-','*','/']: ";
	cin >> operasi;
	cout << "Masukkan angka Kedua : ";
	cin >> input2;
	process(input1, input2, operasi);
}

void output(){
	cout << "Hasilnya adalah ";
	cout << setiosflags(ios::fixed) << setprecision(2) << result;
}

void perintah(){
	int pilihan;
	float input2;
	char operasi;
	cout << "\nOperasi ke " << i++ << endl;
	cout << "\n\nApakah ingin melanjutkan operasi?" << endl;
	cout << "[1] Melanjutkan operasi." << endl;
	cout << "[2] Operasi Baru." << endl;
	cout << "[3] Tidak melanjutkan \n" << endl;
	cout << "Pilihan Anda [1/2/3] :";
	cin >> pilihan;
	if (pilihan == 1) {
		float input1 = result;
		cout << "Hasil sebelumnya: " << setiosflags(ios::fixed) << setprecision(2) << input1 << endl;
		cout << "Masukkan Operasinya ['+','-','*','/']: ";
		cin >> operasi;
		cout << "Masukkan angka Kedua : ";
		cin >> input2;
		process(input1, input2, operasi);
		output();
		perintah();
	} else 
	if (pilihan == 2) {
		system("cls");
		banner();
		input();
		output();
		perintah();
	} else 
	if (pilihan == 3) {
		cout << "Program Selesai!" << endl;
	} else {
		cout << "Input yang anda masukkan salah!" << endl;
	}
}


int main(){
	banner();
	input();
	output();
	perintah();
}

