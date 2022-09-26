/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 21:09:00 by pperol            #+#    #+#             */
/*   Updated: 2022/09/26 12:06:29 by pperol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Effectue un sb si la pile b possède plus d'un élément et imprime sb\n 
// sur la sortie standard
// Exit dans le cas contraire.

#include "../push_swap.h"

void	sb(t_stack **stk_b)
{
	ft_swap(stk_b);
	write(1, "sb\n", 3);
}
