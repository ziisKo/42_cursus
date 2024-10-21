/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivangar2 <ivangar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:34:41 by ivangar2          #+#    #+#             */
/*   Updated: 2024/09/24 17:36:05 by ivangar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned int	i;
	char			*s;

	i = 0;
	s = (char *)str;
	while (i < n)
	{
		if (s[i] == (char)c)
			return (&s[i]);
		i ++;
	}
	return (NULL);
}
