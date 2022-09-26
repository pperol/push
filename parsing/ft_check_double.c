/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_double.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 11:28:02 by pperol            #+#    #+#             */
/*   Updated: 2022/09/25 19:13:26 by pperol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Parcourt un tableau d'arguments et vérifie la présence de doublons;
// Renvoie 'vrai' s'il en trouve. 'faux' dans le cas contraire
// et affiche alors "Error" suivi d’un ’\n’ sur la sortie d’erreur.

int	ft_check_double(char **arg)
{
	int	i;
	int	j;

	i = 1;
	while (arg[i])
	{
		j = i + 1;
		while (arg[j])
		{
			if (ft_atoi(arg[i]) == ft_atoi(arg[j]))
			{
				write(2, "Error\n", 6);
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}
