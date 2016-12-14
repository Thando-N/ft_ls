/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 16:46:59 by thandung          #+#    #+#             */
/*   Updated: 2016/12/14 16:47:13 by thandung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int						ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*tmp;
	const unsigned char	*tmp_2;

	if (n == 0)
		return (0);
	tmp = s1;
	tmp_2 = s2;
	while (n--)
	{
		if (*tmp != *tmp_2)
			return (*tmp - *tmp_2);
		tmp++;
		tmp_2++;
	}
	return (0);
}
