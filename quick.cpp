#include "quick.h"

void Quick::sort(int tab[], int p, int r)
{
	if (p < r)
	{
		int q = this->partition(tab, p, r);
		this->sort(tab, p, q);
		this->sort(tab, q + 1, r);
	}
}

int Quick::partition(int tab[], int p, int r)
{
	int x = tab[p];
	int i = p, j = r;

	while (true)
	{
		while (tab[j] > x)
			j--;
		while (tab[i] < x)
			i++;
		if (i < j)
		{
			int w = tab[i];
			tab[i] = tab[j];
			tab[j] = w;
			i++;
			j--;
		}
		else
			return j;
	}
}

Quick::Quick(int tab[], int n, direction d)
{
	this->sort(tab, 0, n - 1);
}