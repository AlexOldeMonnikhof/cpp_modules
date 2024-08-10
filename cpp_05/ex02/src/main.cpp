#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

int main()
{
	try
	{
		Bureaucrat	b1("john", -1);
		std::cout << b1 << std::endl;
		ShrubberyCreationForm f1("house");
		f1.execute(b1);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
