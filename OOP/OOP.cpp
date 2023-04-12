#include <iostream>
using namespace std;

class Mahasiswa {

private:
	int NIM;
	string Nama;

public:
	void inputdata() {
		cout << "Masukkan NIM : " << endl;
		cin >> NIM;
		cout << "Masukkan Nama : " << endl;
		cin >> Nama;
	}

	void tampildata() {
		cout << "\nNIM : " << NIM << endl;
		cout << "Nama : " << Nama << endl;
	}
};

class Matakuliah {
	
private:
	string kodemk;
	string namamk;
	int sks;

public:
	void InputMK();
	void TampilMK();
};