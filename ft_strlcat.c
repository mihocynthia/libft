/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 23:12:40 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/27 23:57:22 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*appends string src to the end of dst.  It will append at most
* dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
* dstsize is 0 or the original dst string was longer than dstsize (in practice
* this should not happen as it means that either dstsize is incorrect or that
* dst is not a proper string).
 */

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
{
    int i;
    i = -1;
    unsigned char *src_ret;
    unsigned char *dst_ret;
    int dst_len;

    src_ret = (unsigned char *)src;
    dst_ret = (unsigned char *)dst;
    dst_len = ft_strlen(dst);

    while (src_ret[i] != '\0')
    {
        i++;
    } 
    while (dst_ret[j] != '\0')
    {
        dst_ret[i++] = src_ret[j++];
    }
    dst_len[i] = src_ret[j];   
    //return((char)&dst[i])
    return (NULL);
}
