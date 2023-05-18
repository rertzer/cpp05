/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 09:29:46 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/18 16:44:53 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat	gerald = Bureaucrat("Gerald", 6);

		Form	a = Form();
		std::cout << a << "\n\n";

		Form	b = Form("B41", 6, 42);
		std::cout << a << "\n\n";

		Form	c = Form();
		c = b;
		std::cout << c << "\n\n";

		gerald.signForm(b);
		std::cout << b << "\n\n";
		
		gerald.downgrade();

		gerald.signForm(c);
		std::cout << c << "\n\n";
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
