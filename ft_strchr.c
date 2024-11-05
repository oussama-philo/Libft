/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:05:19 by olachhab          #+#    #+#             */
/*   Updated: 2024/10/22 17:05:21 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	target;
	const char		*ptr;

	target = (unsigned char)c;
	ptr = s;
	while (*ptr)
	{
		if (*ptr == target)
		{
			return ((char *)ptr);
		}
		ptr++;
	}
	if (*ptr == target)
	{
		return ((char *)ptr);
	}
	return (NULL);
}
