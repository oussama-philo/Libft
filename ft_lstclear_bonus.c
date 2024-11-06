/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <olachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:43:37 by olachhab          #+#    #+#             */
/*   Updated: 2024/11/06 09:42:41 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp_node;
	t_list	*next_node;

	if (!lst || !del)
	{
		return ;
	}
	tmp_node = *lst;
	while (tmp_node)
	{
		next_node = tmp_node->next;
		del(tmp_node->content);
		free(tmp_node);
		tmp_node = next_node;
	}
	*lst = NULL;
}
