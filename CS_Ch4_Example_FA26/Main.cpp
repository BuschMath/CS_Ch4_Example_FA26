#include <iostream>
#include <fstream>

int main()
{
	// File input
	std::ifstream infile;
	infile.open("C:/Users/busch/source/repos/CS_Ch4_Example_FA26/CS_Ch4_Example_FA26/data.dat");

	int tempInput, tempInput2, tempInput3, tempInput4;

	infile >> tempInput >> tempInput2 >> tempInput3 >> tempInput4;
	std::cout << "Data from the file: " << tempInput << std::endl;

	std::cout << "Data from the file: " << tempInput2 << std::endl;

	std::cout << "Data from the file: " << tempInput3 << std::endl;

	std::cout << "Data from the file: " << tempInput4 << std::endl;

	// File output
	std::ofstream outHam;
	outHam.open("output.dat", std::ios::app);

	outHam << "Data from the file: " << tempInput << std::endl;
	outHam << "Data from the file: " << tempInput2 << std::endl;

	return 0;
}