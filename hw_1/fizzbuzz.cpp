#include <iostream>

int main()
{
	int n = 0, fizz_counter = 3, buzz_counter = 5;
	std::cin >> n;

	for(int i = 1; i <= n; i++)
	{
		fizz_counter--;
		buzz_counter--;
		if(fizz_counter != 0 && buzz_counter != 0)
		{
			std::cout << i;
		}
		if(fizz_counter == 0)
		{
			std::cout << "Fizz";
			fizz_counter += 3;
		}
		if(buzz_counter == 0)
		{
			std::cout << "Buzz";
			buzz_counter += 5;
		}
		std::cout << " ";
	}
	return 0;

}