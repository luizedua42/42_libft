/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:06:21 by luizedua          #+#    #+#             */
/*   Updated: 2023/05/16 15:42:05 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	si;
	size_t	ldst;
	size_t	lsrc;

	si = 0;
	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	if (size < ldst)
		return (size + lsrc);
	while (*(src + si) && si + 1 < (size - ldst))
	{
		*(dst + ldst + si) = *(src + si);
		si++;
	}
	*(dst + ldst + si) = '\0';
	return (ldst + lsrc);
}

// int main()
// {
	// int testemine;
	// int testeorig;
	// char a1[10] = "teste";
	// char a2[10] = "teste";
	// char b1[10] = "joao";
	// char b2[10] = "joao";	
	// testemine = ft_strlcat(a1, b1, 7);
	// testeorig = strlcat(a2, b2, 7);
	// printf("minevalue : %d\n", testemine);
	// printf("origvalue : %d\n", testeorig);
	// printf("minedst : %s\n", a1);
	// printf("origdst : %s\n", a2);
// }