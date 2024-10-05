/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:21:43 by ktiomico          #+#    #+#             */
/*   Updated: 2024/10/04 15:00:24 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		(f)(lst->content);
		lst = lst->next;
	}
}
/*
#include <stdio.h>
void	ft_printf(void *content)
{
	printf("%s\n", (char *)content);
}
int	main(void)
{
	t_list	*lst;
	t_list	*lst2;
	t_list	*lst3;
	t_list	*lst4;

	lst = ft_lstnew("Hello");
	lst2 = ft_lstnew("World");
	lst3 = ft_lstnew("!");
	lst4 = ft_lstnew("Bruh");
	lst->next = lst2;
	lst2->next = lst3;
	lst3->next = lst4;
	ft_lstiter(lst, ft_printf);
}
*/
