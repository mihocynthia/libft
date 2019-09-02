/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 17:09:52 by cyluu             #+#    #+#             */
/*   Updated: 2019/09/01 17:59:12 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *newlk;

	newlk = (t_list *)malloc(sizeof(*newlk));
	if (newlk == NULL)
		return (NULL);
	if (!content || !content_size)
	{
		newlk->content = NULL;
		newlk->content_size = 0;
	}
	else
	{
		newlk->content = malloc(content_size);
		if (!newlk->content)
		{
			free(newlk);
			return (NULL);
		}
		ft_memcpy(newlk->content, content, content_size);
		newlk->content_size = content_size;
	}
	newlk->next = NULL;
	return (newlk);
}
