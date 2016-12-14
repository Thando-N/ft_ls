/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 16:46:59 by thandung          #+#    #+#             */
/*   Updated: 2016/12/14 16:47:13 by thandung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	const char		*tmp;

	i = 0;
	if (s != NULL)
	{
		tmp = s;
		while (i < n)
		{
			if (ft_memcmp(tmp, &c, 1) == 0)
				return ((void*)tmp);
			i++;
			tmp++;
		}
	}
	return (NULL);
}
