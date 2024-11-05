/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <olachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:11:34 by olachhab          #+#    #+#             */
/*   Updated: 2024/11/05 17:24:34 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char		*reserve;
	size_t		len;
	size_t		i;

	len = ft_strlen(src);
	reserve = (char *)malloc((len + 1) * sizeof(char));
	if (reserve == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		reserve[i] = src[i];
		i++;
	}
	reserve[len] = '\0';
	return (reserve);
}
