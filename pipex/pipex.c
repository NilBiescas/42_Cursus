/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 17:16:04 by nbiescas          #+#    #+#             */
/*   Updated: 2023/07/27 17:16:09 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	child(char *cmd, t_pipe_info p_struct, int read, int write)
{
	char	**cmd_flags;

	if ((dup2(read, 0) == -1) || (dup2(write, 1) == -1))
		pipex_error("pipex: Dup2 error", EXIT_FAILURE);
	if ((close(read) == -1) || (close(write) == -1))
		pipex_error("pipex: Close fd error", EXIT_FAILURE);
	cmd_flags = ft_split(cmd, ' ');
	if (cmd_flags == NULL)
		pipex_error("pipex: pipe error", EXIT_FAILURE);
	execve(path_command(p_struct, cmd_flags[0]), cmd_flags, p_struct.envp);
	pipex_error("pipex: Execve error", EXIT_FAILURE);
}

pid_t	create_process(char *argv[], t_pipe_info pix_struct, int read_close)
{
	pid_t	pid;

	pid = fork();
	if (pid == -1)
		pipex_error("pipex: Pipe error", EXIT_FAILURE);
	if (pid == 0)
	{
		if (read_close == 0)
		{
			close(pix_struct.fd[0]);
			child(argv[2], pix_struct, pix_struct.fd_read, pix_struct.fd[1]);
		}
		else
		{
			close(pix_struct.fd[1]);
			child(argv[3], pix_struct, pix_struct.fd[0], pix_struct.fd_write);
		}
	}
	return (pid);
}

void	pipe_creation(char *argv[], t_pipe_info pipex_struct)
{
	pid_t	pid1;
	pid_t	pid2;
	int		status;

	if (pipe(pipex_struct.fd) == -1)
		pipex_error("pipex: Pipe error", EXIT_FAILURE);
	pid1 = create_process(argv, pipex_struct, 0);
	pid2 = create_process(argv, pipex_struct, 1);
	waitpid (pid1, &status, 0);
	if (close(pipex_struct.fd[1]) == -1)
		pipex_error("piepx: Close fd error", EXIT_FAILURE);
	waitpid (pid2, &status, 0);
	if (WIFEXITED(status))
		exit(WEXITSTATUS(status));
	ft_putstr_fd("pipex: Program terminated abnormally", 2);
	exit(1);
}

int	main(int argc, char *argv[], char *envp[])
{
	t_pipe_info	pipex_struct;

	if (argc == 5)
	{
		create_pipex_struct(argv, envp, &pipex_struct);
		pipe_creation(argv, pipex_struct);
	}
	else
	{
		ft_putstr_fd("pipex: Invalid number of arguments\n", 2);
		exit (EXIT_FAILURE);
	}
}
