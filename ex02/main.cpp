/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:47:04 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/24 18:03:16 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Form.hpp"
#include"Bureaucrat.hpp"
#include"PresidentialPardonForm.hpp"
#include"ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"

int main(void)
{
	try{
		PresidentialPardonForm President("Presidential");
		ShrubberyCreationForm Shrubbery("Shrubbery");
		RobotomyRequestForm Robotomy("Robotomy");
		Bureaucrat Bureaucrat("BROOLY",1);
		President.beSigned(Bureaucrat);
		President.execute(Bureaucrat);
		Robotomy.beSigned(Bureaucrat);
		Robotomy.execute(Bureaucrat);
		Shrubbery.beSigned(Bureaucrat);
		Shrubbery.execute(Bureaucrat); 
	}
	catch(std::exception & e)
	{
		std::cout << e.what() <<std::endl;
	}
}
