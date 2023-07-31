/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 20:26:56 by nbiescas          #+#    #+#             */
/*   Updated: 2023/07/27 20:26:58 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <fcntl.h>
#include "./libft/libft.h"
#include "./Printf/ft_printf.h"

typedef struct _pipe
{
	int			fd[2];
	char		**envp;
	char		*env_path;
	int			fd_read;
	int			fd_write;
}					t_pipe_info;

int		pipex_error(char *error, int exit_status);
void	create_pipex_struct(char *argv[], char *envp[], \
t_pipe_info *pipex_struct);
char	*path_command(t_pipe_info pipex_struct, char *command);
void	obtain_path(t_pipe_info *pipex_struct, char *envp[]);
