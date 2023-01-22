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

Intern &Intern ::operator=(const Intern& Intern)
{
	(void)(Intern);
	// *this = Intern;
	return(*this);
}

Form* Intern :: makeForm(std::string name,std::string target)
{
	int i;
	i = 0;
	Form  *forms[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target),new PresidentialPardonForm(target)};
	std::string type[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	while(i < 3)
	{
		if(name == type[i])
		{
			for(int s = 0; s < 3 ; s++)
			{
				if(s != i)
					delete forms[s];
			}
			std::cout<<"Intern creates " << name << std::endl;
			return(forms[i]);
		}
		i++;
	}
	for(int z=0; z < 3;z++)
		delete forms[z];
	throw ERRORmsg();
}

const char* Intern :: NotFround :: what() const throw() {
        	return "Grade Too Low Exception";
   	 }
const char* Intern :: ERRORmsg :: what() const throw() {
        	return "ERROR no form for this name";
   	 }