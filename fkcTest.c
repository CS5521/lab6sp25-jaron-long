#include "types.h"
#include "stat.h"
#include "user.h"
int
main(int argc, char * argv[])
{
   printf(1, "number of forks when the program starts: %d\n", fkc(4));

   if (fork() == 0)
   {
      exit();
   }

   if (fork() == 0)
   {
      exit();
   }

   printf(1, "number of forks after two more forks: %d\n", fkc(2));

   printf(1, "number of forks after fork count cleared: %d\n", fkc(0));

   if (fork() == 0)
   {
      exit();
   }

   if (fork() == 0)
   {
      exit();
   }

   if (fork() == 0)
   {
      exit();
   }

   printf(1, "number of forks after three more forks: %d\n", fkc(3));

   wait();
   wait();
   wait();
   wait();
   wait();
   wait();
   wait();

   exit();
}

