/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 16:46:59 by thandung          #+#    #+#             */
/*   Updated: 2016/12/14 16:47:14 by thandung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t			ft_strlen(const char *s)
{
	size_t		cpt;

	cpt = 0;
	if (s)
		while (*s != '\0')
		{
			cpt++;
			s++;
		}
	return (cpt);
}
