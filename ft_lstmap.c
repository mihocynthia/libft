/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 16:37:15 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/31 16:40:58 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list * ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
    t_list  *fresh;

    if (lst)
    {
        fresh = f(lst);
        fresh->next = ft_lstmap(lst->next, f);
        return (fresh);
    }
    return (NULL);
}