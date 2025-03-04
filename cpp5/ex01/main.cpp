/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:10:29 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/15 11:02:15 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat tom("Tom", 5);
        Bureaucrat jane("Jane", 150);

        std::cout << tom << std::endl;
        std::cout << jane << std::endl;

        Form highForm("High Priority Form", 1, 10);
        Form lowForm("Low Priority Form", 100, 150);

        std::cout << highForm << std::endl;
        std::cout << lowForm << std::endl;

        tom.signForm(highForm);

        jane.signForm(highForm);

        tom.signForm(lowForm);

        jane.signForm(lowForm);

    }
    catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}


