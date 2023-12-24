/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_6-10.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dehamad <dehamad@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:06:43 by dehamad           #+#    #+#             */
/*   Updated: 2023/12/22 07:29:30 by dehamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_toupper(void)
{
	const int pass_arr[] = {97, 100, 115, 122};
	const int fail_arr[] = {-1, 0, 49, 64, 65, 90, 96, 123, 128};

	ut_fn_name("ft_toupper", "int ft_toupper(int c)");
	{
		size_t len = sizeof(pass_arr) / sizeof(pass_arr[0]);
		size_t i = 0;
		ut_test("pass_arr[] = {97, 100, 115, 122}");
		while (i < len)
		{
			int c = pass_arr[i];
			int t1 =  ft_toupper(c);
			int t2 = toupper(c);
			printf("ft_toupper(%d/%c) = %d/%c\n", c, c, t1, t1);
			printf("   toupper(%d/%c) = %d/%c\n\n", c, c, t2, t2);
			i++;
		}
	}
	{
		size_t len = sizeof(fail_arr) / sizeof(fail_arr[0]);
		size_t i = 0;
		ut_test("fail_arr[] = {-1, 0, 49, 64, 65, 90, 96, 123, 128}");
		while (i < len)
		{
			int c = fail_arr[i];
			int t1 =  ft_toupper(c);
			int t2 = toupper(c);
			printf("ft_toupper(%d/%c) = %d/%c\n", c, c, t1, t1);
			printf("   toupper(%d/%c) = %d/%c\n\n", c, c, t2, t2);
			i++;
		}
	}
}

void	test_ft_tolower(void)
{
	const int pass_arr[] = {65, 70, 79, 90};
	const int fail_arr[] = {-1, 0, 49, 64, 91, 97, 122, 128};

	ut_fn_name("ft_tolower", "int ft_tolower(int c)");
	{
		size_t len = sizeof(pass_arr) / sizeof(pass_arr[0]);
		size_t i = 0;
		ut_test("pass_arr[] = {65, 70, 79, 90}");
		while (i < len)
		{
			int c = pass_arr[i];
			int t1 =  ft_tolower(c);
			int t2 = tolower(c);
			printf("ft_tolower(%d/%c) = %d/%c\n", c, c, t1, t1);
			printf("   tolower(%d/%c) = %d/%c\n\n", c, c, t2, t2);
			i++;
		}
	}
	{
		size_t len = sizeof(fail_arr) / sizeof(fail_arr[0]);
		size_t i = 0;
		ut_test("fail_arr[] = {-1, 0, 49, 64, 91, 97, 122, 128}");
		while (i < len)
		{
			int c = fail_arr[i];
			int t1 =  ft_tolower(c);
			int t2 = tolower(c);
			printf("ft_tolower(%d/%c) = %d/%c\n", c, c, t1, t1);
			printf("   tolower(%d/%c) = %d/%c\n\n", c, c, t2, t2);
			i++;
		}
	}
}

void	test_ft_strlen(void)
{
	const char *strs[] = {"42", "Abu", "Dhabi", "!"};
	size_t len = sizeof(strs) / sizeof(strs[0]);
	size_t	i = 0;
	
	ut_fn_name("ft_strlen", "size_t ft_strlen(const char *s)");
	ut_test("*strs[] = {\"42\", \"Abu\", \"Dhabi\", \"!\"}");
	while (i < len)
	{
		printf("ft_strlen(%s) = %zu\n", strs[i], ft_strlen(strs[i]));
		printf("   strlen(%s) = %zu\n\n", strs[i], strlen(strs[i]));
		i++;
	}
	{
		ut_test("NULL");
		// printf("ft_strlen(NULL) = %zu\n", ft_strlen(NULL));
		// printf("   strlen(NULL) = %zu\n", strlen(NULL));
	}
}

void	test_ft_strlcpy(void)
{
	const char *src1 = "1234";
	const char *src2 = "12345";
	const char *src3 = "12345";
	char dst1[5];
	char dst2[5];
	char dst3[5];
	char dst4[5];
	char dst5[4];
	char dst6[4];

	ut_fn_name("ft_strlcpy", "size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)");
	{
		ut_test("*src1 = \"1234\", dst1[5], dst2[5]");
		printf("ft_strlcpy(dst1, %s, %zu) = %zu ... dst1 = %s\n", src1, sizeof(dst1), ft_strlcpy(dst1, src1, sizeof(dst1)), dst1);
		printf("   strlcpy(dst2, %s, %zu) = %zu ... dst2 = %s\n\n", src1, sizeof(dst2), strlcpy(dst2, src1, sizeof(dst2)), dst2);
	}
	{
		ut_test("*src2 = \"12345\", dst3[5], dst4[5]");
		printf("ft_strlcpy(dst3, %s, %zu) = %zu ... dst3 = %s\n", src2, sizeof(dst3), ft_strlcpy(dst3, src2, sizeof(dst3)), dst3);
		printf("   strlcpy(dst4, %s, %zu) = %zu ... dst4 = %s\n\n", src2, sizeof(dst4), strlcpy(dst4, src2, sizeof(dst4)), dst4);
	}
	{
		ut_test("*src2 = \"12345\", dst5[4], dst6[4]");
		printf("ft_strlcpy(dst5, %s, %zu) = %zu ... dst5 = %s\n", src2, sizeof(dst5), ft_strlcpy(dst5, src2, sizeof(dst5)), dst5);
		printf("   strlcpy(dst6, %s, %zu) = %zu ... dst6 = %s\n\n", src2, sizeof(dst6), strlcpy(dst6, src2, sizeof(dst6)), dst6);
	}
}

void	test_ft_strlcat(void)
{
	char *src1 = "123";
	char *src2 = "1234";
	char *src3 = "12345";
	char dst1[3] = "ab";
	char dst2[3] = "ab";
	char dst3[7] = "ab";
	char dst4[7] = "ab";
	char dst5[5] = "ab";
	char dst6[5] = "ab";

	ut_fn_name("ft_strlcat", "size_t ft_strlcat(char *dst, const char *src, size_t size)");
	{
		ut_test("*src1 = \"123\", dst1[3], dst2[3]");
		printf("ft_strlcat(ab, %s, %zu) = %zu ... dst1 = %s\n", src1, sizeof(dst1), ft_strlcat(dst1, src1, sizeof(dst1)), dst1);
		printf("   strlcat(ab, %s, %zu) = %zu ... dst2 = %s\n\n", src1, sizeof(dst2), strlcat(dst2, src1, sizeof(dst2)), dst2);
	}
	{
		ut_test("*src2 = \"1234\", dst3[7], dst4[7]");
		printf("ft_strlcat(ab, %s, %zu) = %zu ... dst3 = %s\n", src2, sizeof(dst3), ft_strlcat(dst3, src2, sizeof(dst3)), dst3);
		printf("   strlcat(ab, %s, %zu) = %zu ... dst4 = %s\n\n", src2, sizeof(dst4), strlcat(dst4, src2, sizeof(dst4)), dst4);
	}
	{
		ut_test("*src3 = \"12345\", dst5[5], dst6[5]");
		printf("ft_strlcat(ab, %s, %zu) = %zu ... dst5 = %s\n", src2, sizeof(dst5), ft_strlcat(dst5, src2, sizeof(dst5)), dst5);
		printf("   strlcat(ab, %s, %zu) = %zu ... dst6 = %s\n\n", src2, sizeof(dst6), strlcat(dst6, src2, sizeof(dst6)), dst6);
	}
}
