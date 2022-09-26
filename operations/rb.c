/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 10:43:22 by pperol            #+#    #+#             */
/*   Updated: 2022/09/26 12:03:06 by pperol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Décale d’une position vers le haut tous les élements de la pile b.
// Le premier élément devient le dernier. 
// imprime rb\n sur la sortie standard.
// Exit dans le cas contraire.

#include "../push_swap.h"

void	rb(t_stack **stk_b)
{
	ft_rotate(stk_b);
	write(1, "rb\n", 3);
}
