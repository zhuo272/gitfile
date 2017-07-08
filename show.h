#ifndef __SHOW_H
#define __SHOW_H

#include"common.h"

int show_Prompt1(void);
int show_Prompt2(int level, int last_s_input, int last_b_input);
int show_toobig(int last_s_input, int last_b_input);
int show_toosmall(int last_s_input, int last_b_input);

#endif
