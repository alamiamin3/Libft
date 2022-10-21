/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:13:08 by aalami            #+#    #+#             */
/*   Updated: 2022/10/21 18:33:03 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;

    i = 0;
    
    if (dstsize > 0)
    {
        while(i < (dstsize-1) && src[i])
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }

        return (ft_strlen(src));
}


// int main()
// {

//     char *dest;
//     dest = (char *)malloc(sizeof(*dest) * 15);
//     char src[] = "";
//     printf("%zu\n",strlcpy(dest,src,15));
//     printf("%s\n",dest);


//     return(0);
// }