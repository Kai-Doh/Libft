/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:58:54 by ktiomico          #+#    #+#             */
/*   Updated: 2024/10/04 15:11:01 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;

	while (*lst)
	{
		next = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = next;
	}
	*lst = NULL;
}
/*
#include <stdio.h>
void 		del(void *content)
{
	free(content);
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
	ft_lstclear(&lst, del);
	while (lst)
	{
		printf("%s\n", lst->content);
		lst = lst->next;
	}
}
*/
