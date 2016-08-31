#include <iostream>



int main()
{
	int choice;
	std::cin >> choice;
	switch (choice)
	{
		case 1:
			std::cout << 1 << std::endl;
			break;

		case 2:
			std::cout << 2 << std::endl;
			break;

		case 3:
			std::cout << 3 << std::endl;
			break;

		case 4:
			std::cout << 4 << std::endl;
			break;

		default:
			std::cout << error << std::endl;
			break;
	}
	system("pause");
	return 0;
}