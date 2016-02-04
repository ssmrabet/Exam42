int     main()
{
    char    **tab;
    int     i;
    int     j;

    i = 0;
    tab = ft_split("    hello      world! k     !   ");
    while (tab[i])
    {
        j = 0;
        while (tab[i][j])
        {
            write(1, &tab[i][j], 1);
            j++;
        }
        write(1, " ", 1);
        i++;
    }
    return (0);
}
