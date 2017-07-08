#include "get_random.h"

int get_random(int level, int* right_num, int* last_b_input)
{
    switch (level){
        case(1):{
            srand(time(NULL));
			*right_num = rand()%100+1;
			*last_b_input = 100;
			break;
        }
        case(2):{
			srand(time(NULL));
			*right_num = rand()%1000+1;
			*last_b_input = 1000;
			break;
        }
		case(3):{
			srand(time(NULL));
			*right_num = rand()%10000+1;
			*last_b_input = 10000;
			break;
        }
    }
    return 0;
}
