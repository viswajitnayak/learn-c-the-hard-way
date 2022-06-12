#include <stdio.h>

int main(int argc, char *argv[]){
  
  int areas[] = { 10, 12, 13, 14, 20 };
  char name[] = "Zed";
  char full_name[] = {
    'V', 'i', 's', 'w', 'a', 'j', 'i', 't', '\0'
  };

  // Warning: on some system you may have to change the %ld in this code to a %u since it will use unsigned ints.
  printf("The size of an int \t\t: %ld\n", sizeof(int));
  printf("The size of the areas (int[]) \t: %ld\n", sizeof(areas));



  return 0;
}
