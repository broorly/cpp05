#include"Intern.hpp"
#include"ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"PresidentialPardonForm.hpp"
#include"Form.hpp"

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
	*this = Form;
	return(*this);
}
Form* Intern :: makeForm(std::string name,std::string target)
{
	int i;
	i = -1;
	Form  *forms[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target),new PresidentialPardonForm(target)};
	std::string type[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	while(i < 3)
	{
		if(target == type[i])
			break;
		i++;
	}
	i--;
	for (int x = 0; x < 3; x++)
	{
		if(x != i)
			delete forms[x];
	}
	if( i == 4 )
		throw ERRORmsg();
	std::cout<<"Intern creates " << name << std::endl;
	return(forms[i]);
	
}

const char* Intern :: NotFround :: what() const throw() {
        	return "Grade Too Low Exception";
   	 }
const char* Intern :: ERRORmsg :: what() const throw() {
        	return "ERROR no form for this name";
   	 }