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
	std::cout<<"RobotomyRequestForm Copy destructor called" << std::endl;
}
void RobotomyRequestForm :: execute(Bureaucrat const & executor) {
	if(this->_Grade_to_execute >= executor.getGrade())
	{
		std::cout<<this->_target << " has been robotomized successfully 50% of the time." << std::endl;
	}
	else
		throw GradeNotSigned();
}