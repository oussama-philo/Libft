/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <olachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:11:34 by olachhab          #+#    #+#             */
/*   Updated: 2024/11/02 19:58:13 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*reserve;
	int		len;

	len = ft_strlen(src);
	reserve = (char *)ft_calloc(len + 1, sizeof(char));
	if (reserve == NULL)
		return (NULL);
	ft_memcpy(reserve, src, len);
	return (reserve);
}
