#include<stdio.h>
int main( ) 
{ 
    int odd(int); 
    int i,k,a[10]; 
    for(i=0;i<10;i++) 
    { 
        printf("Enter a[%d]",i); 
        scanf("%d",&a[i]); 
    } 
    for(i=0;i<10;i++) printf("a%d =  %d\n",i,a[i]); k=0; 
    for(i=0;i<10;i++) 
    { 
        if(!odd(a[i])) 
        { 
            k++; 
            printf("\n%d %d",a[i],k); 
        } 
    } 
    printf("%d",k); 
} 

int odd(int j)   
{ 	 
    if(j%2) 
    { 	  
 	 	return (1); 
  	} 	   	
    else 	 
  	{ 	  
 	 	return (0); 
    } 	
 } 