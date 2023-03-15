/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaporos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:37:38 by lsaporos          #+#    #+#             */
/*   Updated: 2022/10/20 11:13:11 by lsaporos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	*ft_strchr(const char *s, int c)
{
	char	*d;
	char	ic;

	d = (char *) s;
	ic = (char) c;
	while (*d != '\0')
	{
		if (*d == ic)
			return (d);
		d++;
	}
	if (ic == '\0')
		return (d);
	return (NULL);
}*/
char	*ft_strchr(const char *s, int c)
{
    char    *str;
    char    ch;
    int     i;

    str = (char *) s;
    ch = (char) c;
    i = 0;
    while (str[i] == '\0')
    {
        if (str[i] == ch)
            return (str);
        i++;
    }
    if (ch == '\0')
        return (str);
    return (NULL);
}
