/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:47:53 by olachhab          #+#    #+#             */
/*   Updated: 2024/10/22 16:47:55 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p1;

	i = 0;
	p1 = (unsigned char *)s;
	while (i < n)
	{
		p1[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
