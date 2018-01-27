#include "insert.h"

void Insert::sort(int tab[], int n)
{
	for (int i = 1; i < n; i++) {
		int temp = tab[i];
		for (int k = i; k > 0 && tab[k - 1] > temp; k--) { //zamienia zmienne tak dlugo az beda posortowane
			tab[k] = tab[k - 1];
			tab[k - 1] = temp;
		}
	}
}

Insert::Insert(int tab[], int n, direction d)
{
	this->sort(tab, n);
}
