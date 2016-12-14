/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 16:46:59 by thandung          #+#    #+#             */
/*   Updated: 2016/12/14 16:47:13 by thandung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*tmp_dst;
	char		*tmp_src;

	if (dst && src)
	{
		tmp_dst = (char*)dst;
		tmp_src = (char*)src;
		while (n > 0)
		{
			*tmp_dst = *tmp_src;
			tmp_dst++;
			if (*tmp_src == c)
				return (tmp_dst);
			tmp_src++;
			n--;
		}
	}
	return (NULL);
}
