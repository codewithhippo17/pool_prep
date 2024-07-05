void ft_div_mod(int a, int b, int *div, int *mod)
{
    int res;
    res = a / b;
    div = &res;
    res = a % b;
    mod = &res;
}