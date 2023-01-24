#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int shutdown( int timer); //shutdown func exc

int main(){

    shutdown(30);
    return 0;
}
 
shutdown(int timer){
    //Linux shutdown cmd
    char cmd[16] = "shutdown -r now";
    
    //create a timer for counting sec
    for(timer; timer >= 0; timer--){
       if(timer < 1){
        printf("Kill Host.\n");
       }
       else{
        printf("%d Seconds\n", timer);
       }
       sleep(1);
        if(timer == 0){
        printf("%s", "Bye.");
        //shutdown the host system
        system(cmd);
        break;
        }
    }

    return 0;
}




