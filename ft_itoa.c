/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachhab <olachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:39:18 by olachhab          #+#    #+#             */
/*   Updated: 2024/11/03 15:46:27 by olachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_reverse(char *str, int len)
{
	int		start;
	int		end;
	char	tmp;

	start = 0;
	end = len - 1;
	while (start < end)
	{
		tmp = str[start];
		str[start] = str[end];
		str[end] = tmp;
		end--;
		start++;
	}
}

static int	calcul_len(int n)
{
	int	lent_str;

	lent_str = 0;
	if (n < 0)
	{
		n = -n;
		lent_str++;
	}
	while (n > 0)
	{
		n = n / 10;
		lent_str++;
	}
	return (lent_str);
}

static char	*ft_allocate(int size, int nb)
{
	int		flag_sign;
	int		i;
	char	*str;

	i = 0;
	flag_sign = 0;
	str = (char *)malloc(size * sizeof(char));
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		flag_sign = 1;
		nb = -nb;
	}
	while (nb > 0)
	{
		str[i++] = (nb % 10) + '0';
		nb = nb / 10;
	}
	if (flag_sign)
		str[i++] = '-';
	str[i] = '\0';
	ft_reverse(str, i);
	return (str);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		total_len;

	if (n == 0)
	{
		result = (char *)malloc(2 * sizeof(char));
		if (!result)
			return (NULL);
		result[0] = '0';
		result[1] = '\0';
		return (result);
	}
	if (n == -2147483648)
	{
		result = (char *)malloc(12 * sizeof(char));
		if (!result)
			return (NULL);
		ft_memcpy(result, "-2147483648", 12);
		return (result);
	}
	total_len = calcul_len(n) + 1;
	result = ft_allocate(total_len, n);
	return (result);
}
