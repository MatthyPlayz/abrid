#include <stdio.h>
#include <stdlib.h>


int main( int argc, char *argv[] )
{

  printf("Welcome to Abrid!\n");
  printf("loading bash...\n");
  system("chmod +x bash");
  system("sudo ./bash --posix\n");
  printf("exiting bash...\n");
  printf("above==done, exiting abrid...\n");
  printf("above==done\n");
}
