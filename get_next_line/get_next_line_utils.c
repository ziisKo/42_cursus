/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivangar2 <ivangar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:24:02 by ivangar2          #+#    #+#             */
/*   Updated: 2024/10/21 16:12:22 by ivangar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "get_next_line.h"

int	ft_strlen(char  *str)
{
    int	i;
    i = 0;

	while (str[i] != '\0')
	{
		i ++;
	}
	
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;
	i = 0;
	
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;
	
	str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	free(s1); // Liberamos s1 cuando ya no lo necesitamos !!!OJO!!!
	return (str);
}

void	*ft_calloc(size_t count, size_t size)
{
	void *ptr;
	size_t i;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < count * size)
		((unsigned char *)ptr)[i++] = 0; // Se utiliza para inicializar los bytes a 0
	return (ptr);
}

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	
	i = 0;
	while (i < n)
		((unsigned char *)s)[i++] = 0; // Se utiliza para inicializar los bytes a 0
}
