#include<string>
#include<iostream>
#include"Bureaucrat.hpp"
#include"Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std ::string _target;
	bool _signed;
	const int _Grade_to_execute;
	const int _Grade_to_sign;
public:
	PresidentialPardonForm(/* args */);
	PresidentialPardonForm(std::string);
	~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &PresidentialPardonForm);
  	PresidentialPardonForm &operator=(const PresidentialPardonForm& PresidentialPardonForm);

	std::string getTarget();
	void execute(Bureaucrat const & executor) ;
	class GradeNotSigned : public std::exception {
		public:
    	virtual const char* what() const throw() ;
	};
};
