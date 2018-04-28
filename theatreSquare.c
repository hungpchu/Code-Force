#include <stdio.h>
#include<math.h>



int main()

{

    int n,m,a;

    double s;

  

    while(scanf("%d %d %d",&n,&m,&a)==3){

     
      
      
   s = ceil((double) n/ (double)a) * ceil((double)m/ (double)a) ;
     
     
       printf("%.0lf\n",s);

  

}

    return 0;

}

/*

int main()
{
    int n, m, a,s; 
     
     printf("Enter n, m, a: ");
     scanf("%d %d %d", &n, &m, &a);
     
     
    
      
      
     
     if ( n % a == 0  && m % a  == 0  )
     
      s = (n / a) * ( m / a );
       
     else 
     
     s = ((n / a) + 1)  * ((m  / a) + 1);
     
     
 
     
      printf("s= %d", s);
     
     
   
  
}
*/
