/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 02:44:15 by ktiomico          #+#    #+#             */
/*   Updated: 2024/10/04 16:08:50 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t num)
{
	size_t	i;

	i = 0;
	if (!dest && !src && num > 0)
		return (NULL);
	if (dest != src)
	{
		while (i < num)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char dest[10];
	char *src = "Hello.";

	printf("%s\n", (char *)ft_memcpy(dest, src, 10));
	printf("%s\n", (char *)memcpy(dest, src, 10));
}
*/
