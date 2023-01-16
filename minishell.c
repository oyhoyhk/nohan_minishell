/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungnoh <hyungnoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:36:44 by hyungnoh          #+#    #+#             */
/*   Updated: 2023/01/16 16:23:36 by hyungnoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	main(int ac, char **av, char **envp)
{
	t_pipe	pipe;

	if (ac != 5)
		perror("argument error");
	pipe.infile = open(av[1], O_RDONLY);
	if (pipe.infile < 0)
		perror("infile error");
	pipe.outfile = open(av[4], O_RDWR | O_CREAT | O_TRUNC, 0644);
	if (pipe.outfile < 0)
		perror("outfile error");
	pipe.path_list = ft_split(getenv("PATH"), ':');
	return (EXIT_SUCCESS);
}
