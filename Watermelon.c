
#include <stdio.h>
#include<math.h>

int main()
{
    int weight; 
     
     scanf("%d", &weight);
     
     if ( weight >= 1 && weight <=100){
      
      int parts =  weight - 2;
      
     
     if ( parts >=2 && parts % 2 == 0 )
     
       printf("Yes\n");
       
     else 
     
      printf("No\n");
      }
    
       
       
       return 0;
}






