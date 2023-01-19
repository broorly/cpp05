#include"Intern.hpp"

Intern :: Intern()
{
	std::cout<<"Intern Default constructor called "<< std::endl;
}
Intern :: ~Intern()
{
	std::cout<<"Intern Default destructor called "<< std::endl;
}
Intern ::Intern(const Intern &Intern)
{
	std::cout <<"Intern Copy constructor called" << std::endl;
 	*this = Intern;
}

Form &Form ::operator=(const Form& Form)
{
	return(*this);
}
Form* Intern :: makeForm(std::string name,std::string target)
{
	////
}
const char* Intern :: NotFround :: what() const throw() {
        	return "Grade Too Low Exception";
   	 }