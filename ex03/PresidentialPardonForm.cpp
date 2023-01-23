#include"PresidentialPardonForm.hpp"

const char* PresidentialPardonForm ::GradeNotSigned :: what() const throw() {
        	return "Presidential Failed";
   	 }
PresidentialPardonForm::PresidentialPardonForm(/* args */) : _Grade_to_execute(5), _Grade_to_sign(25)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : _Grade_to_execute(5) , _Grade_to_sign(25)
{
	_signed = false;
	_target = target;
}
PresidentialPardonForm ::PresidentialPardonForm(const PresidentialPardonForm &PresidentialPardonForm) : _Grade_to_execute(PresidentialPardonForm._Grade_to_execute),  _Grade_to_sign(PresidentialPardonForm._Grade_to_sign)
{
	std::cout <<"PresidentialPardonForm Copy constructor called" << std::endl;
 	*this = PresidentialPardonForm;
}

PresidentialPardonForm &PresidentialPardonForm ::operator=(const PresidentialPardonForm& PresidentialPardonForm)
{
	this->_signed = PresidentialPardonForm._signed;
	this->_target = PresidentialPardonForm._target;
	return(*this);
}
PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout<<"PresidentialPardonForm  destructor called" << std::endl;
}
void PresidentialPardonForm :: execute(Bureaucrat const & executor) {
	if(this->_Grade_to_execute >= executor.getGrade() && this->_signed == true)
	{
		std::cout<<this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
	else
		throw GradeNotSigned();
}
void PresidentialPardonForm :: beSigned(Bureaucrat &burea)
{
	if(this->_Grade_to_sign >= burea.getGrade())
	{
		this->_signed = true;
	}
	else
		throw GradeTooLowException();
}