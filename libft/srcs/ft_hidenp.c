/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hidenp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 16:46:59 by thandung          #+#    #+#             */
/*   Updated: 2016/12/14 16:47:13 by thandung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_hidenp(char *hiden, char *str)
{
	int		cpt;
	int		cpt_str;

	cpt = 0;
	cpt_str = 0;
	while (str[cpt_str] != '\0')
	{
		if (str[cpt_str] == hiden[cpt])
			cpt++;
		if (hiden[cpt] == '\0')
			return (1);
		cpt_str++;
	}
	return (0);
}
