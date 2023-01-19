#include"Form.hpp"

Form::Form() : _Grade_to_execute(), _Grade_to_sign() , _Name()
{
	std::cout<<"Form default constructor called"<<std::endl;
}

Form :: Form(int grade_exe ,int grade_sign, std::string name,bool sin): _Grade_to_execute(grade_exe), _Grade_to_sign(grade_sign) , _Name(name)
{
	std::cout << "Form constructor with parametres  called" << std::endl;
	this->_signed = sin;
	if(_Grade_to_execute > 150 || _Grade_to_sign > 150)
		throw GradeTooLowException();
	if(_Grade_to_execute < 1 || _Grade_to_sign < 1)
		throw GradeTooHighException();
}
Form::~Form()
{
	std::cout << "Form default destructor called"<<std::endl;
}
Form ::Form(const Form &Form) : _Grade_to_execute(Form._Grade_to_execute),  _Grade_to_sign(Form._Grade_to_sign), _Name(Form._Name) 
{
	std::cout <<"From Copy constructor called" << std::endl;
 	*this = Form;
}

Form &Form ::operator=(const Form& Form)
{
	this->_signed = Form._signed;
	return(*this);
}

int Form :: get_grade_to_exe()const
{
	return(this->_Grade_to_execute);
}
int Form ::get_grade_to_sing()const
{
	return(this->_Grade_to_sign);
}
std::string Form :: getName()const
{
	return(this->_Name);
}
bool Form :: getsigned()const
{
	return(this->_signed);
}

std::ostream &operator<<(std::ostream &out, const Form &Form) {
  out << Form.getName() << " ,Form grade to execute: " << Form.get_grade_to_exe() 
  << " ,form grade to signe :" << Form.get_grade_to_sing() 
  << " ,signed :"<< Form.getsigned() ;
  return out;
}
void Form :: beSigned(Bureaucrat burea)
{
	if(this->_Grade_to_sign <= burea.getGrade())
		this->_signed = true;
	else
		throw GradeTooLowException();
}
const char* Form ::GradeTooHighException :: what() const throw() {
        	return "Grade Too High Exception";
   	 }
const char* Form ::GradeTooLowException :: what() const throw() {
        	return "Grade Too Low Exception";
   	 }