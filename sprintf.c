#include <stdio.h>

int main(int argc, char const *argv[]) {
  char info[100];
  char dept[]="HR";
  int emp = 75;
  sprintf(info, "The dept has %s dept and %d employees.",dept,emp);
  printf("%s \n",info );
  return 0;
}
