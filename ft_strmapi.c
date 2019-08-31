/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 20:40:20 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/30 20:46:25 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *memnew;
    int     i;

    if (s == NULL || f == NULL)
        return (NULL);
    memnew = ft_strnew(ft_strlen(s));
    if (memnew == NULL)
        return (NULL);
    ft_strcpy(memnew, s);
    i = 0;
    while (*(memnew + i++))
        *(memnew + i) = f(i, *(memnew + i));
        //entire of string listed of 
    return(memnew);
}