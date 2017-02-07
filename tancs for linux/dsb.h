#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>
 
int kbhit(void)
{
  struct termios oldt, newt;
  int ch;
  int oldf;
 
  tcgetattr(STDIN_FILENO, &oldt);
  newt = oldt;
  newt.c_lflag &= ~(ICANON | ECHO);
  tcsetattr(STDIN_FILENO, TCSANOW, &newt);
  oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
  fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);
 
  ch = getchar();
 
  tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
  fcntl(STDIN_FILENO, F_SETFL, oldf);
 
  if(ch != EOF)
  {
    ungetc(ch, stdin);
    return 1;
  }
 
  return 0;
}
 
 
int lmain( int argc, char** argv )
{
    char *input = argv[0];
    int nomor = argc;
    pid_t pid = 0;
    /* set stuff up */
    /* accept command line args */
     
    pid = fork();
    if( pid == 0 ){
        /* this is the "background" process.  Execute process loop here */
        int x=0;    
        while(1)
        {
            if(kbhit())
              printf("you hit keyboard");
        }
    }
    else {
        /* "foreground" process exits */
        exit(0);
    }
}
