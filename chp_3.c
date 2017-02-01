#include <stdio.h>

void hello(int times) {
  for (int i = 0; i < times; i++) {
    puts("Hello, World!");
  }
}

int main(int argv, char** argc) {
  puts("For loop, 5 times, puts Hello, World!");
  for (int i = 0; i < 5; i++) {
    puts("Hello, World!");
  }

  puts("While loop, 5 times, puts Hello, World!");
  int i = 0;
  while(i < 5) {
    puts("Hello, World!");
    i++;
  }

  hello(5);
}
