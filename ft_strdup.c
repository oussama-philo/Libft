/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:11:34 by olachhab          #+#    #+#             */
/*   Updated: 2024/10/22 17:11:36 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*reserve;
	size_t	len;
	size_t	i;

	len = ft_strlen(src) + 1;
	reserve = (char *)malloc(len);
	if (reserve == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		reserve[i] = src[i];
		i++;
	}
	reserve[i] = '\0';
	return (reserve);
}
