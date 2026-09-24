/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 13:54:45 by acuevas           #+#    #+#             */
/*   Updated: 2026/09/24 13:54:50 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_display(int fd)
{
	int		bytes_read;
	char	buffer[1000];

	bytes_read = read(fd, buffer, 1000);
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(fd, buffer, 1000);
	}
	if (bytes_read == -1)
		write(2, "Cannot read file.\n", 18);
}

int	main(int argc, char **argv)
{
	int	fd;

	if (argc == 1)
	{
		write (2, "File name missing.\n", 19);
		return (0);
	}
	if (argc > 2)
	{
		write (2, "Too many arguments.\n", 20);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (0);
	}
	ft_display(fd);
	close(fd);
}
