/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 21:20:06 by pperol            #+#    #+#             */
/*   Updated: 2022/09/25 22:37:06 by pperol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Prend le premier élément au sommet de a et le met sur b et imprime pb\n 
// sur la sortie standard.
// Ne fait rien si a est vide.

#include "../push_swap.h"

void	pb(t_stack **stk_a, t_stack **stk_b)
{
	ft_push(stk_a, stk_b);
	write(1, "pb\n", 3);
}
