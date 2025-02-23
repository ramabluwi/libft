/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralbliwi <ralbliwi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:09:17 by ralbliwi          #+#    #+#             */
/*   Updated: 2024/09/08 19:32:53 by ralbliwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*des;
	const char	*sr;
	size_t		i;

	i = 0;
	des = (char *)dest;
	sr = (char *)src;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		des[i] = sr[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int main ()
{
	char r[] = "rama";
	char d[10];

	printf ("%s",(char *) ft_memcpy(d, r,2));
}*/
