#include <string.h>
#include <stdio.h>
#include <stdbool.h>

 #define MAX_LENGTH 100

 // Use github to push and pull to transfer files between machine and mira
void bubbleSort(int* values){
        
    int swapped = false;
    int temp, i;

    do{
        for(i=0; i<5; i++){
            if (values[i] > values[i+1]){
                temp = values[i+1];
                values[i+1] = values[i];
                values[i] = temp;
                swapped = true;
            }
        }
    

    
        swapped = false;
        for(i=0; i<5; i++){
            if (values[i] > values[i+1]){
                temp = values[i+1];
                values[i+1] = values[i];
                values[i] = temp;
                swapped = true;
            }
        } 
    } while (swapped);
    //return values;

}
int main(){

    int values[MAX_LENGTH] = {2, 1, 4, 3, 5};

    //printf("Enter 5 integers: ");
    //for (int i=0; i < 5; i++){
    //    scanf("%d", &values[i]);
   // }

    bubbleSort(values);
    for (int i = 0; i < 6; i++ ){
        printf("%d, ", values[i]);
    }

    return 0;
}

