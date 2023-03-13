/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:14:01 by nbiescas          #+#    #+#             */
/*   Updated: 2023/02/22 09:19:28 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	if (!lst)
		return (0);
	i = 1;
	while (lst->next != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

/*
int main()
{
	int i = 3;
	t_list *ptr = ft_lstnew("Hola");
	ptr->next = ft_lstnew("Que fas");
	(ptr->next)->next = ft_lstnew("gEY");
	printf("%d \n", ft_lstsize(ptr));
	return (0);
}*/
