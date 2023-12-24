/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_16-20.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dehamad <dehamad@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:25:11 by dehamad           #+#    #+#             */
/*   Updated: 2023/12/25 02:33:39 by dehamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_memset(void)
{
	char	s1[5];
	char	s2[5];
	int c[] = {-191, -128, 65, 255};
	size_t	len = 1;
	int i = 0;
	
	ut_fn_name("ft_memset", "void *ft_memset(void *b, int c, size_t len)");
	{
		ut_test("len = {1, 2, 3, 4}, c = {-191, -128, 65, 255}");
		while (len <= 4)
		{
			printf("ft_memset(s1[5], %d/%c, %zu) = %s\n", c[i], ut_convert(c[i]), len, ft_memset(s1, c[i], len));
			printf("   memset(s2[5], %d/%c, %zu) = %s\n\n", c[i], ut_convert(c[i]), len, memset(s2, c[i], len));
			len++;
			i++;
		}
	}
	{
		ut_test("c = 0, len = 4/5");
		len = 4;
		i = 0;
		ft_memset(s1, 0, len);
		memset(s2, 0, len);
		while (i < len)
		{
			printf("s1[%d] = %d\n", i, s1[i]);
			printf("s2[%d] = %d\n\n", i, s2[i]);
			i++;
		}
	}
	{
		ut_test("c = 0, len = 5/5");
		len = 5;
		i = 0;
		ft_memset(s1, 0, len);
		memset(s2, 0, len);
		while (i < len)
		{
			printf("s1[%d] = %d\n", i, s1[i]);
			printf("s2[%d] = %d\n\n", i, s2[i]);
			i++;
		}
		printf("s1[5] = %s\n", s1);
		printf("s2[5] = %s\n", s2);
	}
	char	s3[5];
	char	s4[5];
	{
		ut_test("overflow, c = 'a', len = 4/5");
		len = 4;
		i = 0;
		int c = 97;
		printf("ft_memset(s3[5], %d/%c, %zu) = %s\n", c, c, len, ft_memset(s3, c, len));
		printf("   memset(s4[5], %d/%c, %zu) = %s\n", c, c, len, memset(s4, c, len));
	}
	{
		ut_test("overflow, c = 'b' && 'c', len = 5/5");
		len = 5;
		i = 0;
		int c = 98;
		printf("ft_memset(s3[5], %d/%c, %zu) = %s\n", c, c, len, ft_memset(s3, c, len));
		printf("   memset(s4[5], %d/%c, %zu) = %s\n", c + 1, c + 1, len, memset(s4, c + 1, len));
	}
}

void	test_ft_memcpy(void)
{
	char	*src = "123";
	char	dst1[4];
	char	dst2[4];
	size_t	n = 0;

	ut_fn_name("ft_memcpy", "void *ft_memcpy(void *dst, const void *src, size_t n)");
	ut_test("n = {0, 1, 2, 3, 4}");
	while (n <= 4)
	{
		printf("ft_memcpy(dst1[4], %s, %zu) = %s\n", src, n, ft_memcpy(dst1, src, n));
		printf("   memcpy(dst2[4], %s, %zu) = %s\n\n", src, n, memcpy(dst2, src, n));
		n++;
	}
}

void	test_ft_memmove(void)
{
	const char src[4] = "bbb";
	char dst1[4];
	char dst2[4];
	size_t	len = 0;

	ut_fn_name("ft_memmove", "void *ft_memmove(void *dst, const void *src, size_t len)");
	ut_test("n = {0, 1, 2, 3, 4}");
	while (len <= 4)
	{
		printf("ft_memmove(dst1[4], %s, %zu) = %s\n", src, len, ft_memmove(dst1, src, len));
		printf("   memmove(dst2[4], %s, %zu) = %s\n\n", src, len, memmove(dst2, src, len));
		len++;
	}
}

void	test_ft_memchr(void)
{
	char		*s = "abc";
	int			c = 99;
	size_t	n = 0;

	ut_fn_name("ft_memchr", "void *ft_memchr(const void *s, int c, size_t n)");
	{
		ut_test("n = {0, 1, 2, 3, 4/null}");
		while (n <= 4)
		{
			if (n == 4)
				c = 0;
			printf("ft_memchr(%s, %d/%c, %zu) = %s\n", s, c, c, n, (char *)ft_memchr(s, c, n));
			printf("   memchr(%s, %d/%c, %zu) = %s\n\n", s, c, c, n, (char *)memchr(s, c, n));
			n++;
		}
	}
	{
		ut_test("c = {0, -159, -158, -157}");
		int arr[] = {0, ut_convert('a'), ut_convert('b'), ut_convert('c')};
		int i = 0;
		int len = sizeof(arr) / sizeof(arr[0]);

		while (i < len)
		{
			printf("ft_memchr(%s, %d/%c, %zu) = %s\n", s, arr[i], ut_convert(arr[i]), n, (char *)ft_memchr(s, arr[i], n));
			printf("   memchr(%s, %d/%c, %zu) = %s\n\n", s, arr[i], ut_convert(arr[i]), n, (char *)memchr(s, arr[i], n));
			i++;
		}
	}
	{
		ut_test("SIZE_MAX && SIZE_MAX + 1");
		n = SIZE_MAX;
		printf("ft_memchr(%s, %d/%c, %zu) = %s\n", s, c, c, n, (char *)ft_memchr(s, c, n));
		printf("   memchr(%s, %d/%c, %zu) = %s\n\n", s, c, c, n, (char *)memchr(s, c, n));
		printf("ft_memchr(%s, %d/%c, %zu) = %s\n", s, c, c, n + 1, (char *)ft_memchr(s, c, n + 1));
		printf("   memchr(%s, %d/%c, %zu) = %s\n\n", s, c, c, n + 1, (char *)memchr(s, c, n + 1));
	}
	{
		ut_test("NULL");
		char	*s = NULL;
		// printf("ft_memchr(s, %c, %zu) = %s\n", c, n, (char *)ft_memchr(s, c, n));
		// printf("   memchr(s, %c, %zu) = %s\n\n", c, n, (char *)ft_memchr(s, c, n));
	}
}

void	test_ft_memcmp(void)
{
	const char	*s1 = "abc";
	const char	*s2 = "abd";
	size_t		n = 0;

	ut_fn_name("ft_memcmp", "int ft_memcmp(const void *s1, const void *s2, size_t n)");
	{
		ut_test("n = {0, 1, 2, 3, 4/null}");
		while (n <= 4)
		{
			printf("ft_memcmp(%s, %s, %zu) = %d\n", s1, n == 4 ? s1 : s2, n, ft_memcmp(s1, n == 4 ? s1 : s2, n));
			printf("   memcmp(%s, %s, %zu) = %d\n\n", s1, n == 4 ? s1 : s2, n, memcmp(s1, n == 4 ? s1 : s2, n));
			n++;
		}
	}
	{
		ut_test("NULL");
		const char	*s1 = NULL;
		// printf("ft_memcmp(%s, %s, %zu) = %d\n", s1, s2, n, ft_memcmp(s1, s2, n));
		// printf("   memcmp(%s, %s, %zu) = %d\n\n", s1, s2, n, memcmp(s1, s2, n));
	}
}
