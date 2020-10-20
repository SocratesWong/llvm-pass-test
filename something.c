#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
   float a= atoi(argv[0]);
   float b= atoi(argv[1]);
   //float c = a/b;
   float c = a+b;
   printf("Hello World!, %f",c);
}
