/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:14:26 by gserafio          #+#    #+#             */
/*   Updated: 2024/10/09 22:07:27 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

typedef struct t_point {
    int x;
    int y;
} t_point;

void set_point(t_point *point);