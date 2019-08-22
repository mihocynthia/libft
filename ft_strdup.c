/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 22:38:28 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/21 20:11:36 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_strdup(const char *s1)
{
    int i;
    int len;
    char *str;

    i = 0;
    len = ft_strlen(s1);
    str = (char*)malloc((len + 1) * sizeof(char));
    if(str == NULL)
        return NULL;
    str[len] = '\0';
    while(i < len)
    {
        str[i] = s1[i];
        i++;
    }
    return (str);
}
