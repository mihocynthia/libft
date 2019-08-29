/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 02:41:13 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/29 16:01:52 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))

/*
**Applies the function f to each character of the string passed as argument,
**and passing its index as first argument. Each character is passed by
**address to f to be modified if necessary.
*/

{
	int		i;

	i = 0;
	if (!s && !f)
		return ;
	while (s[i])
		f(s++, i++);
}
