/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:16:23 by luizedua          #+#    #+#             */
/*   Updated: 2023/05/05 13:38:27 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	char	*lastc;

	lastc = NULL;
	if (c == '\0')
	{
		return ((char *)&s[ft_strlen(s)]);
	}	
	while (*s != '\0' )
	{
		if ((char)c == *s)
			lastc = (char *)s;
		if (*(s + 1) == '\0')
			return (lastc);
		s++;
	}
	return (0);
}
