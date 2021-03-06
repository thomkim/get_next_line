/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 17:29:32 by thomkim           #+#    #+#             */
/*   Updated: 2018/03/08 17:41:01 by thomkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int			i;
	int			j;

	i = 0;
	j = (int)ft_strlen(s1);
	while (*(s2 + i) && i < (int)n)
	{
		*(s1 + j) = *(s2 + i);
		i++;
		j++;
	}
	*(s1 + j) = '\0';
	return (s1);
}
