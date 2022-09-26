/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 20:49:09 by pperol            #+#    #+#             */
/*   Updated: 2022/09/25 21:00:36 by pperol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Effectue un sa si la pile a possède plus d'un élément et imprime sa\n 
// sur la sortie standard
// Exit dans le cas contraire.

#include "../push_swap.h"

void	sa(t_stack **stk_a)
{
	ft_swap(stk_a);
	write(1, "sa\n", 3);
}
