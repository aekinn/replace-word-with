#include <stdio.h>
int main(){

// How to replace words in C programming
int i;
char array[100];

printf("Enter your sentence :  ");
fgets(array, sizeof(array), stdin);  // The second parameter of "fgets" function is for size. Size of the array is 100.
printf("\n");

// I want to replace the word "the" with "obs characters.
for(i=0; i<100; i++){
    if(array[i] == 't' || array[i] == 'T'){
        if(array[i+1] == 'h' || array[i+1] == 'H'){
            if(array[i+2] == 'e' || array[i+2] == 'E'){  // If all conditions are provided, the words are replaced
                array[i] = 'o';
                array[i+1] = 'b';
                array[i+2] = 's';
            }
        }
    }
}
printf("Here new sentence   :  ");
puts(array);  // Display the array
return 0;
}
