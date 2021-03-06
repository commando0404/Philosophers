/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:43:44 by oabdelha          #+#    #+#             */
/*   Updated: 2022/04/04 13:15:52 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int ac, char **av)
{
	t_data	data;

	if (check_args(ac, av) == 1)
		return (write(2, "ERROR : Incorrect Arguments !\n", 30), 1);
	if (initialization(&data, ac, av) == 1)
		return (1);
	if (creat_thread(&data, (&data)->philo) == 1)
		return (1);
	return (0);
}
