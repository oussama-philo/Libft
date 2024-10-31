/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:12:42 by olachhab          #+#    #+#             */
/*   Updated: 2024/10/22 17:12:44 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*to_find == '\0')
	{
		return ((char *)str);
	}
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (to_find[j] != '\0' && (i + j) < len && str[i + j] == to_find[j])
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}
