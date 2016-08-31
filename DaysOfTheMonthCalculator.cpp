#include <iostream>



int main()
{
	int month;
	std::cin >> month;
	switch (month)
	{
	case 1:
		std::cout << 31 << std::endl;
		break;
	case 2:
		std::cout << 28 << std::endl;
		break;
	case 3:
		std::cout << 31 << std::endl;
	case 4:
		std::cout << 30 << std::endl;
		break;
	case 5:
		std::cout << 31 << std::endl;
		break;
	case 6:
		std::cout << 30 << std::endl;
		break;
	case 7:
		std::cout << 31 << std::endl;
		break;
	case 8:
		std::cout << 31 << std::endl;
		break;
	case 9:
		std::cout << 30 << std::endl;
		break;
	case 10:
		std::cout << 31 << std::endl;
		break;
	case 11:
		std::cout << 30 << std::endl;
		break;
	case 12:
		std::cout << 31 << std::endl;
		break;
	default:
		std::cout << "error" << std::endl;
	}
	system("pause");
	return 0;
}