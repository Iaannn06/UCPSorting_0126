// UCPSorting_0126.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



//1. Bubble sort bekerja dengan cara melakukan scanning secara berulang pada data,kemudia membandingkan elemt adjacent, lalu menukarnya jika data berada pada urutan yang salah.
//2. Shell sort merupakan penyempurnaan dari insertion sort, yang dimana membandingkan elemen-elemen data secara terpisah dengan jarak beberapa posisi untuk membuat beberapa sublist.lalu ia akan memasukkan insertion sort ke tiap elemen sublist untuk menggeser elemen menuju posisi yang tepat.
//3. kita dapat menggunakan shell sort, karena shell sort akan membantu elemen yang sudah benar, yang dimana ia akan memasukkan insertion sort ke tiap sublist untuk dipindahkan.
//4.

#include <iostream>
using namespace std;

int Iaannn06[26];
int n;

void input() {
	while (true) {
		cout << "Masukkan banyaknya elemen pada Iaannn06 = ";
		cin >> n;
		if (n <= 26)
			break;
		else {
			cout << "\nArr dapat mempunyai maksimal 26 elemen.\n";
		}
	}
	cout << endl;
	cout << "=======================" << endl;
	cout << "Masukan elemen Iaannn06" << endl;
	cout << "=======================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i - 1) << ": ";
		cin >> Iaannn06[i];
	}
}

void bubblesortarray() {
	int pass = 1;

	do {
		for (int j = 0; j <= n - 1 - pass; j++) {
			if (Iaannn06[j] < Iaannn06[j + 1]) {
				int temp;
				temp = Iaannn06[j];
				Iaannn06[j + 1] + temp;
			}
		}pass = pass + 1;
	} while (pass <= n - 1);

}
void display() {
	cout << endl;
	cout << "====================================" << endl;
	cout << "Element Iaannn06 yang telah tersusun" << endl;
	cout << "====================================" << endl;
	for (int j = 0; j < n; j++) {
		cout << Iaannn06[j] << endl;
	}
	cout << "jumlah pass + " << n - 1 << endl;
	cout << endl;
}
int main() {

	input();
	bubblesortarray();
	display();
	system("pause");

	return 0;
}








