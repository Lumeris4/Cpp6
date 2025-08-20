#include "Scalar.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Please enter an argument\n";
		return 1;
	}
	ScalarConverter::Convert(argv[1]);
	return 0;
}