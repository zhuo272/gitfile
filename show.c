#include "show.h"

int show_Prompt1(void)
{
    printf("Please choose the difficulty of the game\n");
    printf("1-->Simple\n");
    printf("2-->middle\n");
    printf("3-->difficulty\n");
    printf("Please press 1, 2, or 3 to choose the difficulty\n");
	return 0;
}

int show_Prompt2(int level, int last_s_input, int last_b_input)
{
    switch(level){
        case(1):{
				printf("You have chosen the simple model!\n");
				break;
		}
        case(2):{
				printf("You have chosen the middle model!\n");
				break;
        }
		case(3):{
				printf("You have chosen the difficulty model!\n");
				break;
   		}
	 }
    printf("Please enter the number you guessed~\n");
    printf("The range: %d~%d\n\n",last_s_input,last_b_input);
	return 0;
}

int show_toobig(int last_s_input, int last_b_input)
{
    printf("you input too big,the range is %d~%d\n",last_s_input,last_b_input);
    printf("Please re-enter the number\n\n");
	return 0;
}
int show_toosmall(int last_s_input, int last_b_input)
{
    printf("you input too small,the range is %d~%d\n",last_s_input,last_b_input);
    printf("Please re-enter the number\n\n");
	return 0;
}
