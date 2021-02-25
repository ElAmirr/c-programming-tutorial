#include<unistd.h>

void print_char(char c)
{
write(1, &c, 1);
}

void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
print_char(c);
print_char('\n');
c++;
}
}

int main(void)
{
print_alphabet();
return (0);
}
