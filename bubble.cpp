#include "bubble.h";

void Bubble::sortASC(int tab[], int n) 
{
	for (int i = 0; i < n; i++) 
	{
		for (int j = 1; j < n - i; j++) 
		{
			if (tab[j - 1] > tab[j]) 
			{
				this->swap(tab, j, j - 1);
			}
		}
	}
}

void Bubble::sortDESC(int tab[], int n) 
{
	for (int i = 0; i < n; i++) 
	{
		for (int j = 1; j < n - i; j++) 
		{
			if (tab[j - 1] < tab[j]) 
			{
				this->swap(tab, j, j - 1);
			}
		}
	}
}

void Bubble::swap(int tab[], int i, int j) 
{
	int temp = tab[j];
	tab[j] = tab[i];
	tab[i] = temp;
}

Bubble::Bubble(int tab[], int n, direction d)
{
	switch (d) 
	{
		case DESC: 
		{ 
			this->sortDESC(tab, n);
			break; 
		}
		case ASC: 
		default: 
		{ 
			this->sortASC(tab, n); 
			break; 
		}
	}

}