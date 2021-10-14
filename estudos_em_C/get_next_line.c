/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roweber <roweber@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:15:24 by roweber           #+#    #+#             */
/*   Updated: 2021/10/11 20:21:04 by roweber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>


int	main(void)
{
	int			file = open("teste.txt");
	int			result;
	char		*buffer;
	static char	*holder;

	result = 1;
	buffer = (char *) malloc(BUFFER_SIZE * 1);
	while (result)
	{
		result = read(file, buffer, BUFFER_SIZE);
		if (!holder)
			holder
	}
}
