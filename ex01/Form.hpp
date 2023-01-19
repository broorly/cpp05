#pragma once
#include<string>
#include<iostream>
#include"Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
	const int _Grade_to_execute;
	const int _Grade_to_sign;
	const std::string _Name;
	bool _signed;
public:
	Form();
	Form(int grade_exe ,int grade_sign, std::string name,bool sin);
	~Form();
	Form(const Form &Form);
  	Form &operator=(const Form& Form);
	bool getsigned() const;
	std::string getName()const;
	int get_grade_to_sing()const;
	int get_grade_to_exe()const;

	void beSigned(Bureaucrat burea);

	class GradeTooHighException : public std::exception {
		public:
    	virtual const char* what() const throw() ;
	};
	class GradeTooLowException : public std::exception {
	public:
    	virtual const char* what() const throw() ;
	};
};
std::ostream &operator<<(std::ostream &out, const Form &Form);

