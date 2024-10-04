/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:47:43 by ktiomico          #+#    #+#             */
/*   Updated: 2024/10/04 16:05:30 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*str = "Hello";
	char	c = 'l';
	size_t	n = 5;

	printf("%s\n", (char*)ft_memchr(str, c, n));
	printf("%s\n", (char*)memchr(str, c, n));
}
*/
