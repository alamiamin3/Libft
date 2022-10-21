/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:57:25 by aalami            #+#    #+#             */
/*   Updated: 2022/10/21 18:34:37 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int i;
    unsigned int j;
    char *p;
    j = 0;
    i = 0;
    // if(len > 0)
    // {
    if (!s)
        return (NULL);
        while (s[i] && i != start)
            i++;
        // if(i == start)
            p = malloc(sizeof(char) * (len+1));
        if(!p)
            return (NULL);
        while(len > 0 && s[i])
        {
            p[j] = s[i];
            i++;
            j++;
            len -- ;
        }
        p[j] = '\0';
        return (p);
    // }
    // else
    //     return (NULL);    
}

// int main()
// {
//     // 	char *str = "i just want this part #############";
// 	// size_t size = 10;
//     printf("%s",ft_substr("tripouille", 0, 42000));
// }