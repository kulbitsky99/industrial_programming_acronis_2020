#include <iostream>
#include <vector>

enum Const
{
	ERROR = -1
};

int main()
{
	int m = 0, array_size = 0, input_array_elem = 0;
	std::cout << "Enter quantity of numbers in a sequence [0; n - 1]\n";
	std::cin >> m;
	std::vector <int> full_array(m, 0);
	std::cout << "Enter size of input array\n";
	std::cin >> array_size;

	std::cout << "Enter input array\n";
	for(int i = 0; i < array_size; i++)
	{
		std::cin >> input_array_elem;
		if(input_array_elem < 0 || input_array_elem > m - 1)
			return ERROR;
		else
			full_array[input_array_elem]++;
	}

	std::cout << "Absent elements\n";
	for(int i = 0; i < m; i++)
	{
		if(full_array[i] == 0)
			std::cout << i << " ";
	}
	
	full_array.clear();
	return 0;
}