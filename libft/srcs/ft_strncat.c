/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 16:46:59 by thandung          #+#    #+#             */
/*   Updated: 2016/12/14 16:47:14 by thandung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char			*ft_strncat(char *s1, const char *s2, size_t n)
{
	char		*tmp;

	tmp = s1;
	if (!s1 || !s2)
		return (NULL);
	while (*s1)
		s1++;
	while (n > 0 && *s2)
	{
		*s1++ = *s2++;
		n--;
	}
	*s1 = '\0';
	return (tmp);
}
