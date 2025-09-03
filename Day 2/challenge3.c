#include <stdio.h>

int main() {
 
 double prices[6]={4,5,7,2,3,5};
 int i;
 double max = prices[0];
 double min = prices[0];

 for ( i= 0;i<6;i++){
     
          if (prices[i] > max) {
            max = prices[i]; 
        } if ( prices[i]<min){
          min =  prices[i] ;
            
        }

        for (int j =0;j<6;j=i+1){

           int var = prices[i];
           prices[i]=prices[j];
           var = prices[j];



        }

 }
     printf("the max number is  :%.2lf",max);
     printf("\nthe min number is  :%.2lf",min);
for (i=0;i<6;i++){

    printf("\n the order of numbers  :%lf",prices[i])
}
    return 0;
}
