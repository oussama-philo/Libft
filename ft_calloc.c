/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:03:47 by olachhab          #+#    #+#             */
/*   Updated: 2024/10/22 17:03:51 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_n;

	total_n = size * nmemb;
	ptr = malloc(total_n);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, total_n);
	return (ptr);
}
