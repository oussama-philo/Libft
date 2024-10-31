/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:12:56 by olachhab          #+#    #+#             */
/*   Updated: 2024/10/22 17:12:59 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	target;
	const char		*last_occurrence;

	last_occurrence = NULL;
	target = (unsigned char)c;
	while (*s)
	{
		if (*s == target)
		{
			last_occurrence = s;
		}
		s++;
	}
	if (target == '\0')
	{
		return (s);
	}
	return (last_occurrence);
}
