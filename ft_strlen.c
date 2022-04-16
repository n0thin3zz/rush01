/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 12:37:49 by wting             #+#    #+#             */
/*   Updated: 2022/04/16 12:54:34 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_boxsize(char *input)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (input[i] != '\0')
	{
		if (input[i] >= '1' && input[i] <= '9')
			++count;
		++i;
	}
	count = count / 4;
	return (count);
}
