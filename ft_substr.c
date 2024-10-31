/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:32:56 by olachhab          #+#    #+#             */
/*   Updated: 2024/10/22 18:32:59 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub_str;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	if (len > ft_strlen(s + start))
	{
		len = ft_strlen(s + start);
	}
	sub_str = ft_calloc((len + 1), sizeof(char));
	if (!sub_str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub_str[i] = s[start + i];
		i++;
	}
	return (sub_str);
}
