/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 11:39:11 by pperol            #+#    #+#             */
/*   Updated: 2022/09/25 19:11:21 by pperol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Vérifie si les arguments sont triés dans un ordre croissant.
// Revoie 'vrai' si c'est le cas, 'faux' dans le cas contraire.

int	ft_check_sorted(char **arg)
{
	int	i;
	int	j;

	i = 1;
	while (arg[i])
	{
		j = i + 1;
		while (arg[j])
		{
			if (ft_atoi(arg[i]) > ft_atoi(arg[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
