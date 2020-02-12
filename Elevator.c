#include <stdio.h>

int main () {

int isPlaying = 1;
while(isPlaying == 1){

   printf("What Floor Would you like to go to?");
   printf("The current floor is 1, The top floor is ENDLESS.");
   int currentfloor= 1;
   int desiredfloor;
   printf("Enter the floor you desire");
   scanf("%d", &desiredfloor);
   printf("\nYou clicked: %d\n", desiredfloor);


    if(desiredfloor>currentfloor){ //this is when their going up
   
   for(int i=currentfloor; currentfloor < desiredfloor; currentfloor++){
       printf("number of floors: %d\n", currentfloor);
   } 
        printf("going up! to %d\n DING\n", desiredfloor);

    }
    else if(desiredfloor<currentfloor){//this is when their going down
        for(int i=currentfloor; currentfloor > desiredfloor; currentfloor--){
            printf("number of floors: %d\n", currentfloor);
        } 
        printf("going down to %d\n Ding\n", desiredfloor);
    }   
    else{ //enter the floor you're already at.
        scanf("%d",&currentfloor);
        printf("you're already in the floor or you pushed an invalid floor");
    }

    currentfloor=desiredfloor;

}

   return 0;
}
