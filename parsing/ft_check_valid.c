/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 11:45:53 by pperol            #+#    #+#             */
/*   Updated: 2022/09/25 19:13:11 by pperol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Parcourt un tableau d'arguments, vérifie si ce sont des entiers,
// s'il n'y a pas de doublons et si ces entiers ne sont pas encore
// classés dans un ordre croissant.
// Revoie 'vrai' si c'est le cas, 'faux' dans le cas contraire et
// affiche alors "Error" suivi d’un ’\n’ sur la sortie d’erreur.
// N'affiche rien si les arguments sont déjà classés.

int	ft_check_valid(char **arg)
{
	int	i;

	i = 1;
	while (arg[i])
	{
		if (ft_is_valid_number(arg[i]) == 0)
		{
			write(2, "Error\n", 6);
			return (0);
		}
		if (ft_atoi(arg[i]) == 0 && arg[i][0] != '0')
		{
			write(2, "Error\n", 6);
			return (0);
		}
		if (ft_atoi(arg[i]) > 2147483647 || ft_atoi(arg[i]) < -2147483648)
		{
			write(2, "Error\n", 6);
			return (0);
		}
		i++;
	}
	if (ft_check_double(arg) == 1 || ft_check_sorted(arg) == 1)
		return (0);
	return (1);
}
