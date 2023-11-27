#include <stdio.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int main() {

    char buffer[BUFFER_SIZE]="Bienvenue dans le Shell ENSEA.\nPour quitter, tapez 'exit'.\nenseash %";
    write(1, buffer, BUFFER_SIZE);
    
    return 0;
}
