#include<stdio.h>
#include<unistd.h>

int main()
{

    printf("you are in exec program\n");
    printf("getpid - %d\n",getpid());

    execl("/home/shashi/learning/test",
          "/home/shashi/learning/test",
          NULL);

    printf("exec call is not executed\n");

    return 0;
}