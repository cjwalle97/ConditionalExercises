#include <iostream>

//Description: ask five numbers from the user before adding them together and displaying in an order dependent of the sum. Positive= ascending order. Negative= Descending order. 0= Order of input

int main()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int first;
	int second;
	int third;
	int fourth;
	int fifth;
	std::cin >> a >> b >> c >> d >> e;
	int sum = a + b + c + d + e;
	if (sum > 0)
	{
		fifth = (a > b&&b > c&&c > d&&d > e) ? a : b : c : d : e;
		fourth = (a<b&&b>c&&c > d&&d > e) ? a : b : c : d : e;
		third = (a<b&&a<c&&c>d&&d>e) ? a : b : c : d : e;
		second = (a<b&&b<c&&c<d&&d>e) ? a : b : c : d : e;
		first = (a < b&&b < c&&c < d&&d < e) ? a : b : c : d : e;
	}
	if (sum = 0)
	{
		first = a;
		second = b;
		third = c;
		fourth = d;
		fifth = e;
	}
	if (sum < 0)
	{
		fifth = (a < b&&b < c&&c < d&&d < e) ? a : b : c : d : e;
		fourth = (a > b&&b < c^&&c < d&&d < e) ? a : b : c : d : e;
		third = (a > b&&b > c&&c < d&&d < e) ? a : b : c : d : e;
		second = (a > b&&b > c&&c > d&&d < e) ? a : b : c : d : e;
		first = (a > b&&b > c&&c > d&&d > e) ? a : b : c : d : e;
	}
	std::cout << first << second << third << fourth << fifth << std::endl;
	system("pause");
	return 0;
}