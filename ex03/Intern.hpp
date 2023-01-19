#pragma once
#include<string>
#include<iostream>
#include"Bureaucrat.hpp"

class form;
class Intern
{
public:
	Intern();
	~Intern();
	Intern(const Intern &Intern);
  	Intern &operator=(const Intern& Intern);
	Form *makeForm(std::string name,std::string target);
	class NotFround : public std::exception {
	public:
    	virtual const char* what() const throw();
	};
};