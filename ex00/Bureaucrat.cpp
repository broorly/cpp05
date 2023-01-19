/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:46:59 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/19 20:41:19 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout<<"default constructor called"<<std::endl;
}

Bureaucrat::Bureaucrat(const std :: string name,int grade) : _Name(name)
{
	std::cout<<"constructor with parametre  called"<<std::endl;
    if (grade > 150)
    {
		throw GradeTooLowException();
	}
	else if(grade < 1)
	{
		throw GradeTooHighException();
	}
	else
	{
		this->_Grade = grade;
    }
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat default destructor called" << std::endl;
}

Bureaucrat :: Bureaucrat(const Bureaucrat &Bureaucrat)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = Bureaucrat;
}

Bureaucrat &Bureaucrat ::operator=(const Bureaucrat& Bureaucrat)
{
	this->_Grade = Bureaucrat._Grade;
	return(*this);
}

void Bureaucrat :: decrememting()
{
	if (this->_Grade >= 150)
    {
		throw GradeTooLowException();
	}
	else
		this->_Grade++;
}

void Bureaucrat :: incrementing()
{
	if (this->_Grade <= 1)
    {
		throw GradeTooHighException();
	}
	else
		this->_Grade--;
}

std::string Bureaucrat :: getName() const{
	return(this->_Name);
}

int Bureaucrat :: getGrade() const{
	return(this->_Grade);
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &Bureaucrat) {
  out << Bureaucrat.getName() << " bureaucrat grade" << Bureaucrat.getGrade();
  return out;
}
const char* Bureaucrat ::GradeTooLowException :: what() const throw() {
        	return "Grade Too Low Exception";
   	 }
const char* Bureaucrat ::GradeTooHighException :: what() const throw() {
       	return "Grade Too High Exception";
   	}