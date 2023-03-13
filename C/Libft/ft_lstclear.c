/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 10:32:20 by nbiescas          #+#    #+#             */
/*   Updated: 2023/03/08 09:52:49 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;

	ptr = NULL;
	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		ptr = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(ptr, del);
	}
}
