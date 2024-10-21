/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivangar2 <ivangar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:18:00 by ivangar2          #+#    #+#             */
/*   Updated: 2024/10/21 16:14:24 by ivangar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef GET_NEXT_LINE_H /*evita multiples inclusiones*/
# define GET_NEXT_LINE_H /*define get_next_line_h en caso de no estarlo*/

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdio.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <strings.h>
# include <stdint.h>

char	*get_next_line(int fd);
int		ft_strlen(char *str);
char	*ft_strchr(const char *s, int c);
void    *ft_calloc(size_t count, size_t size);
void    ft_bzero(void *s, size_t n);

# endif
