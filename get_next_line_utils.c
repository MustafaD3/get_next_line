/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalkili <mdalkilic344@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 05:06:31 by mdalkili          #+#    #+#             */
/*   Updated: 2024/12/15 05:13:48 by mdalkili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, size * count);
	return (ptr);
}

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*dest;

	dest = b;
	i = 0;
	while (i < len)
	{
		dest[i++] = (unsigned char)c;
	}
	return (b);
}

char	*ft_strchr(const char *s, int c)
{
	size_t	len;
	size_t	i;

	i = 0;
	if (s)
	{
		len = ft_strlen(s);
		while (i <= len)
		{
			if (s[i] == (char)c)
				return ((char *)&s[i]);
			i++;
		}
	}
	return ((char *)0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		x;
	char	*totalstr;

	i = 0;
	x = 0;
	totalstr = malloc(sizeof(char) * ft_strlen(s1) +ft_strlen(s2) + 1);
	if (!totalstr)
		return ((char *)0);
	while (s1[x])
	{
		totalstr[i] = s1[x];
		i++;
		x++;
	}
	x = 0;
	while (s2[x])
	{
		totalstr[i] = s2[x];
		i++;
		x++;
	}
	totalstr[i] = '\0';
	return (totalstr);
}
