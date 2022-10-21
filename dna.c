#include <string.h>
#include <stdio.h>

char *dna_strand(const char *dna){

    int len = strlen(dna); 
    char *result = strdup(dna); 
    int i;

    for (i = 0; i < len; ++i)
    {
        if (dna[i] == 'A'){
            result[i] = 'T';
        }
        if (dna[i] == 'T'){
            result[i] = 'A';
        }
        if (dna[i] == 'G'){
            result[i] = 'C';
        }
        if (dna[i] == 'C'){
            result[i] = 'G';
        }
    }
    return result;
}


int main(){

    printf("The complementary strand is: [%s]\n", dna_strand("ATTGC"));
    return 0;
}

