#include <stdio.h>

char lower(char c) {
  return (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;
}

int main() {
  printf("%c\n", lower('C'));
  printf("%c\n", lower(';'));
  printf("%c\n", lower('c'));
  return 0;
}
