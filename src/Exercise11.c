#include <stdio.h>

int main(int argc, char *argv[]){
  int number[4] = { 0 };
  char name[4] = { 'a' };

  // First print them out raw
  printf("numbers \t: %d %d %d %d\n", number[0], number[1], number[2], number[3]);

  printf("name each \t: %c %c %c %c \n", name[0], name[1], name[2], name[3]);

  // SET UP THE NUMBERS
  number[0] = 1;
  number[1] = 2;
  number[2] = 3;
  number[3] = 4;

  // Set up the names
  name[0] = 'V';
  name[1] = 'i';
  name[2] = 's';
  name[3] = '\0';

  // then print them out initialised
  printf("numbers \t: %d %d %d %d\n", number[0], number[1], number[2], number[3]);

  printf("names \t\t: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

  // Print the name like a string
  printf("name \t\t: %s\n", name);

  // another way to use a name.
  char *another = "Viswajit";

  printf("another \t: %s\n", another);


  return 0;
}
