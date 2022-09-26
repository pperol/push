/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 21:13:31 by pperol            #+#    #+#             */
/*   Updated: 2022/09/25 22:36:46 by pperol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Prend le premier élément au sommet de b et le met sur a et imprime pa\n 
// sur la sortie standard.
// Ne fait rien si b est vide.

#include "../push_swap.h"

void	pa(t_stack **stk_a, t_stack **stk_b)
{
	ft_push(stk_b, stk_a);
	write(1, "pa\n", 3);
}
