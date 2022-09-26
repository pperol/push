/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 09:28:25 by pperol            #+#    #+#             */
/*   Updated: 2022/09/26 13:55:47 by pperol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

/*
** STACKS ****************
*/
typedef struct s_stack
{
	int				nbr;
	int				rank;
	int				index;
	int				size;
	struct s_stack	*next;
}	t_stack;	

/*
** PARSING ****************
*/
int			ft_check_double(char **arg);
int			ft_check_sorted(char **arg);
int			ft_check_valid(char **arg);

/*
** LOADING ****************
*/
int			ft_count_arg(t_stack **head);
t_stack		*ft_fill_stack(char **arg, int argc);
void		ft_give_index(t_stack *stk, int argc);
void		ft_free_stack(t_stack **stk);

/*
** OPERATIONS ****************
*/
int			ft_swap(t_stack **stk);
int			ft_push(t_stack **stk_start, t_stack **stk_end);
int			ft_rotate(t_stack **stk);
int			ft_reverse_rotate(t_stack **stk);
void		sa(t_stack **stk_a);
void		sb(t_stack **stk_b);
void		pa(t_stack **stk_a, t_stack **stk_b);
void		pb(t_stack **stk_a, t_stack **stk_b);
void		ra(t_stack **stk_a);
void		rb(t_stack **stk_b);
void		rra(t_stack **stk_a);
void		rrb(t_stack **stk_b);

/*
** SORTING ****************
*/
int			ft_smallest_nbr(t_stack **stk);
int			ft_largest_nbr(t_stack **stk);
void		ft_sort_two(t_stack **stk);
void		ft_sort_three(t_stack **stk);
void		ft_sort_four(t_stack **stk_a, t_stack **stk_b);
void		ft_sort_five(t_stack **stk_a, t_stack **stk_b);
int			ft_get_bytes(t_stack **stk);
void		ft_radix_sort(t_stack **stk_a, t_stack **stk_b);
void		ft_sort_stack(t_stack **stk_a, t_stack **stk_b);

/*
** LIBFT ****************
*/
long		ft_atoi(const char *str);
int			ft_is_valid_number(char *str);

#endif
