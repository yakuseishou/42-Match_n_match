/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 22:19:35 by kchen2            #+#    #+#             */
/*   Updated: 2019/11/14 00:40:12 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	unsigned int i;

	i = 0;
	if (s1[i] != '\0' && s2[i] == '*')
		return ((match(&s1[i], &s2[i] + 1)) || (match(&s1[i] + 1, &s2[i])));
	if (s1[i] != '\0' && s1[i] == s2[i])
		return (match(&s1[i] + 1, &s2[i] + 1));
	if (s1[i] == '\0' && s2[i] == '*')
		return (match(&s1[i], &s2[i] + 1));
	if (s1[i] == '\0' && s2[i] == '\0')
		return (1);
	return (0);
}

/* test main */

// #include <stdio.h>

// int		main(int ac, char **av)
// {
// 	if (ac == 3)
// 		printf("%d", match(av[1], av[2]));
// 	printf("\n");
// 	return (0);
// }