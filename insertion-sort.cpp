#include <iostream>
#include <stdio.h>
using namespace std;

int insertionSort(int tab[], int n) { //tab[] to sortowana lista, n to jej dlugosc
	if (n < 2) {
		cout << "Nothing to sort...";
		return 1;
	}
	for (int i = 1; i < n; i++) {
		int temp = tab[i];
		for (int k = i; k > 0 && tab[k - 1] > temp; k--) {
			tab[k] = tab[k - 1];
			tab[k - 1] = temp;
		}
	}
return 0;
}
	