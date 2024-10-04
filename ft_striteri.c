/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:33:51 by ktiomico          #+#    #+#             */
/*   Updated: 2024/10/04 14:13:35 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	ft_toupper_char(unsigned int index, char *c)
{
    (void)index;
    if (*c >= 'a' && *c <= 'z')
        *c = *c - 32;
}
#include <stdio.h>
int	main(void)
{
	char	str[] = "HellejsFDJEsjdFJESFJsjdfJAAJSDFsao";

	ft_striteri(str, ft_toupper_char);
	printf("%s\n", str);
	return (0);
}
*/
