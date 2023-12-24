/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_21-25.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dehamad <dehamad@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:44:36 by dehamad           #+#    #+#             */
/*   Updated: 2023/12/25 02:27:43 by dehamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_bzero(void)
{
	char	s1[5];
	char	s2[5];
	size_t 	n = 5;
	int		i = 0;

	ut_fn_name("ft_bzero", "void ft_bzero(void *s, size_t n)");
	ut_test("n = 5");
	ft_bzero(s1, n);
	bzero(s2, n);
	while (i <= n)
	{
		printf("s1[%d] = %d\n", i, s1[i]);
		printf("s2[%d] = %d\n\n", i, s2[i]);
		i++;
	}
}

void	test_ft_atoi(void)
{
	char	*str[] = 
	{
		" \t\n\v\f\r  12345abc",
		" \t\n\v\f\r +12345abc",
		" \t\n\v\f\r -12345abc",
		" \t\n\v\f\r +-12345abc",
		" \t\n\v\f\r --12345abc",
		" \t\n\v\f\r ++12345abc",
		" \t\n\v\f\r *123 45abc",
		" \t\n\v\f\r **12345 abc",
		" \t\n\v\f\r 123 45abc",
		" \t\n\v\f\r 12345 abc",
		" \t\n\v\f\r -2147483648 ",
		" \t\n\v\f\r -2147483649 ",
		" \t\n\v\f\r 2147483647 ",
		" \t\n\v\f\r 2147483648 ",
		" \t\n\v\f\r 4294967295 ",
		" \t\n\v\f\r 18446744073709551615 ",
		" \t\n\v\f\r 9223372036854775807",
		" \t\n\v\f\r -9223372036854775808",
		" \t\n\v\f\r 92233720368547758071111111111111",
		" \t\n\v\f\r 6498466546461316516165",
		NULL
	};
	char	*tests[] = 
	{
		"*str = \" \\t\\n\\v\\f\\r  12345abc\"",
		"*str = \" \\t\\n\\v\\f\\r +12345abc\"",
		"*str = \" \\t\\n\\v\\f\\r -12345abc\"",
		"*str = \" \\t\\n\\v\\f\\r +-12345abc\"",
		"*str = \" \\t\\n\\v\\f\\r --12345abc\"",
		"*str = \" \\t\\n\\v\\f\\r ++12345abc\"",
		"*str = \" \\t\\n\\v\\f\\r *123 45abc\"",
		"*str = \" \\t\\n\\v\\f\\r **12345 abc\"",
		"*str = \" \\t\\n\\v\\f\\r 123 45abc\"",
		"*str = \" \\t\\n\\v\\f\\r 12345 abc\"",
		"*str = \" \\t\\n\\v\\f\\r -2147483648 == INT_MIN \"",
		"*str = \" \\t\\n\\v\\f\\r -2147483649 < INT_MIN \"",
		"*str = \" \\t\\n\\v\\f\\r 2147483647 == INT_MAX \"",
		"*str = \" \\t\\n\\v\\f\\r 2147483648 > INT_MAX \"",
		"*str = \" \\t\\n\\v\\f\\r 4294967295 \"",
		"*str = \" \\t\\n\\v\\f\\r 18446744073709551615 \"",
		"*str = \" \\t\\n\\v\\f\\r 9223372036854775807 \"",
		"*str = \" \\t\\n\\v\\f\\r -9223372036854775808 \"",
		"*str = \" \\t\\n\\v\\f\\r 92233720368547758071111111111111 \"",
		"*str = \" \\t\\n\\v\\f\\r 6498466546461316516165 \"",
		NULL
	};

	ut_fn_name("ft_atoi", "int ft_atoi(const char *str)");
	{
		size_t	i = 0;
		while (str[i])
		{
			ut_test(tests[i]);
			printf("ft_atoi = %d\n", ft_atoi(str[i]));
			printf("   atoi = %d\n\n", atoi(str[i]));
			i++;
		}
	}
}

void	test_ft_calloc(void)
{
	char	*str1 = ft_calloc(2, sizeof(char));
	char	*str2 = calloc(2, sizeof(char));
	int		*int1 = ft_calloc(3, sizeof(int));
	int		*int2 = calloc(3, sizeof(int));

	ut_fn_name("ft_calloc", "void *ft_calloc(size_t count, size_t size)");
	{
		ut_test("ft_calloc for *str1, calloc for *str2");
		int	i = 0;
		while (i < 2)
		{
			printf("str1[%d] = %d\n", i, str1[i]);
			printf("str2[%d] = %d\n\n", i, str2[i]);
			i++;
		}
	}
	{
		ut_test("ft_calloc for *int1, calloc for *int2");
		int	i = 0;
		while (i < 3)
		{
			printf("int1[%d] = %d\n", i, int1[i]);
			printf("int2[%d] = %d\n\n", i, int2[i]);
			i++;
		}
	}
	free(str1);
	free(str2);
	free(int1);
	free(int2);
}

void	test_ft_substr(void)
{
	const char		*s = "123";

	ut_fn_name("ft_substr", 
		"char *ft_substr(char const *s, unsigned int start, size_t len)");
	{
		ut_test("the normal senario, *s = \"123\"");
		unsigned int	start[] = {0, 1, 2, 0, 0};
		size_t			len[] = {1, 1, 1, 2, 3};
		size_t			size = sizeof(start) / sizeof(start[0]);
		size_t			i = 0;
		
		while (i < size)
		{
			char *sub = ft_substr(s, start[i], len[i]);
			
			printf("ft_substr(%s, %d, %zu) = %s\n", s, start[i], len[i], sub);
			i++;
			free(sub);
		}
	}
	ft_putchar_fd('\n', 1);
	{
		size_t			i = 0;
		ut_test("empty s, *s = \"\"");
		while (i < 3)
		{
			char	*sub = ft_substr("", i, i);
			printf("ft_substr(%s, %zu, %zu) = %s\n", "", i , i, sub);
			free(sub);
			i++;
		}
	}
	ft_putchar_fd('\n', 1);
	{
		ut_test("start && slen && start >= slen, *s = \"123\", slen = 3");
		unsigned int	start[] = {3, 4, 4294967295};
		size_t			size = sizeof(start) / sizeof(start[0]);
		size_t			len = 1;
		size_t			i = 0;
		
		while (i < size)
		{
			char *sub = ft_substr(s, start[i], len);
			printf("ft_substr(%s, %d, %zu) = %s\n", s, start[i], len, sub);
			i++;
			free(sub);
		}
	}
	ft_putchar_fd('\n', 1);
	{
		ut_test("len > remain, *s = \"123\"");
		unsigned int	start = 1;
		size_t			len = 3;
		size_t			i = 0;
		char 			*sub = ft_substr(s, start, len);
		
		printf("ft_substr(%s, %d, %zu) = %s\n", s, start, len, sub);
		free(sub);
	}
}

void	test_ft_strjoin(void)
{
	char *res2 = ft_strjoin("0", "1");
	char *res3 = ft_strjoin("0", "\0");
	char *res4 = ft_strjoin("\0", "0");
	char *res5 = ft_strjoin("\0", "\0");
	const char	*s1 = "42 ";
	const char	*s2 = "Abu Dhabi!";
	const char	*s3 = NULL;

	ut_fn_name("ft_strjoin", "char *ft_strjoin(char const *s1, char const *s2)");
	{
		ut_test("the normal senario, *s1 = \"42 \", *s2 = \"Abu Dhabi!\"");
		char	*join = ft_strjoin(s1, s2);
		printf("ft_strjoin(%s, %s) = %s\n\n", s1, s2, join);
		free(join);
	}
	{
		ut_test("one of the str's points to null, *s1 = \"42 \", *s3 = NULL");
		char	*join = ft_strjoin(s1, s3);
		printf("ft_strjoin(%s, %s) = %s\n\n", s1, s3, join);
		free(join);
	}
	{
		ut_test("both of the str's points to null, *s3 = NULL, *s3 = NULL");
		char	*join = ft_strjoin(s3, s3);
		printf("ft_strjoin(%s, %s) = %s\n\n", s3, s3, join);
		free(join);
	}
}
