/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 17:13:47 by nbiescas          #+#    #+#             */
/*   Updated: 2023/07/27 17:13:49 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	pipex_error(char *error, int exit_status)
{
	if (error)
		perror(error);
	exit (exit_status);
}

void	create_pipex_struct(char *argv[], char *envp[], t_pipe_info *pix_struct)
{
	obtain_path(pix_struct, envp);
	pix_struct->fd_read = open(argv[1], O_RDONLY);
	pix_struct->fd_write = open(argv[4], O_WRONLY | O_TRUNC | O_CREAT, 00644);
	pix_struct->envp = envp;
	if ((pix_struct->fd_read == -1) || (pix_struct->fd_write == -1))
		pipex_error("pipex: input", EXIT_FAILURE);
}

char	*path_command(t_pipe_info pipex_struct, char *command)
{
	char	**split_paths;
	char	*string1;
	char	*string2;
	size_t	i;

	i = 0;
	split_paths = ft_split(pipex_struct.env_path, ':');
	while (split_paths && split_paths[i])
	{
		string1 = ft_strjoin(split_paths[i], "/");
		string2 = ft_strjoin(string1, command);
		if (string2 == NULL)
			exit(EXIT_FAILURE);
		if (access(string2, F_OK | X_OK) == 0)
			return (string2);
		i++;
	}
	string1 = ft_strjoin(ft_strjoin("pipex: ", command), \
	": command not found\n");
	if (string1 == NULL)
		pipex_error("pipex: ft_strjoin error", EXIT_FAILURE);
	ft_putstr_fd(string1, 2);
	exit(127);
}

void	obtain_path(t_pipe_info *pipex_struct, char *envp[])
{
	size_t	i;

	i = 0;
	pipex_struct->env_path = NULL;
	while (envp[i])
	{
		if (!ft_strncmp(envp[i], "PATH=", 5))
		{
			pipex_struct->env_path = ft_strchr(envp[i], '/');
			break ;
		}
		i++;
	}
}
