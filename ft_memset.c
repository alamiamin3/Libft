/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:36:17 by aalami            #+#    #+#             */
/*   Updated: 2022/10/10 22:34:09 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *str, int c, size_t n)
{
    size_t i;
    unsigned char *p ;

    i = 0;
    p = (unsigned char*)str;

    while (i < n)
    {
        p[i] = (unsigned char)c;
        i ++;
    }
    return str;
}
// int main () {
//    char str[]= "This is string.h library function";

// //    strcpy(str,"");
//    puts(str);

//    memset(str,'$',66);
//    puts(str);
   
//    return(0);
// }