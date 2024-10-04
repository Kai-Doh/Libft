/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:05:04 by ktiomico          #+#    #+#             */
/*   Updated: 2024/10/04 14:20:30 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	i;
	size_t	length;

	if (!s || !f)
		return (NULL);
	length = ft_strlen(s);
	result = malloc(sizeof(char) * length + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
char	ft_toupper_char(unsigned int index, char c)
{
    (void)index;
    if (c >= 'a' && c <= 'z')
        c = c - 32;
    return (c);
}

#include <stdio.h>
int	main(void)
{
	char	*str;
    char	*result;

    str = "Hello";
    result = ft_strmapi(str, ft_toupper_char);
    if (result)
    {
        printf("%s\n", result);
        free(result);
    }
    return (0);
}
*/
