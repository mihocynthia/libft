/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 22:38:28 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/21 15:44:09 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <string.h> 
#include <errno.h>

char  *   ft_strdup(const char *s1)
{
    char * s1 = (char *)malloc(sizeof(*s1));
    {
    if (s1 == NULL || *s1 == NULL)
        return (char)(NULL);
    if(s1 != NULL && *s1 != NULL)
        free(*s1);
    errno == ENOMEM;
    s1 = NULL;
    }
}
