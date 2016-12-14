/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 16:46:59 by thandung          #+#    #+#             */
/*   Updated: 2016/12/14 16:47:14 by thandung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		cpt;
	char	*new;

	cpt = 0;
	new = NULL;
	if (s != NULL && f != NULL)
	{
		new = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (new != NULL)
		{
			while (s[cpt])
			{
				new[cpt] = f(cpt, s[cpt]);
				cpt++;
			}
			new[cpt] = '\0';
		}
	}
	return (new);
}
