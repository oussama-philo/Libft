/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:36:04 by olachhab          #+#    #+#             */
/*   Updated: 2024/10/23 18:36:09 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_chr_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
		{
			return (1);
		}
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_memory;
	size_t	len_ed;
	size_t	index;
	size_t	i;
	char	*final_str;

	if (!s1 || !set)
		return (NULL);
	index = 0;
	len_ed = ft_strlen(s1);
	while (s1[index] && check_chr_set(s1[index], set))
		index++;
	while (len_ed > index && check_chr_set(s1[len_ed - 1], set))
		len_ed--;
	len_memory = len_ed - index;
	final_str = (char *)malloc(len_memory + 1);
	if (!final_str)
		return (NULL);
	i = 0;
	while (i++ < len_memory)
		final_str[i] = s1[i + index];
	final_str[len_memory] = '\0';
	return (final_str);
}
