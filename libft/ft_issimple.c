/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issimple.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshara <bshara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 15:11:17 by bshara            #+#    #+#             */
/*   Updated: 2019/04/25 15:12:39 by bshara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_issimple(unsigned int a)
{
	unsigned int i;

	if (a < 2)
		return (0);
	i = 2;
	while (i * i <= a)
	{
		if (a % i == 0)
			return (0);
		i++;
	}
	return (1);
}
