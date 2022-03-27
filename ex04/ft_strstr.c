/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 15:06:12 by yagnaou           #+#    #+#             */
/*   Updated: 2021/07/15 17:28:22 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char	*str, char	*to_find)
{
	while (*str && *to_find)
	{
		if (*str != *to_find)
		{
			return (0);
		}
		str++;
		to_find++;
	}
	return (*to_find == '\0');
}

char	*ft_strstr(char	*str, char	*to_find)
{
	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if ((*str == *to_find) && ft_strcmp(str, to_find))
		{
			return (str);
		}
		str++;
	}
	return (0);
}
