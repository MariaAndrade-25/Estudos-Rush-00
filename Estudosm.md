Então vamos lá
 ///Vamos usar a biblioteca então começamos sempre com:  #include <unistd.h>

 ///Quando escrevemos uma função #void faz com que a função não retorne valor e sim execute uma função


//ft_purchar -- Serve para "colocar caractere"


//char c -- armazena um caractere / c é a variável e pode ser qq letra

#include <unistd.h>

void ft_putchar(char c)

{
    write(1, &c, 1);
}

int main(void)
{
    char c = 'X';
    
    ft_putchar(c);      // Imprime: X
    ft_putchar(c + 1);  // Imprime: Y (X + 1 = Y em ASCII)
    ft_putchar('\n');
    
    return (0);
}