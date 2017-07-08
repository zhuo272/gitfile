#include "common.h"

int main(void)
{
	extern int level;
	extern int right_num;
	extern int input;
	extern int last_s_input;
	extern int last_b_input; 
   	last_s_input = 0;
    show_Prompt1();
    input_level(&level);
	get_random(level,&right_num,&last_b_input);
	show_Prompt2(level,last_s_input,last_b_input);
	input_guess(&input, right_num, &last_s_input, &last_b_input);

    return 0;
}
