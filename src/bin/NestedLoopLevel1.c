#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX1 10
#define MAX2 10


int loop2(int x){

    for(int i = 0; i < MAX2; i++){
        x = x + 1; 
    }
    if (x > 15){
        return x;
    }
    else{
        return 15;
    }
}

int loop1(){ 
    int x = 0;
    for(int i = 0; i < MAX1; i++){
        x += loop2(i);
    }
    char buffer[10];
    fgets(buffer, 100, stdin);
    return x;
}

int main(int argc, char *argv[]){
    int x = loop1();
    printf("x = %d\n", x);
    return 0;
}