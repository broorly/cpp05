/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:47:04 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/19 17:45:28 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Form.hpp"
#include"Bureaucrat.hpp"

int main(void)
{
	try{
		Form tst(1,1,"hamid",false);
		Bureaucrat yo("BROOLY",50);
		std::cout<<tst<<std::endl;
		tst.beSigned(yo);
		yo.signForm(tst);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() <<std::endl;
	}
}