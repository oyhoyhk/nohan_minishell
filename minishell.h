/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungnoh <hyungnoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:35:03 by hyungnoh          #+#    #+#             */
/*   Updated: 2023/01/16 16:23:26 by hyungnoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <sys/wait.h>

# define BUF_SIZE 1024
# define EXIT_FAILURE 1
# define EXIT_SUCCESS 0

typedef struct s_pipe
{
	int		infile;
	int		outfile;
	char	**path_list;
}	t_pipe;

char	*ft_strdup(const char *s1);
int		ft_strncmp(const char *s1, const char *s2, unsigned int n);
char	**ft_split(char const *s, char c);
#endif