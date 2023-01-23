#include"RobotomyRequestForm.hpp"

const char* RobotomyRequestForm ::GradeNotSigned :: what() const throw() {
        	return "Robotomy Failed";
   	 }
RobotomyRequestForm::RobotomyRequestForm(/* args */) : _Grade_to_execute(45), _Grade_to_sign(72)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : _Grade_to_execute(45) , _Grade_to_sign(72)
{
	_signed = false;
	_target = target;
}
RobotomyRequestForm ::RobotomyRequestForm(const RobotomyRequestForm &RobotomyRequestForm) : _Grade_to_execute(RobotomyRequestForm._Grade_to_execute),  _Grade_to_sign(RobotomyRequestForm._Grade_to_sign)
{
	std::cout <<"RobotomyRequestForm Copy constructor called" << std::endl;
 	*this = RobotomyRequestForm;
}

RobotomyRequestForm &RobotomyRequestForm ::operator=(const RobotomyRequestForm& RobotomyRequestForm)
{
	this->_signed = RobotomyRequestForm._signed;
	this->_target = RobotomyRequestForm._target;
	return(*this);
}
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout<<"RobotomyRequestForm  destructor called" << std::endl;
}
void RobotomyRequestForm :: execute(Bureaucrat const & executor) {
	if(this->_Grade_to_execute >= executor.getGrade()&& this->_signed == true)
	{
		std::srand(time(NULL));
    	int random = std ::rand();
		if(random % 2)
			std::cout<<this->_target << " has been robotomized successfully." << std::endl;
		else
			std::cout<<"Robotomy failed " << std::endl;
	}
	else
		throw GradeNotSigned();
}
void RobotomyRequestForm :: beSigned(Bureaucrat &burea)
{
	if(this->_Grade_to_sign >= burea.getGrade())
	{
		this->_signed = true;
	}
	else
		throw GradeTooLowException();
}