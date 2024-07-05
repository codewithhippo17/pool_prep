int ft_str_is_lowercase(char *str)
{
    int i,res;
    res = 0;
    i = 0;

    while (str[i] != '\0')
    {
        if  (str[i] <= 122 && str[i] >= 97)
        {
            res = 1;
            i++;
        }
        else
        {
            return 0;
        }
    }
    return (res);
}