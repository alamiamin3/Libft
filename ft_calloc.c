/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:19:18 by aalami            #+#    #+#             */
/*   Updated: 2022/10/20 17:10:26 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void *p;
    if(count == SIZE_MAX || size == SIZE_MAX )
        return (0);
    p = (void *)malloc(size * count);
    if(!p)
        return (NULL);
    ft_bzero(p,count*size);
    return (p);    
}


// int main(){
//     int size = 8539;

// 	void * d1 = ft_calloc(size, sizeof(int));
// 	void * d2 = calloc(size, sizeof(int));
// 	if (memcmp(d1, d2, size * sizeof(int)))
// 		printf("in\n");
// }