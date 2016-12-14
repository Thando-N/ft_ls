/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 16:47:01 by thandung          #+#    #+#             */
/*   Updated: 2016/12/14 16:47:14 by thandung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	cpt;
	char	*tmp;

	cpt = 0;
	tmp = NULL;
	if (s != NULL && start < ft_strlen(s))
	{
		tmp = (char *)malloc(sizeof(char) * (len + 1));
		if (tmp != NULL)
		{
			while (s[start + cpt] != '\0' && cpt < len)
			{
				tmp[cpt] = s[start + cpt];
				cpt++;
			}
			tmp[cpt] = '\0';
		}
	}
	return (tmp);
}
