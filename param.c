/*
 * param.c
 *
 *  Created on: Feb 6, 2021
 *      Author: Erwin
 */

#include <stdio.h>

/* If there is no void in parameter list. */
/* C reckons parameters are unspecific. */
/* C++ reckons there is no parameter. */
void empty_param_list(void);

int main(void)
{
  empty_param_list();
  return 0;
}

void empty_param_list(void)
{
  puts("Hello");
  return;
}

