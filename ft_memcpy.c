/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:54:47 by aalami            #+#    #+#             */
/*   Updated: 2022/10/17 12:53:03 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    char *p;
   const char *s;
   
    i = 0;


    if((dest == src) || n == 0)
        return (dest);
    if(!dest && !src)
        return (0);
    p = (char *)dest;
    s = (const char *)src;
    while( i < n)
    {
        p[i] = s[i];
        i++;
    }
    return (p);
}
