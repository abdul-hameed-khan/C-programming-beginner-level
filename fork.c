#include <stdio.h>
#include <sys/types.h> 
#include <unistd.h>
#include <stdlib.h>
void main(){
int id = fork();
//fork();
if (id == 0){// childs code
printf("i am chlid process and my parent id is : %d\n",getppid()); 
}
else{
printf("I am parent process and my chlid is: %d\n",id);

}

//printf("Chlid id is:%d\n",id);
//printf("Hello world\n");



}
