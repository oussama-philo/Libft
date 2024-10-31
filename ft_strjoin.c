/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:36:29 by olachhab          #+#    #+#             */
/*   Updated: 2024/10/23 18:36:32 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t len;
	size_t total_len;
	char *str_total;

	if (!s1 && !s2)
	{
		return (NULL);
	}
	if (!s1)
	{
		return (ft_strdup(s2));
	}
	if (!s2)
	{
		return (ft_strdup(s1));
	}
	total_len = ft_strlen(s1) + ft_strlen(s2);
	str_total = ft_calloc((total_len + 1), sizeof(char));
	if (!str_total)
	{
		return (NULL);
	}
	ft_memcpy(str_total, s1, ft_strlen(s1));
	ft_memcpy(str_total + ft_strlen(s1), s2, ft_strlen(s2));
	return (str_total);
}
