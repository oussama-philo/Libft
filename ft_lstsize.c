/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:16:59 by olachhab          #+#    #+#             */
/*   Updated: 2024/10/28 21:17:01 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*current_node;

	current_node = lst;
	count = 0;
	while (current_node != NULL)
	{
		count++;
		current_node = current_node->next;
	}
	return (count);
}
