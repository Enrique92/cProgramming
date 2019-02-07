/**
 * File              : vc_putstr.c
 * Author            : Mihail Urmanschi
 * Date              : 2019-02-06 15:42
 */

void vc_putstr(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        putchar(str[i++]);
    }
}

int main()
{
    char str[] = "123\0";
    vc_putstr(str);

    return 0;
}