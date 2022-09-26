/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 09:51:53 by pperol            #+#    #+#             */
/*   Updated: 2022/09/25 23:04:22 by pperol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Trie trois éléments

#include "../push_swap.h"

void	ft_sort_three(t_stack **stk)
{
	t_stack	*tmp;
	int		nbr1;
	int		nbr2;
	int		nbr3;

	tmp = *stk;
	nbr1 = tmp->nbr;
	nbr2 = tmp->next->nbr;
	nbr3 = tmp->next->next->nbr;
	if ((nbr1 > nbr2) && (nbr2 < nbr3) && (nbr3 > nbr1))
		sa(stk);
	else if ((nbr1 > nbr2) && (nbr2 > nbr3) && (nbr3 < nbr1))
	{
		sa(stk);
		rra(stk);
	}
	else if ((nbr1 > nbr2) && (nbr2 < nbr3) && (nbr3 < nbr1))
		ra(stk);
	else if ((nbr1 < nbr2) && (nbr2 > nbr3) && (nbr3 > nbr1))
	{
		sa(stk);
		ra(stk);
	}
	else if ((nbr1 < nbr2) && (nbr2 > nbr3) && (nbr3 < nbr1))
		rra(stk);
}
