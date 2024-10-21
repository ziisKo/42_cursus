/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivangar2 <ivangar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 10:58:45 by ivangar2          #+#    #+#             */
/*   Updated: 2024/09/24 17:34:12 by ivangar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		len_of_dest;
	size_t		len_of_src;

	len_of_dest = ft_strlen(dst);
	len_of_src = ft_strlen(src);
	i = 0;
	if (len_of_dest >= size)
		return (len_of_src + size);
	while (src[i] != '\0' && (len_of_dest + i) < (size - 1))
	{
		dst[len_of_dest + i] = src[i];
		i++;
	}
	dst[len_of_dest + i] = '\0';
	return (len_of_dest + len_of_src);
}
