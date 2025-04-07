#include <unistd.h>

void ft_putchar(char *str) { write(1, str, 1); }
void ft_print_alphabet(void) {
  char a = 'a';
  while (a <= 'z') {
    ft_putchar(&a);
    a++;
  }
}

int main(void) { ft_print_alphabet(); }
