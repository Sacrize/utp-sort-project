#include "main.h"

int main()
{
	while (true)
	{
		int n = 0;

		std::cout << "Number of numbers: ";
		std::cin >> n;
		std::cout << std::endl;

		int *tab = new int[n];

		std::cout << "Give me all the numbers:" << std::endl;

		for (int i = 0; i < n; i++)
		{
			std::cout << "No. " << i + 1 << ": ";
			std::cin >> tab[i];
		}

		Quick quick(tab, n);

		std::cout << std::endl;

		for (int i = 0; i < n; i++) 
		{
			std::cout << tab[i];
			if (i < n - 1) std::cout << ", ";
		}

		std::cout << std::endl;

		delete[] tab;
	}

	system("PAUSE");
	return 0;
}