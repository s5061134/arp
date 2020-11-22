#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int   p[2];
int pid;
int r;
int a,b;
int sum;
 int main()

{
printf("Enter the values of a & b \n");
scanf("%d, %d", &a,&b);
sum=a+b;
printf("sum:%d,sum);


    char *ls_args[] = {"ls", NULL};
    char *grep_args[] = {"grep", "pipe", NULL};

    pipe(p);

    pid = fork();
    if (pid  != 0) {
            // Parent: Output is to child via pipe[1]

            // Change stdout to pipe[1]
            dup2(p[1], 1);
            close(p[0]);

            r = execvp("ls", ls_args);
    } else {
            // Child: Input is from pipe[0] and output is via stdout.
            dup2(p[0], 0);
            close(p[1]);

  r = execvp("grep", grep_args);
            close(p[0]);
