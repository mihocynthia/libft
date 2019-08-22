/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_Istnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 17:09:52 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/22 16:21:02 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *   ft_lstnew(void const *content, size_t content_size)
{
    t_list *newlk;

    *newlk = (t_list *)malloc(content_size(*newlk));

    if (t_list (*newlk) == NULL)
        free(*newlk);  
    if (!content || !content_size)
        return (NULL);
    if (content == '\0')
        return (*newlk);
    if (content_size == 0)
        return (*newlk);
    else
    {
        return(*newlk);
    }
}
