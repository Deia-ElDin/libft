/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dehamad <dehamad@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:24:05 by dehamad           #+#    #+#             */
/*   Updated: 2023/12/22 05:40:45 by dehamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include "../libft.h"

extern const char	*g_decoration;

// Controller
void	t_controller(void);

// Utils
void	ut_fn_name(const char *fn_name, const char *prototype);
void	ut_test(const char *test);
int		ut_convert(int c);
t_list	*ut_create_node(char type, void *content);
t_list	*ut_create_list(char type, void *arr, char **str, int len);
void	ut_print_list(t_list *lst, char type);

// Support 
char	uts_ft_strmapi(unsigned int i, char c);
void	uts_ft_striteri(unsigned int i, char *c);
void	uts_ft_lstiter(void *content);
void	*uts_ft_lstmap(void *content);

// Tests
void	test_ft_isalpha(void);
void	test_ft_isdigit(void);
void	test_ft_isalnum(void);
void	test_ft_isascii(void);
void	test_ft_isprint(void);
void	test_ft_toupper(void);
void	test_ft_tolower(void);
void	test_ft_strlen(void);
void	test_ft_strlcpy(void);
void	test_ft_strlcat(void);
void	test_ft_strchr(void);
void	test_ft_strrchr(void);
void	test_ft_strncmp(void);
void	test_ft_strnstr(void);
void	test_ft_strdup(void);
void	test_ft_memset(void);
void	test_ft_memset(void);
void	test_ft_memcpy(void);
void	test_ft_memmove(void);
void	test_ft_memchr(void);
void	test_ft_memcmp(void);
void	test_ft_bzero(void);
void	test_ft_atoi(void);
void	test_ft_calloc(void);

void	test_ft_substr(void);
void	test_ft_strjoin(void);
void	test_ft_strtrim(void);
void	test_ft_split(void);
void	test_ft_itoa(void);
void	test_ft_strmapi(void);
void	test_ft_striteri(void);

void	test_ft_putchar_fd(void);
void	test_ft_putstr_fd(void);
void	test_ft_putendl_fd(void);
void	test_ft_putnbr_fd(void);

void	test_ft_lstnew(void);
void	test_ft_lstadd_front(void);
void	test_ft_lstsize(void);
void	test_ft_lstlast(void);
void	test_ft_lstadd_back(void);
void	test_ft_lstdelone(void);
void	test_ft_lstclear(void);
void	test_ft_lstiter(void);
void	test_ft_lstmap(void);
#endif