/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaporos <lsaporos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:13:10 by lsaporos          #+#    #+#             */
/*   Updated: 2022/12/19 17:50:30 by lsaporos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (str == 0)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (str[i])
	{
		if (str[i] == c)
			return (str);
		i++;
	}
	if (c == '\0')
		return (str);
	return (0);
}

char	*ft_strdup(const char *str)
{
	size_t	i;
	char	*strdup;

	i = 0;
	strdup = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!strdup)
		return (NULL);
	while (str[i] != '\0')
	{
		strdup[i] = str[i];
		i++;
	}
	strdup[i] = '\0';
	return (strdup);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concat_str;
	size_t	i;
	size_t	j;

	concat_str = (char *)malloc(sizeof(char)
			* (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!concat_str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		concat_str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		concat_str[i + j] = s2[j];
		j++;
	}
	concat_str[i + j] = '\0';
	return (concat_str);
}
