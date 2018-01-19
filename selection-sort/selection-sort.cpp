// selection-sort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace std;
void selectionSort(int t[], int t_s);


int main()
{
	
	int t_size;
	cout << "Podaj ilosc liczb do posortowania" << endl;
	cin >> t_size;

	int *tab = new int[t_size];//dynamiczna tablica na wybraną ilosc elementow
	cout << "Wymien liczby do posortowania" << endl;
	for (int i = 0; i < t_size; i++) {
		cin >> tab[i];//pobiera kolejne liczby
	}
	 selectionSort(tab, t_size);
	 delete tab;
    return 0;
	
}

void selectionSort(int t[], int t_s)
{
	/*Szukanie
	najmniejszego
	elementu
	*/
	int min; //najmniejszy element
	for (int i = 0; i < (t_s - 1); i++) { //pętla leci po wszystkich elementach tablicy, -1 bo będą porównywane 2 elem.
		min = i;//ustawiam min. elem. na aktualną pozycje
		for (int j = i + 1; j < t_s; j++) //i+1-aktualny elem. porównywany z następnym indexem
		{
			if (t[j] < t[min]) {
				min = j; //jesli nastepny elem będzie < od aktualnieustawionego min. elem.-zamieniamy je
			}
		}
	}
	return;
}