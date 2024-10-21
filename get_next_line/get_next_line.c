/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivangar2 <ivangar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:15:26 by ivangar2          #+#    #+#             */
/*   Updated: 2024/10/21 14:23:57 by ivangar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "get_next_line.h"

char *get_next_line(int fd)
{

}

int	main()
{
	int	fd;
	fd = open("texto.txt", O_RDONLY);
	printf("%s", get_next_line(fd));
	close(fd);
}