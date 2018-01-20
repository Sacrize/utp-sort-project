#include "iostream"

using namespace std;

void sortowanie_mal(int tab[], int n)
{
	for (int i = 0; i<n; i++)
		for (int j = 1; j<n - i; j++) //pętla wewnętrzna
			if (tab[j - 1]>tab[j])

				swap(tab[j], tab[j - 1]);//zamiana miejscami

}

void sortowanie_ros(int tab[], int n)
{
	for (int i = 0; i<n; i++)
		for (int j = 1; j<n - i; j++) //pętla wewnętrzna
			if (tab[j - 1]<tab[j])

				swap(tab[j], tab[j - 1]);//zamiana miejscami
	int main()
	{
		int *tab;
		int n, w;
		int k;
		cout << "ile liczb bedziesz chcial posortowac? " << endl;
		cin >> n;
		tab = new int[n];
		{
			cout << "Podaj liczbe " << i + 1 << " z " << n << endl;
			cin >> tab[i];
		}