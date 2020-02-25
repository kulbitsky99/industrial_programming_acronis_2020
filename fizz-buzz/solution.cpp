/*	Created by Kulbitski Mikita.
	The task is to replace input number by fizz, if it is divided by 3,
	and buzz, if it is divided by 5. Don't use / and % operations.
	Completed this task using bitwise operations with numbers.*/
#include <iostream>
#include <string>
#include <cmath>

enum Const
{
	ERROR = -1
};

bool is_div_by_3(int n) 
{ 
    if (n == 0 || n == 3) 
        return true; 
    if (n < 3) 
        return false; 
  
    //less than 3
    return is_div_by_3((int)(n >> 1) - (int)(n & 1));//bitwise operations instead / and %
} 

bool is_div_by_5(int n) 
{ 
    if (n == 0 || n == 5) 
        return true; 
    if (n < 5) 
        return false; 
  
    //less than 5
    return is_div_by_5((int)(n >> 2) - (int)(n & 3));//bitwise operations instead / and %
} 

void fizz_buzz(long long int number, std::string output)//major function to replace numbers by fizz or buzz
{
	if(number < 0)
	{
		if(is_div_by_3(abs(number)) == true)
			output += "Fizz";
		if(is_div_by_5(abs(number)) == true)
			output += "Buzz";
	}
	else
	{
		if(is_div_by_3(number) == true)
			output += "Fizz";
		if(is_div_by_5(number) == true)
			output += "Buzz";
	}

	if(output == "")
		output += std::to_string(number);
	std::cout << output << " ";
	output = "";
}

int main()
{
	std::string output = "";
	int number = 0, number_of_elements = 0;
	
	std::cin >> number_of_elements;
	for(int i = 0; i < number_of_elements; i++)
	{
		std::cin >> number;
		if(!std::cin)
		{
			std::cout << "error\n";/*Input is not a number or bigger than long long int allows*/
			return ERROR;
		}
		fizz_buzz(number, output);
	}

	return 0;
}