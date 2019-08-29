/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 17:02:32 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/28 17:08:11 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Lexicographical comparison between s1 and s2. If the 2 strings are 
* identical the function returns 1, or 0 otherwise.
 */

int     ft_strequ(char const *s1, char const *s2)
{
    int i;
    i = 0;
    ft_strcmp(s1, s2)
    while (s1[i])
    {
        if (s1[i] = s2[i])
        {
            return (1);
        }
        return (0); 
}