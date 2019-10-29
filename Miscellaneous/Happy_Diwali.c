#include <time.h>
#include <stdio.h>

void main()
{
  time_t t = time(NULL);
  struct tm tm = *localtime(&t);
  if(tm.tm_mday == 27){
      printf("--------------------------------------Happy Diwali---------------------------------- \n");
  }
  printf("Yeah Today Is Diwali \n");
  printf("now: %d-%d-%d %d:%d:%d\n", tm.tm_year + 1900, tm.tm_mon + 1,tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
}
