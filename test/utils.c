/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dehamad <dehamad@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:25:45 by dehamad           #+#    #+#             */
/*   Updated: 2023/12/22 01:07:54 by dehamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	ut_whitespace(int len)
{
	while (len--)
		ft_putchar_fd(' ', 1);
}

void	ut_fn_name(const char *fn_name, const char *prototype)
{
	int	dec_len;

	dec_len = ft_strlen(g_decoration);
	ft_putstr_fd("\n\n", 1);
	ut_whitespace(((dec_len - ft_strlen(fn_name)) / 2));
	ft_putstr_fd((char *)fn_name, 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd((char *)g_decoration, 1);
	ft_putchar_fd('\n', 1);
	ut_whitespace(((dec_len - ft_strlen(prototype)) / 2));
	ft_putstr_fd((char *)prototype, 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd((char *)g_decoration, 1);
	ft_putchar_fd('\n', 1);
}

void	ut_test(const char *test)
{
	int	len;

	len = ft_strlen(g_decoration) - (ft_strlen(test) + ft_strlen("Testing "));
	ut_whitespace(len / 2);
	ft_putstr_fd("Testing ", 1);
	ft_putstr_fd((char *)test, 1);
	ft_putstr_fd("\n\n", 1);
}

int	ut_convert(int c)
{
	if (c < 0)
		return (256 + c);
	return (c);
}
