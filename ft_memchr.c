/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 21:06:10 by aalami            #+#    #+#             */
/*   Updated: 2022/10/16 04:42:10 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    const void *p;
    unsigned char d;
    
    d = (unsigned char)c;
    i = 0;
    p = s;
    if(n == 0)
        return (NULL);
    while(i < n-1 && *(unsigned char *)(p + i) != d)
        i++;
    if(*(unsigned char *)(p + i) == d)
        return ((void*)p+i);
    else
        return NULL;
}
// int main()
// {
//     printf("%s\n",ft_memchr("bonjourno",'n',2));
//     printf("%s",memchr("bonjourno",'n',2));
// }