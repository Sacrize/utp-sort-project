#include <iostream>
#include <stdio.h>
using namespace std;

void selectionSort(int t[], int t_s)
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
	}
	return;
}