#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
int main(int argc, char *argv[])
{
  change_ultra_coef(atoi(argv[1]),atoi(argv[2]),atoi(argv[3]));
  exit();
}