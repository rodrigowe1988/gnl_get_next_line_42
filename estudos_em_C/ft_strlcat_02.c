/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_02.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roweber <roweber@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:21:12 by roweber           #+#    #+#             */
/*   Updated: 2021/10/14 17:21:40 by roweber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * this is a new way to concat strings in C language
*/

#include <stdio.h>
#include <stdlib.h>

void	concatStrings(char s1[], int t1, char s2[], int t2, char s3[]);

int	main(void)
{
	char	word1[] = "Rodrigo ";
	char	word2[] = "Weber";
    char    word3[13];

    concatStrings(word1, 8, word2,5, word3);

	printf("%s\n", word3);

	return (0);
}

void	concatStrings(char s1[], int t1, char s2[], int t2, char s3[])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < t1)
	{
		s3[i] = s1[i];
		i++;
	}
	while (j < t2)
	{
		s3[t1 + j] = s2[j];
		j++;
	}
}
