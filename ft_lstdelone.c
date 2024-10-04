/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:41:47 by ktiomico          #+#    #+#             */
/*   Updated: 2024/10/04 15:01:47 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst)
		del(lst->content);
	free(lst);
}
/*
#include <stdio.h>
int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew("Hello");
	printf("%s\n", lst->content);
	ft_lstdelone(lst, free);
	printf("%s\n", lst->content);
}
*/
