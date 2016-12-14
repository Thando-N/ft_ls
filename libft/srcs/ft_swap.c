/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 16:47:01 by thandung          #+#    #+#             */
/*   Updated: 2016/12/14 16:47:15 by thandung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void		ft_swap(char **s1, char **s2)
{
	char		*tmp;

	if (*s1 != NULL && *s2 != NULL)
	{
		tmp = *s1;
		*s1 = *s2;
		*s2 = tmp;
	}
}
