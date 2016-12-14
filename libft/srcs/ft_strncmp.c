/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 16:46:59 by thandung          #+#    #+#             */
/*   Updated: 2016/12/14 16:47:14 by thandung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int							ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char		*tmp_s1;
	const unsigned char		*tmp_s2;

	if (n == 0)
		return (0);
	tmp_s1 = (const unsigned char*)s1;
	tmp_s2 = (const unsigned char*)s2;
	while (*tmp_s1 != '\0' && n > 1 && *tmp_s1 == *tmp_s2)
	{
		tmp_s1++;
		tmp_s2++;
		n--;
	}
	return (*tmp_s1 - *tmp_s2);
}
