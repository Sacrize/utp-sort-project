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
	for (int i = 0; i < (t_s - 1); i++) { //pêtla leci po wszystkich elementach tablicy, -1 bo bêd¹ porównywane 2 elem.
		min = i;//ustawiam min. elem. na aktualn¹ pozycje
		for (int j = i + 1; j < t_s; j++) //i+1-aktualny elem. porównywany z nastêpnym indexem
		{
			if (t[j] < t[min]) {
				min = j; //jesli nastepny elem bêdzie < od aktualnieustawionego min. elem.-zamieniamy je
			}
		}
	}
	return;
}