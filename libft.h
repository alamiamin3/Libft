/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 22:17:45 by aalami            #+#    #+#             */
/*   Updated: 2022/10/22 12:21:46 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

typedef struct s_split
{
	size_t			i;
	int				elm;
	char			**ptr;
}					t_split;

typedef struct s_atoi
{
	int				ret;
	int				sign;
	size_t			i;
}					t_atoi;

void				ft_bzero(void *s, size_t n);
int					ft_toupper(int c);
int					ft_tolower(int c);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strrchr(const char *s, int c);
char				*ft_strnstr(const char *big, const char *little,
						size_t len);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
size_t				ft_strlen(const char *s);
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strdup(const char *s1);
char				*ft_strchr(const char *s, int c);
void				*ft_memset(void *str, int c, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_isprint(int c);
int					ft_isdigit(int c);
int					ft_isascii(int c);
int					ft_isalpha(int c);
int					ft_isalnum(int c);
void				*ft_calloc(size_t count, size_t size);
char				*ft_strtrim(char const *s1, char const *set);
int					ft_atoi(const char *str);
void				*ft_memmove(void *dst, const void *src, size_t len);
char				**ft_split(char const *s, char c);
char				*ft_itoa(int c);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));

#endif