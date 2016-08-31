#include <iostream>

//Name: Result
//Type: int
//Description: asks the user for two numbers and a mathematical sign and then performs the appropriate math and displays the result

int main()
{
	int a;
	int b;
	char sign;
	int result;
	std::cin >> a >> b >> sign;
	switch (sign)
	{
	case '+':
		result = a + b;
		break;
	case '-':
		result = a - b;
		break;
	case '*':
		result = a*b;
		break;
	case '/':
		result = a / b;
		break;
	case '%':
		result = a%b;
		break;
	}
	std::cout << result << std::endl;
	return 0;
}