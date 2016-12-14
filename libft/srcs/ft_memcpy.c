/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 16:46:59 by thandung          #+#    #+#             */
/*   Updated: 2016/12/14 16:47:13 by thandung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void			*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t		i;
	char		*save_ptr;
	const char	*save_ptr_2;

	i = 0;
	save_ptr = s1;
	save_ptr_2 = s2;
	while (i < n)
	{
		*save_ptr = *save_ptr_2;
		save_ptr++;
		save_ptr_2++;
		i++;
	}
	return (s1);
}
