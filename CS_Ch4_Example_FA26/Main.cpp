#include <iostream>
#include <fstream>

int main()
{
	// File input
	std::ifstream infile;
	infile.open("C:/Users/busch/source/repos/CS_Ch4_Example_FA26/CS_Ch4_Example_FA26/data.dat");

	int tempInput, tempInput2;

	infile >> tempInput >> tempInput2;
	std::cout << "Data from the file: " << tempInput << std::endl;

	std::cout << "Data from the file: " << tempInput2 << std::endl;

	infile >> tempInput;
	std::cout << "Data from the file: " << tempInput << std::endl;

	infile >> tempInput;
	std::cout << "Data from the file: " << tempInput << std::endl;

	// File output
	std::ofstream outHam;
	outHam.open("output.dat");

	outHam << "Data from the file: " << tempInput << std::endl;
	outHam << "Data from the file: " << tempInput2 << std::endl;

	return 0;
}