/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 20:42:43 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/20 10:55:34 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//  char *as
//ft_strdel(&as) // at this address
void    ft_strdel(char **as)
{
    if (as == NULL || *as == NULL)
        return (void)(NULL);
    if(as != NULL && *as != NULL)
        free(*as);
    *as = NULL;
}