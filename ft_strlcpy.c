/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:12:06 by olachhab          #+#    #+#             */
/*   Updated: 2024/10/22 17:12:11 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	total_len;
	size_t	index;

	total_len = ft_strlen(src);
	if (!dst || !src)
	{
		return (total_len);
	}
	index = 0;
	if (size > 0)
	{
		while (index < size - 1 && src[index] != '\0')
		{
			dst[index] = src[index];
			index++;
		}
		dst[index] = '\0';
	}
	return (total_len);
}
