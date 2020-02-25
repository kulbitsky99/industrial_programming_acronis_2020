/*	Created by Kulbitski Mikita.
	Here is obfuscated algorithm. The task is
	to understanding which one it is.*/
#include <iostream>

template <typename T>
void morgenshtern(T* ROSSIYA, int& morgenshtern_index, int& no_problem, int& no_problem_too, int nenyzhnaya_xernya_otvechau)
{
	morgenshtern_index = rand() % (no_problem_too - no_problem + 1) + no_problem;
	std::swap(ROSSIYA[no_problem], ROSSIYA[morgenshtern_index]);
	int i, j;
	i = no_problem_too;
	j = no_problem_too;
	while(j > no_problem)
	{
		if(ROSSIYA[j] <= ROSSIYA[no_problem])
		{
			j--;
		}
		if(ROSSIYA[j] > ROSSIYA[no_problem])
		{
			std::swap(ROSSIYA[i], ROSSIYA[j]);
			i--;																																															j--;
		}

	}
	morgenshtern_index = i;
	std::swap(ROSSIYA[i], ROSSIYA[j]);
	if(morgenshtern_index < nenyzhnaya_xernya_otvechau)
	{
		no_problem = morgenshtern_index + 1;
	}
	if(morgenshtern_index > nenyzhnaya_xernya_otvechau)
	{
		no_problem_too = morgenshtern_index - 1;
	}
}

int main()
{
	int n = 0, nenyzhnaya_xernya_otvechau = 0;
	int morgenshtern_index = 0;
	std::cin >> n >> nenyzhnaya_xernya_otvechau;
	int no_problem = 0, no_problem_too = n - 1;
	int* kusochki_jepi = new int [n];
	for(int i = 0; i < n; i++)
		std::cin >> kusochki_jepi[i];                                                                                                                                                               morgenshtern(kusochki_jepi, morgenshtern_index, no_problem, no_problem_too, nenyzhnaya_xernya_otvechau);
	while(morgenshtern_index != nenyzhnaya_xernya_otvechau)
	{
		morgenshtern(kusochki_jepi, morgenshtern_index, no_problem, no_problem_too, nenyzhnaya_xernya_otvechau);
	}                                                                                                                                                                                                                                                                                                                                                                                                                                          std::cout << kusochki_jepi[morgenshtern_index] << '\n';
	delete [] kusochki_jepi;
	return 0;
}
