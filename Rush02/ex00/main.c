int		main(int ac, char **av)
{
	int fd;
	int ret;
	char **tab;
	char data[32000];

	if (ac != 2 && ac != 3)
	{
		return(-1);
		write(1, "Error\n", 6);
	}
	ac == 2 ? fd = open("number.dict", O_RDONY): fd = open(av[2], O_RDONLY);
	ret = read(fd, data, 32000);
	ac == 2 ? tab = ft_split_nline(data, "\n"): ft_split_nline(data, "\n");
	ac == 2 ? ft_lunch(tab, av[1]): ft_lunch(tab, av[2]);
	return (0);
}
