#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
printf("argc je %i", argc);
printf("argc od ena dalje");
for(int i = 1; i<argc; i++){
	printf("%i", atoi(argv[i]));
}
return 0;
}
