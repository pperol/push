/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 14:02:52 by pperol            #+#    #+#             */
/*   Updated: 2022/09/25 15:53:13 by pperol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Parcourt une liste chaînee et compte ses éléments (ses nœuds).
// Revoie le nombre de nœuds.

#include "../push_swap.h"

int	ft_count_arg(t_stack **head)
{
	int			i;
	t_stack		*tmp;

	tmp = *head;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
