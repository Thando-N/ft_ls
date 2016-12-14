/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_to_lst.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 16:46:59 by thandung          #+#    #+#             */
/*   Updated: 2016/12/14 16:47:14 by thandung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_split_to_lst(const char *s, char c)
{
	t_list		*tab;
	size_t		cpt1;
	size_t		cpt2;
	char		*tmp;

	cpt1 = 0;
	cpt2 = 0;
	tmp = NULL;
	tab = NULL;
	while (s != NULL && s[cpt1])
	{
		cpt1 = cpt2;
		while (s[cpt1] && cpt2 < ft_strlen(s) && s[cpt2] != c)
			cpt2++;
		tmp = ft_strsub(s, cpt1, cpt2 - cpt1);
		if (tmp != NULL && (cpt2 - cpt1) > 0)
		{
			if (tab == NULL)
				tab = ft_lstnew(tmp, ft_strlen(tmp) + 1);
			else
				ft_lstpushback(&tab, ft_lstnew(tmp, ft_strlen(tmp) + 1));
		}
		cpt2++;
	}
	return (tab);
}
