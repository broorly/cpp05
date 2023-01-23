#pragma once
#include<string>
#include<iostream>
#include"Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	std ::string _target;
	bool _signed;
	const int _Grade_to_execute;
	const int _Grade_to_sign;
public:
	ShrubberyCreationForm(/* args */);
	ShrubberyCreationForm(std::string);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &ShrubberyCreationForm);
  	ShrubberyCreationForm &operator=(const ShrubberyCreationForm& ShrubberyCreationForm);

	std::string getTarget();
	void beSigned(Bureaucrat &burea);
	void execute(Bureaucrat const & executor) ;
	class GradeNotSigned : public std::exception {
		public:
    	virtual const char* what() const throw();
	};
};
