/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_26-30.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dehamad <dehamad@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 01:11:01 by dehamad           #+#    #+#             */
/*   Updated: 2023/12/23 21:14:17 by dehamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_strtrim(void)
{
	const char	*s1 = "ab a123abcd45c d\t";
	const char	*set = "abcd \t";

	ut_fn_name("ft_strtrim", "char *ft_strtrim(char const *s1, char const *set)");
	{
		char	*trim = ft_strtrim(s1, set);

		ut_test("the normal senario, *s1 = \"ab a123abc45c d\\t\", *set = \"abcd \\t\"");
		printf("ft_strtrim(ab a123abcd45c d\\t, abcd \\t) = %s\n\n", trim);
		free(trim);
	}
	{
		char	*trim = ft_strtrim(s1, NULL);

		ut_test("NULL set, *s1 = \"ab a123abc45c d\\t\", *set = NULL");
		printf("ft_strtrim(ab a123abcd45c d\\t, NULL) = %s\n\n", trim);
	}
	{
		char	*trim = ft_strtrim(NULL, set);
		
		ut_test("NULL s1, *s1 = NULL, *set = \"abcd \\t\"");
		printf("ft_strtrim(NULL, abcd \\t) = %s\n\n", trim);
	}
}

void	test_ft_split(void)
{
	printf("test_ft_split\n");
  	const char	*strs[] = 
	{
		".42.Abu.Dhabi.!.", 
		"1. 2. 3",
		"1. 2. 3.",
		"1.2.3...",
		"1.22.333.4444",
		"1... 22.. 333 ..4444..",
		",1.22.333...",
		"........42 Abu Dhabi!",
		NULL
	};
	const char	*tests[] = 
	{
		"*s1 = \".42.Abu.Dhabi.!.\"",
		"*s2 = \"1. 2. 3\"",
		"*s3 = \"1. 2. 3.\"",
		"*s4 = \"1.2.3...\"",
		"*s5 = \"1.22.333.4444\"",
		"*s6 = \"1... 22.. 333 ..4444..\"",
		"*s7 = \"1.22.333...\"",
		"*s8 = \"........42 Abu Dhabi!\"",
		NULL
	};
	int	i = 0;
  	ut_fn_name("ft_split", "char **ft_split(char const *s, char c)");
	while (strs[i])
	{
		char	**split = ft_split(strs[i], '.');
		int 	j = 0;

		ut_test(tests[i]);
		while (split[j])
		{
			printf("ft_split[%d] = %s\n", j, split[j]);
			free(split[j]);
			j++;
		}
		free(split);
		i++;
	}
}

void	test_ft_itoa(void)
{
	int	test_arr[] = {12345, -12345, 2147483647, -2147483648, 0};
	int	len = sizeof(test_arr) / sizeof(test_arr[0]);
	int	i = 0;

	ut_fn_name("ft_itoa", "char *ft_itoa(int n)");
	ut_test("test_arr[] = {12345, -12345, 2147483647, -2147483648}");
	while (i < len)
	{
		printf("ft_itoa(%d) = %s\n", test_arr[i], ft_itoa(test_arr[i]));
		i++;
	}
}

void	test_ft_strmapi(void)
{
	const char	*s = "abcd123EFGH~";
	char		*ret = ft_strmapi(s, &uts_ft_strmapi);

  	ut_fn_name("ft_strmapi", "char *ft_strmapi(char const *s, char (*f)(unsigned int, char))");
	ut_test("*s = \"abcd123EFGH~\"");
	printf("ft_strmapi(%s, f) = %s\n", s, ret);
	free(ret);
}

void	test_ft_striteri(void)
{
	char	s[] = "abcdefgh&~";

	ut_fn_name("ft_striteri", "void ft_striteri(char *s, void (*f)(unsigned int, char *))");
	ut_test("*s = \"abcd&~\"");
	ft_striteri(s, &uts_ft_striteri);
	printf("s = %s\n", s);
}
