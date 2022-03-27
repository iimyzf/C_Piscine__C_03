/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 19:59:40 by yagnaou           #+#    #+#             */
/*   Updated: 2021/07/15 17:26:56 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char	*dest, char	*src, unsigned int	size)
{
	unsigned int	lend;
	unsigned int	lens;
	unsigned int	i;
	unsigned int	j;
	unsigned int	c;

	i = 0;
	c = 0;
	lend = 0;
	lens = 0;
	while (dest[lend])
		lend++;
	while (src[lens])
		lens++;
	j = lend;
	if (lend < size)
	{
		c = size - 1 - lend;
		while (src[i] && i < c)
			dest[j++] = src[i++];
		dest[j] = '\0';
		return (lend + lens);
	}
	return (lens + size);
}
