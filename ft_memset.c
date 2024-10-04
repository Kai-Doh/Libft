/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 02:17:28 by ktiomico          #+#    #+#             */
/*   Updated: 2024/10/04 16:09:58 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int value, size_t num)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i < num)
	{
		str[i] = value;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
int	main(void)
{
	char	ptr[10];
	ft_memset(ptr, 97, 10);
	printf("%s", ptr);
	return (0);
}
*/
