//1. karena Algoritma mampu mempermudah dalam memecahkan permasalahan yang berkaitan dengan suatu program yang tidak dapat diselesaikan dengan mudah, serta algoritma mampu menyederhhanakan sebuah program;
//2. Statis dan dinamis.
//3. faktor-faktor yang mempengaruhi efisiensi program algoritma: Ada output, efektifitas dan efesiensi, jumlah langkahnya berhingga, (semi algoritma) berakhir dan terstruktur.
//4. Algoritma quicksort, karena kinerja algoritma ini sangat cepat dibandingkan algoritma pengurutan data lainnya. Quicksort memanfaatkan metode drive and conquer yang memungkinkan untuk mengurangi kompleksitas waktu secara drastis.
//5. Quadratic: Bubbleshort, Selectionsort, Insertionsort dan Shellsort. Loglinear: Quicksort dan Margesort.

#include <iostream>
using namespace std;

int lrr[65];
int cmp_count = 0;
int mov_count = 0;
int n;

void input() {
	while (true) {
		cout << "Masukkan panjang elemen array : ";
		cin >> n;

		if (n <= 65)
			break;
		else
			cout << "\n=================================";
			cout << "\nMaksimum panjang array adalah 65";
			cout << "\n=================================" << endl;
			cout << endl;
	}

	cout << "===========================" << endl;
	cout << "\nMasukkan elemen array" << endl;
	cout << "===========================" << endl;

	for (int i = 0; i < n; i++) {
		cout << (i + 1) << "). ";
		cin >> lrr[i];
	}
}

void swap(int x, int y) {
	int temp;
	temp = lrr[x];
	lrr[x] = lrr[y];
	lrr[y] = temp;
}

void algorithm(int low, int high) {
	int pivot, i, LR;
	if (low > high)
		return;

	pivot = lrr[low];
	i = low + 1;
	LR = high;

	while (i <= LR) {

		while ((lrr[i] <= pivot) && (i <= high)) {
			i++;
			cmp_count++;
		}
	}
}
