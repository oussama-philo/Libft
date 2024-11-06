/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <olachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:39:02 by olachhab          #+#    #+#             */
/*   Updated: 2024/11/06 10:58:02 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	int		i;
	char	*ptr;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s) + 1;
	ptr = malloc(len * sizeof(char));
	if (!ptr)
	{
		return (NULL);
	}
	i = 0;
	while (i < len - 1)
	{
		ptr[i] = (*f)(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
