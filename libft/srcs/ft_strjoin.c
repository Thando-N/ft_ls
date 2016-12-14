/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 16:46:59 by thandung          #+#    #+#             */
/*   Updated: 2016/12/14 16:47:14 by thandung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	cpt1;
	size_t	cpt2;
	char	*t;

	cpt2 = 0;
	cpt1 = -1;
	t = NULL;
	if (s1 != NULL && s2 != NULL)
	{
		t = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
		if (t != NULL)
		{
			while (s1[++cpt1])
				t[cpt1] = s1[cpt1];
			while (s2[cpt2])
			{
				t[cpt1 + cpt2] = s2[cpt2];
				cpt2++;
			}
		}
	}
	return (t);
}
