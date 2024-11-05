/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <olachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:03:32 by olachhab          #+#    #+#             */
/*   Updated: 2024/11/03 16:02:34 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char	*nptr)
{
	const char			*ptr;
	int					sign;
	int					res;

	ptr = (const char *)nptr;
	res = 0;
	sign = 1;
	while (*ptr == ' ' || (*ptr >= 9 && *ptr <= 13))
	{
		ptr++;
	}
	if (*ptr == '-' || *ptr == '+')
	{
		if (*ptr == '-')
		{
			sign = -1;
		}
		ptr++;
	}
	while (*ptr >= '0' && *ptr <= '9')
	{
		res = res * 10 + (*ptr - '0');
		ptr++;
	}
	return (res * sign);
}
