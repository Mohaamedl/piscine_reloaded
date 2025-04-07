#include <unistd.h>

void ft_putchar(char *str) { write(1, str, 1); }
void ft_print_numbers(void) {
  char a = '0';
  while (a <= '9') {
    ft_putchar(&a);
    a++;
  }
}

int main(void) { ft_print_numbers(); }
