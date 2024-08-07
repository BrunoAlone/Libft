/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:21:04 by brolivei          #+#    #+#             */
/*   Updated: 2022/11/08 15:05:02 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
/*
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*char_s1;
	unsigned char	*char_s2;

	i = 0;
	*char_s1 = (unsigned char *)s1;
	*char_s2 = (unsigned char *)s2;
	while (i < n)
	{
		if (char_s1[i] != char_s2[i])
			return (char_s1[i] - char_s2[i]);
		i++;
	}
	return (0);
}

int	main()
{
	char	s1[] = "Hola Amigo!";
	char	s2[] = "Hola Amigo!";
	int	result = memcmp(s1, s2, sizeof(s2));
	char    s12[] = "Hola Amigo!";
        char    s22[] = "Hola Amigo!";
        int     result2 = ft_memcmp(s12, s22, sizeof(s22));
	char    s13[] = "Hola Amigo!";
        char    s23[] = "Hola Amigo!";
        int     result3 = ft_memcmp2(s13, s23, sizeof(s23));


	if(result == 0)
		printf("Os primeiros n bytes de caracteres sao iguais");
	if(result > 0)	
		printf("Os primeiros n bytes de caracteres sao maiores em s1");
	if(result < 0)
		printf("Os primeiros n bytes de caracteres sao menores em s1");
	printf("\n%d\n", result);
	if(result2 == 0)
                printf("Os primeiros n bytes de caracteres sao iguais");
        if(result2 > 0)
                printf("Os primeiros n bytes de caracteres sao maiores em s1");
        if(result2 < 0)
                printf("Os primeiros n bytes de caracteres sao menores em s1");
        printf("\n%d\n", result2);
	if(result3 == 0)
                printf("Os primeiros n bytes de caracteres sao iguais");
        if(result3 > 0)
                printf("Os primeiros n bytes de caracteres sao maiores em s1");
        if(result3 < 0)
                printf("Os primeiros n bytes de caracteres sao menores em s1");
        printf("\n%d\n", result3);


}*/
