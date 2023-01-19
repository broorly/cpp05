/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:47:04 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/19 20:43:46 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

int main(void)
{
	try{
		Bureaucrat tst("hamid",1);
		tst.incrementing();
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	Bureaucrat tst("hamid",1);
	std::cout << tst << std::endl;
}