/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 09:24:55 by nbiescas          #+#    #+#             */
/*   Updated: 2023/02/24 18:53:01 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (lst)
	{
		if (!(*lst))
			*lst = new;
		else
		{
			temp = ft_lstlast(*lst);
			temp->next = new;
		}
	}
}
/*
int main()
{
	t_list **lst;

	*lst = NULL;
	ft_lstadd_back(lst, ft_lstnew("Hey"));
	printf("%d \n", ft_lstsize(*lst));
	return (0);
}*/
