/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 03:05:12 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/29 03:13:18 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns an array of “fresh” strings (all 
* ending with ’\0’, including the array itself) ob- tained by spliting s using 
* the character c as a delimiter. If the allocation fails the function returns 
* NULL. Example : ft_strsplit("*hello*fellow***students*", ’*’) re- turns the 
* array ["hello", "fellow", "students"].
 */
char ** ft_strsplit(char const *s, char c);

int     count_words(const char *s, char c)
{
    int i;
    int word;
    int letter;

    i = 0;
    word = 0;
    letter = 0;

    while (word[i])
    if letter[i] == c;
    if letter[++i] == c;

}