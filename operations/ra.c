/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 10:40:01 by pperol            #+#    #+#             */
/*   Updated: 2022/09/25 21:10:52 by pperol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Décale d’une position vers le haut tous les élements de la pile a.
// Le premier élément devient le dernier. 
// imprime ra\n sur la sortie standard.
// Exit dans le cas contraire.

#include "../push_swap.h"

void	ra(t_stack **stk_a)
{
	ft_rotate(stk_a);
	write(1, "ra\n", 3);
}
