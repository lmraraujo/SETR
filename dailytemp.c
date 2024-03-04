#include <stdio.h>
#include <stdlib.h>

#define SIZE 24

void dtInit(int vect[]);

int main() {
    
    int dailyTemperatures[SIZE];

   
    dtInit(dailyTemperatures);

    
    printf("Daily temperatures values:\n");
    for(int i = 0; i < SIZE; i++) {
        printf("Hour %d: %d°C\n", i, dailyTemperatures[i]);
    }

    return 0;
}


void dtInit(int vect[]) {
    
    for(int i = 0; i < SIZE; i++) {
        vect[i] = (rand()%100)-50; 
    }
}