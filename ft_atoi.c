/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:47:35 by aalami            #+#    #+#             */
/*   Updated: 2022/10/21 18:57:18 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_char(char c)
{
	if((c >= '\t' && c <= '\r') || c == ' ' )
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int ret;
	int sign;
	size_t i;

	sign = 1;
	i = 0;
	ret = 0;
	while(str[i])
	{
		if(check_char(str[i]) && ret == 0)
			i++;
		else if((str[i] == '+' || str[i] == '-') && ft_isdigit(str[i + 1]) && !ft_isdigit(str[i - 1]))
		{
			if(str[i] == '-' )
				sign  = sign * -1;
			i++;
		}
		else if(ft_isdigit(str[i]))
		{	
			ret = (ret * 10 + str[i] - '0');
			i++;
		}
		else
			break;
	}
	ret = ret * sign;
	return (ret);
}
// int main()
// {
// 	printf("%d\n",ft_atoi("-1 910111213042"));
// }
