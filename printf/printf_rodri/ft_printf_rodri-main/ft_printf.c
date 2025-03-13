/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 09:43:55 by marvin            #+#    #+#             */
/*   Updated: 2024/12/09 09:43:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	function_management(char type, va_list args)
{
	if (type == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (type == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (type == 'd' || type == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (type == 'u')
		return (ft_putunsigned(va_arg(args, unsigned int)));
	if (type == 'x' || type == 'X')
		return (ft_puthex(va_arg(args, unsigned int), type));
	if (type == 'p')
		return (ft_putptr(va_arg(args, unsigned long int)));
	if (type == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
			count += function_management(str[++i], args);
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
/*
int main(void)
{
    int num = 1234;
    char c = 'A';
    char *str = "42 Madrid";
    unsigned int u = 4294967295;
    void *ptr = &num;
    void *null_ptr = NULL;

    // Pruebas básicas
    ft_printf("1. Hola, mundo!\n");
    ft_printf("2. Caracter: %c\n", c);
    ft_printf("3. Cadena: %s\n", str);
    ft_printf("4. Número decimal (%%d): %d\n", num);
    ft_printf("5. Número entero (%%i): %i\n", -5678);
    ft_printf("6. Número sin signo (%%u): %u\n", u);
    ft_printf("7. Hexadecimal en minúsculas (%%x): %x\n", 255);
    ft_printf("8. Hexadecimal en mayúsculas (%%X): %X\n", 255);
    ft_printf("9. Porcentaje: %%\n");

    // Pruebas para punteros
    ft_printf("10. Puntero válido: %p\n", ptr);
    ft_printf("11. Puntero NULL: %p\n", null_ptr);

    return (0);
}

*/
/*Este codigo último va a imprimir hasta que encuentre un %, por ejemplo
printf("hola que tal %s, y tu?") devolverá solo hola que tal y el numero de
caracteres que ha contado*/
