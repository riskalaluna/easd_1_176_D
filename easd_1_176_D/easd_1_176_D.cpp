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
	}
}