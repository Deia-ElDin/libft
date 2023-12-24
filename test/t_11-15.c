/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_11-15.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dehamad <dehamad@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:23:12 by dehamad           #+#    #+#             */
/*   Updated: 2023/12/20 19:09:51 by dehamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_strchr(void)
{
	const char *s = "abc";
	int c[] = {98, 0, -191};
	size_t len = sizeof(c) / sizeof(c[0]);
	size_t i = 0;
	
  	ut_fn_name("ft_strchr", "char *ft_strchr(const char *s, int c)");
	ut_test("*s = \"abc\", c[] = {98, 0, -191}");
	while (i < len)
	{
		printf("ft_strchr(%s, %d/%c) = %s\n", s, c[i], c[i], ft_strchr(s, c[i]));
		printf("   strchr(%s, %d/%c) = %s\n\n", s, c[i], c[i], strchr(s, c[i]));
		i++;
	}
}

void	test_ft_strrchr(void)
{
	const char *s = "AbeAbcde";
	int c[] = {98, 101, 0, -191};
	size_t len = sizeof(c) / sizeof(c[0]);
	size_t i = 0;
	
  	ut_fn_name("ft_strrchr", "char *ft_strrchr(const char *s, int c)");
	ut_test("*s = \"AbeAbcde\", c[] = {98, 101, 0, -191}");
	while (i < len)
	{
		printf("ft_strrchr(%s, %d/%c) = %s\n", s, c[i], c[i], ft_strrchr(s, c[i]));
		printf("   strrchr(%s, %d/%c) = %s\n\n", s, c[i], c[i], strrchr(s, c[i]));
		i++;
	}
}

void	test_ft_strncmp(void)
{
	const char *s1 = "abc"; 
	const char *s2 = "abd";
	size_t n = 0;
	
	ut_fn_name("ft_strncmp", "int ft_strncmp(const char *s1, const char *s2, size_t n)");
	ut_test("*s1 = \"abc\", *s2 = \"abd\"");
	while (n <= 3)
	{
		printf("ft_strncmp(%s, %s, %zu) = %d\n", s1, s2, n, ft_strncmp(s1, s2, n));
		printf("   strncmp(%s, %s, %zu) = %d\n\n", s1, s2, n, strncmp(s1, s2, n));
		n++;
	}
	ut_test("NULL, *s1 = \"abc\", *s3 = *s1");
	const char *s3 = s1;
	printf("ft_strncmp(%s, %s, %zu) = %d\n", s1, s3, n, ft_strncmp(s1, s3, n));
	printf("   strncmp(%s, %s, %zu) = %d\n\n", s1, s3, n, strncmp(s1, s3, n));
}

void	test_ft_strnstr(void)
{
	const char *s1 = "abc"; 
	const char *s2 = "bc";
	size_t len = 0;
	
	ut_fn_name("ft_strnstr", "char *ft_strnstr(const char *s1, const char *s2, size_t n)");
	ut_test("*s1 = \"abc\", *s2 = \"bc\"");
	while (len <= 3)
	{
		printf("ft_strnstr(%s, %s, %zu) = %s\n", s1, s2, len, ft_strnstr(s1, s2, len));
		printf("   strnstr(%s, %s, %zu) = %s\n\n", s1, s2, len, strnstr(s1, s2, len));
		len++;
	}
}

void	test_ft_strdup(void)
{
	const char *s1 = "abc";
	char *res1 = ft_strdup(s1);
	char *res2 = strdup(s1);

	ut_fn_name("ft_strdup", "char *ft_strdup(const char *s)");
	ut_test("*s1 = \"abc\"");
	printf("ft_strdup(%s) = %s\n", s1, res1);
	printf("ft_strdup(%s) = %s\n\n", s1, res2);
	free(res1);
	free(res2);
}
