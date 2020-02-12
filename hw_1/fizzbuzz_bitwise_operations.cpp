#include <iostream>
#include <string>


bool is_div_by_3(int n) 
{ 
    if (n == 0 || n == 3) 
        return true; 
    if (n < 3) 
        return false; 
  
    //less than 3
    return is_div_by_3((int)(n >> 1) - (int)(n & 1)); 
} 

bool is_div_by_5(int n) 
{ 
    if (n == 0 || n == 5) 
        return true; 
    if (n < 5) 
        return false; 
  
    //less than 5
    return is_div_by_5((int)(n >> 2) - (int)(n & 3)); 
} 

  
int main()
{
	int number = 0;
	std::string output = "";
	while(std::cin >> number)
	{
		if(is_div_by_3(number) == true)
			output += "Fizz";
		if(is_div_by_5(number) == true)
			output += "Buzz";
		if(output == "")
			output += std::to_string(number);
		std::cout << output << " ";
		output = "";
	}

	return 0;
}