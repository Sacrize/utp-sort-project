#include "main.h"

/*


	  /$$$$$$                        /$$     /$$                    
	 /$$__  $$                      | $$    |__/                    
	| $$  \__/  /$$$$$$   /$$$$$$  /$$$$$$   /$$ /$$$$$$$   /$$$$$$ 
	|  $$$$$$  /$$__  $$ /$$__  $$|_  $$_/  | $$| $$__  $$ /$$__  $$
	 \____  $$| $$  \ $$| $$  \__/  | $$    | $$| $$  \ $$| $$  \ $$
	 /$$  \ $$| $$  | $$| $$        | $$ /$$| $$| $$  | $$| $$  | $$
	|  $$$$$$/|  $$$$$$/| $$        |  $$$$/| $$| $$  | $$|  $$$$$$$
	 \______/  \______/ |__/         \___/  |__/|__/  |__/ \____  $$
														   /$$  \ $$
														  |  $$$$$$/
														   \______/ 

*/

int main()
{
	while (true)
	{
		int n = 0;

		std::cout << "How many numbers: ";
		std::cin >> n;
		std::cout << std::endl;

		int *tab = new int[n];

		std::cout << "Give me all the numbers:" << std::endl;
		std::cout << "-----------------------------" << std::endl;

		for (int i = 0; i < n; i++)
		{
			std::cout << i + 1 << ": ";
			std::cin >> tab[i];

			std::cin.ignore(1024, '\n');
		}

		std::cout << std::endl;

		while (true)
		{
			std::cout << "Pick the sorting method: " << std::endl;
			std::cout << "-----------------------------" << std::endl;
			std::cout << "1. Selection sort" << std::endl;
			std::cout << "2. Insertion sort" << std::endl;
			std::cout << "3. Bubble sort" << std::endl;
			std::cout << "4. Quick sort" << std::endl;
			std::cout << ": ";

			int type;
			std::cin >> type;

			std::cin.ignore(1024, '\n');

			switch (type)
			{
				case 1:
				{
					Select s(tab, n);
					break;
				}
				case 2:
				{
					Insert i(tab, n);
					break;
				}
				case 3:
				{
					Bubble b(tab, n);
					break;
				}
				case 4:
				{
					Quick q(tab, n);
					break;
				}
				default:
				{
					continue;
				}
			}

			break;
		}
		
		std::cout << std::endl << "Result = ";

		for (int i = 0; i < n; i++) 
		{
			std::cout << tab[i];
			if (i < n - 1) std::cout << ", ";
		}

		std::cout << std::endl;

		delete[] tab;

		std::cout << "Do you want to continue? [T/n]: ";

		char c;
		std::cin >> c;

		std::cin.ignore(1024, '\n');

		if (tolower(c) == 'n')
		{
			break;
		}

		std::cout << std::endl;
	}

	system("PAUSE");
	return 0;
}