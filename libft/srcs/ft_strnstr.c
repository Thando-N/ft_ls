/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 16:46:59 by thandung          #+#    #+#             */
/*   Updated: 2016/12/14 16:47:14 by thandung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char			*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	const char	*save_ptr;
	const char	*save_ptr_2;
	size_t		i;
	size_t		j;

	i = 0;
	if (*s2 == '\0')
		return ((char*)s1);
	save_ptr_2 = s2;
	while ((*s1) && (i < n))
	{
		j = i++;
		save_ptr = s1;
		while (((*save_ptr == *save_ptr_2) || (*save_ptr_2 == '\0'))
					&& (j <= n))
		{
			if (*save_ptr_2++ == '\0')
				return ((char*)s1);
			save_ptr++;
			j++;
		}
		save_ptr_2 = s2;
		s1++;
	}
	return (NULL);
}
