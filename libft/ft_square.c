/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_square.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshara <bshara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 15:11:30 by bshara            #+#    #+#             */
/*   Updated: 2019/04/25 15:15:26 by bshara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_square(int a)
{
	if (a <= 46340 && a >= -46340)
		return (a * a);
	else
		return (-1);
}
