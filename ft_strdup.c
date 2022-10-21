/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:58:48 by aalami            #+#    #+#             */
/*   Updated: 2022/10/18 10:58:23 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s1)
{
    char *p;
    size_t i;

    i = 0;
    p = malloc(sizeof(char) * (ft_strlen(s1)+1));
    if (!p)
        return (NULL);
    while (*(s1 + i))
    {
        *(p + i) = *(s1 +i);
        i++;
    }
    *(p + i) = '\0';
    return (p);
}
// int main()
// {
//     	char *tmp = "this is a normal test";
// 	int r_size = strlen(tmp);
//     char *s1;

// 	s1 = ft_strdup(tmp);
// }