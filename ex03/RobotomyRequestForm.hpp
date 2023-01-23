#include<string>
#include<iostream>
#include"Bureaucrat.hpp"
#include"Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std ::string _target;
	bool _signed;
	const int _Grade_to_execute;
	const int _Grade_to_sign;
public:
	RobotomyRequestForm(/* args */);
	RobotomyRequestForm(std::string);
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &RobotomyRequestForm);
  	RobotomyRequestForm &operator=(const RobotomyRequestForm& RobotomyRequestForm);

	std::string getTarget();
	void beSigned(Bureaucrat &burea);
	void execute(Bureaucrat const & executor) ;
	class GradeNotSigned : public std::exception {
		public:
    	virtual const char* what() const throw();
	};
};