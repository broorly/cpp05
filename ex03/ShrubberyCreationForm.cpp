#include"ShrubberyCreationForm.hpp"

const char* ShrubberyCreationForm ::GradeNotSigned :: what() const throw() {
        	return "Form not Signed !";
   	 }
ShrubberyCreationForm::ShrubberyCreationForm(/* args */) : _Grade_to_execute(137), _Grade_to_sign(145)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : _Grade_to_execute(137) , _Grade_to_sign(145)
{
	_signed = false;
	_target = target;
}
ShrubberyCreationForm ::ShrubberyCreationForm(const ShrubberyCreationForm &ShrubberyCreationForm) : _Grade_to_execute(ShrubberyCreationForm._Grade_to_execute),  _Grade_to_sign(ShrubberyCreationForm._Grade_to_sign)
{
	std::cout <<"ShrubberyCreationForm Copy constructor called" << std::endl;
 	*this = ShrubberyCreationForm;
}

ShrubberyCreationForm &ShrubberyCreationForm ::operator=(const ShrubberyCreationForm& ShrubberyCreationForm)
{
	this->_signed = ShrubberyCreationForm._signed;
	this->_target = ShrubberyCreationForm._target;
	return(*this);
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout<<"ShrubberyCreationForm Copy destructor called" << std::endl;
}
void ShrubberyCreationForm :: execute(Bureaucrat const & executor) {
	 std::ofstream file;
	 std::string txt;
	if(this->_Grade_to_execute >= executor.getGrade()&& this->_signed == true)
	{
		file.open(this->_target + (std::string)"_shrubbery");
		if(!file.fail())
		{
			file << "         v " << std::endl;
			file <<    "        >X<" << std::endl;
			file << "         A " << std::endl;
			file << "        d$b" << std::endl;
			file << "      .d$$$b." << std::endl;
			file << "    .d$i$$$$$b." << std::endl;
			file << "       d$$@b" << std::endl;
			file << "      d$$$$ib" << std::endl;
			file << "    .d$$$$$$$b" << std::endl;
			file << "   .d$$@$$$$$$$ib." << std::endl;
			file << "      d$$i$$b" << std::endl;
			file << "     d$$$$$@$b" << std::endl;
			file << "  .d$@$$$$$$$$@b." << std::endl;
			file << ".d$$$$i$$$$$$$$$$b." << std::endl;
			file << "        ###" << std::endl;
			file << "        ###" << std::endl;
			file << "        ###" << std::endl;
			file.close();
		}
		else
			return;
	}
	else
		throw GradeNotSigned();
}