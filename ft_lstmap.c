/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:24:47 by ktiomico          #+#    #+#             */
/*   Updated: 2024/10/04 16:17:34 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*tmp;
	void	*content;

	new_list = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		content = f(lst->content);
		tmp = ft_lstnew(content);
		if (!tmp)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, tmp);
		lst = lst->next;
	}
	return (new_list);
}
/*
#include <stdio.h>
void	*add_one(void *content)
{
	int	*number;

	number = (int *)content;
	*number += 1;
	return (number);
}

int	main(void)
{
	t_list	*lst;
    t_list	*lst2;
    t_list	*lst3;
    t_list	*lst4;
    t_list	*new_list;
    int *num1 = malloc(sizeof(int));
    int *num2 = malloc(sizeof(int));
    int *num3 = malloc(sizeof(int));
    int *num4 = malloc(sizeof(int));

    if (!num1 || !num2 || !num3 || !num4)
        return (1);
	*num1 = 1;
    *num2 = 2;
    *num3 = 3;
    *num4 = 4;
    lst = ft_lstnew(num1);
    lst2 = ft_lstnew(num2);
    lst3 = ft_lstnew(num3);
    lst4 = ft_lstnew(num4);
    lst->next = lst2;
    lst2->next = lst3;
    lst3->next = lst4;
    new_list = ft_lstmap(lst, add_one, free);
    while (new_list)
    {
        printf("%d\n", *(int *)new_list->content);
        new_list = new_list->next;
    }
    ft_lstclear(&lst, free);
    ft_lstclear(&new_list, free);
    return (0);
}
*/
