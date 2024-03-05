#include <stdio.h>
#include <stdlib.h>

#define SIZE 24

void dtInit(int vect[]);
void dtAdd(int vect[]);

int main() {
    

    int vector[SIZE];
    dtInit( vector);
    dtAdd( vector);
    
    printf("Daily temperatures values:\n");
    for(int i = 0; i < SIZE; i++) {
        printf("Hour %d, Temp: %d\n", i, vector[i]);
    }

    return 0;
}


void dtInit(int vect[]) {
    for(int i = 0; i < SIZE; i++) {
        vect[i] = 0; 
    }
    
}

void dtAdd(int vect[]){

    for(int i = 0; i < SIZE; i++) {
        vect[i] = (rand()%100)-50; 
    }

}