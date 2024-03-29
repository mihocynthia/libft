/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 03:13:18 by cyluu             #+#    #+#             */
/*   Updated: 2019/09/03 00:48:45 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Allocates (with malloc(3)) and returns a “fresh” memory area. The memory
**allocated is initialized to 0. If the alloca- tion fails, the function
**returns NULL. Memory of size that needs to be allocated.
*/

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*memword;

	memword = malloc(size);
	if (memword == NULL)
		return (NULL);
	else
		ft_bzero(memword, size);
	return (memword);
}
