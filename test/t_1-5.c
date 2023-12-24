/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_1-5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dehamad <dehamad@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:05:22 by dehamad           #+#    #+#             */
/*   Updated: 2023/12/20 18:48:47 by dehamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "test.h"

void	test_ft_isalpha(void)
{
	const int	pass_arr[] = {65, 70, 82, 90, 97, 80, 90, 122};
	const int	fail_arr[] = {-1, 0, 64, 91, 96, 123, 128};

	ut_fn_name("ft_isalpha", "int ft_isalpha(int c)");
	{
		size_t	len = sizeof(pass_arr) / sizeof(pass_arr[0]);
		size_t	i = 0;
		ut_test("pass_arr[] = {65, 70, 82, 90, 97, 80, 90, 122}");
		while (i < len)
		{
			int	c = pass_arr[i];
			printf("ft_isalpha(%d/%c) = %d\n", c, c, ft_isalpha(c));
			printf("   isalpha(%d/%c) = %d\n\n", c, c, isalpha(c));
			i++;
		}
	}
	{
		size_t	len = sizeof(fail_arr) / sizeof(fail_arr[0]);
		size_t	i = 0;
		ut_test("fail_arr[] = {-1, 0, 64, 91, 96, 123, 128}");
		while (i < len)
		{
			int c = fail_arr[i];
			printf("ft_isalpha(%d/%c) = %d\n", c, c, ft_isalpha(c));
			printf("   isalpha(%d/%c) = %d\n\n", c, c, isalpha(c));
			i++;
		}
	}
}

void	test_ft_isdigit(void)
{
	const int	pass_arr[] = {48, 50, 51, 55, 57};
	const int	fail_arr[] = {-1, 0, 47, 58, 128};

	ut_fn_name("ft_isdigit", "int ft_isdigit(int c)");
	{
		size_t	len = sizeof(pass_arr) / sizeof(pass_arr[0]);
		size_t	i = 0;
		ut_test("pass_arr[] = {48, 50, 51, 55, 57}");
		while (i < len)
		{
			int	c = pass_arr[i];
			printf("ft_isdigit(%d/%c) = %d\n", c, c, ft_isdigit(c));
			printf("   isdigit(%d/%c) = %d\n\n", c, c, isdigit(c));
			i++;
		}
	}
	{
		size_t	len = sizeof(fail_arr) / sizeof(fail_arr[0]);
		size_t	i = 0;
		ut_test("fail_arr[] = {-1, 0, 47, 58, 128}");
		while (i < len)
		{
			int c = fail_arr[i];
			printf("ft_isdigit(%d/%c) = %d\n", c, c, ft_isdigit(c));
			printf("   isdigit(%d/%c) = %d\n\n", c, c, isdigit(c));
			i++;
		}
	}
}

void	test_ft_isalnum(void)
{
	const int	pass_arr[] = {48, 50, 51, 55, 57, 65, 70, 82, 90, 97, 80, 90, 122};
	const int	fail_arr[] = {-1, 0, 47, 58, 64, 91, 96, 123, 128};

	ut_fn_name("ft_isalnum", "int ft_isalnum(int c)");
	{
		size_t	len = sizeof(pass_arr) / sizeof(pass_arr[0]);
		size_t	i = 0;
		ut_test("pass_arr[] = {48, 50, 51, 55, 57, 65, 70, 82, 90, 97, 80, 90, 122}");
		while (i < len)
		{
			int	c = pass_arr[i];
			printf("ft_isalnum(%d/%c) = %d\n", c, c, ft_isalnum(c));
			printf("   isalnum(%d/%c) = %d\n\n", c, c, isalnum(c));
			i++;
		}
	}
	{
		size_t	len = sizeof(fail_arr) / sizeof(fail_arr[0]);
		size_t	i = 0;
		ut_test("fail_arr[] = {-1, 0, 47, 58, 64, 91, 96, 123, 128}");
		while (i < len)
		{
			int c = fail_arr[i];
			printf("ft_isalnum(%d/%c) = %d\n", c, c, ft_isalnum(c));
			printf("   isalnum(%d/%c) = %d\n\n", c, c, isalnum(c));
			i++;
		}
	}
}

void	test_ft_isascii(void)
{
	const int	pass_arr[] = {0, 3, 50, 80, 126};
	const int	fail_arr[] = {-1, 128};

	ut_fn_name("ft_isascii", "int ft_isascii(int c)");
	{
		size_t	len = sizeof(pass_arr) / sizeof(pass_arr[0]);
		size_t	i = 0;
		ut_test("pass_arr[] = {0, 3, 50, 80, 126}");
		while (i < len)
		{
			int	c = pass_arr[i];
			printf("ft_isascii(%d/%c) = %d\n", c, c, ft_isascii(c));
			printf("   isascii(%d/%c) = %d\n\n", c, c, isascii(c));
			i++;
		}
	}
	{
		size_t	len = sizeof(fail_arr) / sizeof(fail_arr[0]);
		size_t	i = 0;
		ut_test("fail_arr[] = {-1, 128}");
		while (i < len)
		{
			int c = fail_arr[i];
			printf("ft_isascii(%d/%c) = %d\n", c, c, ft_isascii(c));
			printf("   isascii(%d/%c) = %d\n\n", c, c, isascii(c));
			i++;
		}
	}
}

void	test_ft_isprint(void)
{
	const int	pass_arr[] = {32, 77, 99, 126};
	const int	fail_arr[] = {-1, 0, 5, 29, 30, 31, 128};

	ut_fn_name("ft_isprint", "int ft_isprint(int c)");
	{
		size_t	len = sizeof(pass_arr) / sizeof(pass_arr[0]);
		size_t	i = 0;
		ut_test("pass_arr[] = {32, 77, 99, 126}");
		while (i < len)
		{
			int	c = pass_arr[i];
			printf("ft_isprint(%d/%c) = %d\n", c, c, ft_isprint(c));
			printf("   isprint(%d/%c) = %d\n\n", c, c, isprint(c));
			i++;
		}
	}
	{
		size_t	len = sizeof(fail_arr) / sizeof(fail_arr[0]);
		size_t	i = 0;
		ut_test("fail_arr[] = {-1, 0, 5, 29, 30, 31, 128}");
		while (i < len)
		{
			int c = fail_arr[i];
			printf("ft_isprint(%d/%c) = %d\n", c, c, ft_isprint(c));
			printf("   isprint(%d/%c) = %d\n\n", c, c, isprint(c));
			i++;
		}
	}
}
