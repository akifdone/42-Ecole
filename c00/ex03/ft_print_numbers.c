#include <unistd.h>

void ft_print_numbers(void)
{

char s;

s = '0';
while( s <= '9')
{

write(1,&s,1);
s++;

}



}

int main()
{

ft_print_numbers();

}
