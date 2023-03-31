/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <seoshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 22:33:22 by seoshin           #+#    #+#             */
/*   Updated: 2023/03/31 13:47:38 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	a_philo(t_philo *philo)
{
	pthread_mutex_lock(&philo->info->fork[0]);
	printf("%llu %d has taken a fork\n", \
	ft_time() - philo->info->start, philo->id + 1);
	while (ft_dieflag_read(philo) == 0 && ft_eatflag_read(philo) == 0)
		usleep(10);
	pthread_mutex_unlock(&philo->info->fork[0]);
}
