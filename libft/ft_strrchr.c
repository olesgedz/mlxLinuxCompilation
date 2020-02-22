/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <rfork@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:50:29 by rfork             #+#    #+#             */
/*   Updated: 2019/09/18 16:06:13 by rfork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int j;
	int f;

	i = 0;
	j = 0;
	f = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			j = i;
			f = 1;
		}
		i++;
	}
	if (s[i] == c)
	{
		j = i;
		f = 1;
	}
	if (f == 1)
		return ((char*)(s + j));
	return (NULL);
}