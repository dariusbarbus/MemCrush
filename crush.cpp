//using default values take about 8 GB of ram
//it's faster to allocate larger chunks of memory for fewer loops
//allocating a larger chunk makes the program crash
//DOUBLE_ARR 100000

#include <stdio.h>
#include <malloc.h>



//////////////////
/*OPERATION MODE*/
//////////////////
//#define FRIEND_ZONE
#define LOVER



///////////////////
/*FRIEND ZONE SET*/
///////////////////
#define DOUBLE_ARR 100000 //how big each chunk will be
#define MALLOC_CYCLE 11000 //how many times will it allocate



struct crash{
    double num[DOUBLE_ARR];
};


int main(void){   
    char input = 'a'; 
    //inform the user 
    while(1){
        printf("See https://github.com/dariusbarbus/MemCrush for more information\n");
        printf("\nPress 'y' to continue, 'n' to close\n");
        scanf("%c", &input);

        if (input == 'y' || input == 'Y'){
            break;
        }
        else if(input == 'n' || 'N'){
            return 0;
        }
    }

    struct crash crash1;
    while(true)
    {
        void *ptr= (double*)malloc(sizeof(crash1));
    }
    
    return 0;
}