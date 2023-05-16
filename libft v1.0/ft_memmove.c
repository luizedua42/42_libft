/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:02:43 by luizedua          #+#    #+#             */
/*   Updated: 2023/05/05 13:37:02 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// void	*ft_memmove(void *dst, const void *src, size_t len)
// {
// 	size_t i;

// 	if (!dst && !src)
// 		return (0);
// 	i = 0;
// 	if ((size_t)dst - (size_t)src < len)
// 	{
// 		i = len - 1;
// 		while (i < len)
// 		{
// 			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
// 			i--;
// 		}
// 	}
// 	else
// 	{
// 		while (i < len)
// 		{
// 			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
// 			i++;
// 		}
// 	}
// 	return (dst);
// }

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (0);
	i = 0;
	if ((size_t)dest - (size_t)src < n)
	{
		i = n - 1;
		while (i > 0)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i--;
		}
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}
