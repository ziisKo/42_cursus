/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivangar2 <ivangar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:15:16 by ivangar2          #+#    #+#             */
/*   Updated: 2024/09/24 17:35:07 by ivangar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*last_occurrence;

	last_occurrence = NULL;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			last_occurrence = (char *)&str[i];
		i ++;
	}
	if ((char)c == '\0')
		return ((char *)&str[i]);
	return (last_occurrence);
}
