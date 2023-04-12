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

void Matakuliah::InputMK() {
	cout << "\nMasukkan Kode Mata Kuliah : " << endl;
	cin >> kodemk;
	cout << "Masukkan Nama Mata Kuliah : " << endl;
	cin >> namamk;
	cout << "Masukkan Jumlah SKS : " << endl;
	cin >> sks;
}

void Matakuliah::TampilMK() {
	cout << "\nKode Mata Kuliah : " << kodemk << endl;
	cout << "Nama Mata Kuliah : " << namamk << endl;
	cout << "Jumlah SKS : " << sks << endl;
}

int main() {
	Mahasiswa mhs;
	Matakuliah mk;

	mhs.inputdata();
	mhs.tampildata();

	mk.InputMK();
	mk.TampilMK();
}