#include "select.h"

void Select::sortMin(int tab[], int n)
{
	/*Szukanie
	najmniejszego
	elementu
	*/
	int min; //najmniejszy element
	for (int i = 0; i < (n - 1); i++) //pêtla leci po wszystkich elementach tablicy, -1 bo bêd¹ porównywane 2 elem.
	{
		min = i;//ustawiam min. elem. na aktualn¹ pozycje
		for (int j = i + 1; j < n; j++) //i+1-aktualny elem. porównywany z nastêpnym indexem
		{
			if (tab[j] < tab[min])
			{
				min = j; //jesli nastepny elem bêdzie < od aktualnieustawionego min. elem.-zamieniamy je
			}
		}
		/*Wstawianie
		min elem na miejse*/

		if (min != 1) //jesli akt. min. elem. nie jest równy akt. iteracji glownego for
		{
			int temp = tab[i]; //zmienna pomoc, ktorej przypisuje indeks akt iteracji
			tab[i] = tab[min]; //akt. iteracji przypisuje wartosc najmniejszego elem.
			tab[min] = temp;//najmnniekszy elem. dostaje indeks akt. iteracji
		}
	}
}

void Select::sortMax(int tab[], int n)
{
	int max;
	for (int i = 0; i < (n - 1); i++)
	{
		max = i; //zamiast min, zmienna max
		for (int j = i + 1; j < n; j++)
		{
			if (tab[j] > tab[max])//jesli elem. bedzie wiekszy od akt. max elem.- zamieniamy je
			{
				max = j;
			}
		}
		if (max != i)
		{
			int temp = tab[i];
			tab[i] = tab[max];
			tab[max] = temp;
		}
	}
}

Select::Select(int tab[], int n, direction d)
{
	switch (d)
	{
		case DESC:
		{
			this->sortMax(tab, n);
			break;
		}
		case ASC:
		default:
		{
			this->sortMin(tab, n);
			break;
		}
	}

}
