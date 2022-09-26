/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 09:19:24 by pperol            #+#    #+#             */
/*   Updated: 2022/09/26 11:17:29 by pperol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Trie par ordre croissants les nombres donnés en arguments dans une  pile 'a' 
// à l'aide de la pile 'b' et des opŕations swap, push et reverse.

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc < 2)
		return (-1);
	if (argc == 2 && argv[1][0] == '\0')
	{
		write(2, "Error\n", 6);
		return (-1);
	}
	if (ft_check_valid(argv) == 0)
		return (0);
	stack_b = NULL;
	stack_a = ft_fill_stack(argv, argc);
	ft_give_index(stack_a, argc);
	ft_sort_stack(&stack_a, &stack_b);
	ft_free_stack(&stack_a);
	ft_free_stack(&stack_b);
	return (0);
}
