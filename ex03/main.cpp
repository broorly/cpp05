/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:47:04 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/24 18:05:44 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Form.hpp"
#include"Bureaucrat.hpp"
#include"PresidentialPardonForm.hpp"
#include"ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"Intern.hpp"

int main(void)
{
	try{
		Intern tst;
		Form* form;
		form = tst.makeForm("PresidentialPardonForm ","hamid");
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
