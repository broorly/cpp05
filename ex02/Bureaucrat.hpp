/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:47:01 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/20 13:41:35 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<string>
#include<iostream>
#include"Form.hpp"

class Form;
class Bureaucrat
{
private:
	const std::string _Name ;
	int _Grade;
public:
	Bureaucrat();
	Bureaucrat(std ::string name,int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &Bureaucrat);
  	Bureaucrat &operator=(const Bureaucrat& Bureaucrat);
	void incrementing();
	void decrememting();
	std::string getName() const;
	int getGrade() const;
	class GradeTooHighException : public std::exception {
		public:
    	virtual const char* what() const throw() ;
	};
	class GradeTooLowException : public std::exception {
	public:
    	virtual const char* what() const throw();
	};
	void executeForm(Form const & form);
	void signForm(Form &Form);
	
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &Bureaucrat);
