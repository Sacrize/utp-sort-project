#include <iostream>
#include <stdio.h>
using namespace std;
void selectionSortMin(int t[], int t_s);
void selectionSortMax(int t[], int t_s);
void selectionSort(int t[], int t_s);

/*Wybor przez uzytkownika
kolejnosci sortowania*/

void selectionSort(int t[], int t_s)
{
	int a; //zmienna wyboru
	
	cout << "Wybierz czy chesz posortowac liczby malejaco czy rosnaco.\n\t-jesli od najmniejszej do najwiekszej, wybierz 1\n\t-jesli od najwiekszej do najmniejszej, wybierz 2\n";
	cin >> a;
	if (a = 1 || 2)
	{
		if (a = 1) {//uzyt wybral selectionsortMin
			selectionSortMin(t, t_s);
		}
		else if (a = 2)//uzyt wybral selectionSortMax
		{
			selectionSortMax(t, t_s);
		}
	}
		else//zostaly wprowadzone bledne znaki
		{
			cout << "Wprowadziles bledny znak" << endl;
		}

	
	return;
}

/*Sortowanie
najmniejszy-najwiekszy elm.*/

void selectionSortMin(int t[], int t_s)
{
	/*Szukanie
	najmniejszego
	elementu
	*/
	int min; //najmniejszy element
	for (int i = 0; i < (t_s - 1); i++) { //p�tla leci po wszystkich elementach tablicy, -1 bo b�d� por�wnywane 2 elem.
		min = i;//ustawiam min. elem. na aktualn� pozycje
		for (int j = i + 1; j < t_s; j++) //i+1-aktualny elem. por�wnywany z nast�pnym indexem
		{
			if (t[j] < t[min]) {
				min = j; //jesli nastepny elem b�dzie < od aktualnieustawionego min. elem.-zamieniamy je
			}
		}
		/*Wstawianie
		min elem na miejse*/

		if (min != 1) //jesli akt. min. elem. nie jest r�wny akt. iteracji glownego for
		{
			int temp = t[i]; //zmienna pomoc, ktorej przypisuje indeks akt iteracji
			t[i] = t[min]; //akt. iteracji przypisuje wartosc najmniejszego elem.
			t[min] = temp;//najmnniekszy elem. dostaje indeks akt. iteracji
		}
	}
	return;
}
/*Sortowanie 
najwiekszy-najmniejszy elem.*/

void selectionSortMax(int t[], int t_s) //analogiczne nie selectionSortMin, zamiast zmiennej min jest max i zmiana linijki 21
{
	int max;
	for (int i = 0; i < (t_s - 1); i++)
	{
		max = i;
		for (int j = i + 1; j < t_s; j++)
		{
			if (t[j] > t[max])//jesli elem. bedzie wiekszy od akt. max elem.- zamieniamy je
				max = j;
		}
		if (max != i)
		{
			int temp = t[i];
			t[i] = t[max];
			t[max] = temp;
		}
	}
}