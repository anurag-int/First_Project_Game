# include <stdio.h>
# include <stdlib.h>
# include <time.h>
int main()
{
    int number,guess,guess_no=1; 
    srand(time(0));
    number = rand()%100+1; 
    // printf("The number is %d \n",number);
    do
    {
         printf("Guess the number between 1 to 100 \n");
       scanf("%d",&guess);
       if(guess>number)
       {
           printf("Lower number please! \n");
       }
       else if (guess<number)
       {
           printf("Higher no please! \n");
       }
       else{
           printf("You have guess right in %d attempts \n",guess_no);
       }
       guess_no++;
    } while (guess!=number);
    return 0;

}

    
       
       