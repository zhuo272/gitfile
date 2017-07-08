#include "input.h"
#include "stdio.h"
#include "stdlib.h"


int input_level(int* level)
{
    while(1){
        while(scanf("%d",level)!=1){
            printf("The input is incorrect,please re-select the game level\n");
            while(getchar()!='\n');
        }
        if((*level)!=1 && (*level)!=2 && (*level)!=3){
            printf("The input is incorrect,please re-select the game level\n");
        }
        else{
            break;
        }
    
    }
    return 0;
}
int input_guess(int* input, int right_num, int* last_s_input, int* last_b_input)
{
    while(1){
        while(scanf("%d",input)!=1){
            printf("wrong input\n");
            printf("Please re-enter your number\n");
            while(getchar()!='\n');
        }

        if(*input == right_num){
            printf("\nCongratulations! you guessed it!!\n");
            printf("The correct number is %d!\n\n",right_num);
            break;
        }
        else if(*input > right_num){
            if(*input < *last_b_input){
                *last_b_input = *input;
            }
            else;
	    show_toobig(*last_s_input, *last_b_input);
        }
        else{
            if(*input > *last_s_input){
                *last_s_input = *input;
            }
            else;
	    show_toosmall(*last_s_input, *last_b_input);
        }
    }
    return 0;
}
