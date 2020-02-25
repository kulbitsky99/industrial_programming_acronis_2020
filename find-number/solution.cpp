/*	Created by Kulbitski Mikita.
	The task is to find absent elements in input array.
	Absent are all elements from 0 to total_sequence_quantity,
	which are absent in input.*/
#include <iostream>
#include <vector>

enum Const
{
	ERROR = -1
};

int find_number(std::vector<int>& full_array, int total_sequence_quantity,
				int array_size)/*	Create vector and tag elements with indexes equal to input_array numbers.
									In result, zero elements in vector are absent in input_array.*/
{
	int input_array_elem = 0;
	for(int i = 0; i < array_size; i++)
	{
		std::cin >> input_array_elem;
		if(!std::cin)
		{
			std::cout << "error\n";/*Input is not a number or bigger than int allows*/
			return ERROR;
		}
		if(	input_array_elem < 0 || 
			input_array_elem > total_sequence_quantity - 1)
		{
			std::cout << "error\n";/*Your number is invalid for this task*/
			return ERROR;
		}
		full_array[input_array_elem]++;
	}

	/*print results*/
	for(int i = 0; i < total_sequence_quantity; i++)
	{
		if(full_array[i] == 0)
			std::cout << i << " ";
	}
	return 0;
}

int main()
{
	int total_sequence_quantity = 0, array_size = 0;
	/*Enter quantity of numbers in a sequence [0; n - 1]*/
	std::cin >> total_sequence_quantity;
	/*Enter size of input array*/
	std::cin >> array_size;

	std::vector <int> full_array(total_sequence_quantity, 0);
	if(find_number(full_array, total_sequence_quantity, array_size) == 0)
	{
		full_array.clear();
		return 0;
	}
	else
	{
		full_array.clear();
		return ERROR; 
	}
	return 0;
}