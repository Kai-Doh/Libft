/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:33:47 by ktiomico          #+#    #+#             */
/*   Updated: 2024/10/04 14:39:14 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_trim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1 || !set)
		return (0);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	len = end - start;
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	size_t	start;
	size_t	end;
	size_t	len;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	len = end - start;
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (start < end)
		dest[i++] = s1[start++];
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*s1;
	char	*set;
	char	*str;

	s1 = "Ho Hello Ho";
	set = "Ho ";
	str = ft_strtrim(s1, set);
	printf("%s", str);
}
*/
