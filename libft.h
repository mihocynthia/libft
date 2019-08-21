/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 14:31:36 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/20 17:35:54 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#include <stdio.h>

int		ft_atoi(const char *str);
void    ft_bzero(void *s, size_t n);
void    *ft_memset(void *b, int c, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_atoi(const char *str);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
int		ft_strncpy(char *dest, char *src, unsigned int nl); //test later


void	ft_putnbr(int n);
void	ft_putchar(char c);
int		ft_putchar_fd(char c, int fd);
void	ft_putstr(char const *s);
void	ft_putstr_fd(char const *s, int fd);
void    ft_putendl(char const *s);
void    ft_putendl_fd(char const *s, int fd);
void    ft_strdel(char **as);
void    ft_strclr(char *s);

t_list  *   ft_lstnew(void const *content, size_t content_size);