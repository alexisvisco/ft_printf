/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   base_hash.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/27 10:51:33 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/28 12:24:26 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

void	base_hash(t_formatter *t)
{
	char *str;

	if (ft_strchr("xXp", t->type))
		str = ft_strappend_at(0, t->to_replace, t->type == 'X' ? "0X" : "0x");
	else if (ft_strchr("o", t->type))
		str = ft_strappend_at(0, t->to_replace, "0");
	free(t->to_replace);
	t->to_replace = str;
}