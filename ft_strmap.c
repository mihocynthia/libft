/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 19:34:21 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/30 20:42:26 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// dereference string
char * ft_strmap(char const *s, char (*f)(char))
{
    char    *cookie;
    int     i;

    if (s == NULL || f == NULL)
        return (NULL);
    cookie = ft_strnew(ft_strlen(s));
    if (cookie == NULL)
        return (NULL);
    ft_strcpy(cookie, s);
    i = 0;
    while (*(cookie + i++))
        *(cookie + i) = f(*(cookie + i));
        //entire of string listed of 
    return(cookie);
}
