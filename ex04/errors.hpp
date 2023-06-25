/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:27:24 by mwagner           #+#    #+#             */
/*   Updated: 2023/06/25 17:27:25 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERRORS_HPP
# define ERRORS_HPP

# include <iostream>
#define DEFAULT "\033[0;39m"
#define RED "\033[1;31m"

void	error_args();
void	error_infile(const std::string& filename);
void	error_outfile(const std::string& filename);

#endif