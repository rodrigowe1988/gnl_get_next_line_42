/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_strlcpy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roweber <roweber@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 12:35:33 by roweber           #+#    #+#             */
/*   Updated: 2021/09/30 12:37:54 by roweber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char src[10] = "source";
	char dest[15] = "destination";
	printf("%d", strlcpy(dest, src, 4));
	return (0);
}
