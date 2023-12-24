/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_support.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dehamad <dehamad@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 08:26:51 by dehamad           #+#    #+#             */
/*   Updated: 2023/12/22 05:36:00 by dehamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

char	uts_ft_strmapi(unsigned int i, char c)
{
	if (ft_isalpha(c))
		return ('1');
	else if (ft_isdigit(c))
		return ('2');
	return ('0');
}

void	uts_ft_striteri(unsigned int i, char *c)
{
	if (ft_isalpha(*c) && i % 2 == 0)
		*c = ft_toupper(*c);
	else if (ft_isalpha(*c) && i % 2 == 1)
		*c = ft_tolower(*c);
	else
		*c = '0';
}

void	uts_ft_lstiter(void *content)
{
	char	*str_content;
	int		res;

	str_content = (char *)content;
	while (*str_content)
	{
		printf("%c", ft_toupper(*str_content));
		str_content++;
	}
	printf(" ");
}

void	*uts_ft_lstmap(void *content)
{
	int		i;
	char	s[10];
	char	*res;

	i = *(int *)content;
	if (i % 3 == 0 && i % 5 == 0)
		res = ft_strdup("fuzzbuzz");
	else if (i % 3 == 0)
		res = ft_strdup("fuzz");
	else if (i % 5 == 0)
		res = ft_strdup("buzz");
	else
		res = ft_itoa(i);
	if (res)
		return (res);
	return (NULL);
}
