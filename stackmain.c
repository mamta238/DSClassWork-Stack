#include<stdio.h>
#include<malloc.h>
#include "dec.c"
#include "stackheader.h"
#include "stackfunc.c"

#define INPUT stdin
#define OUTPUT stdout 


int main(void)
{
 int option,retval,element;
  stack *top=NULL;
 do
 {
   fprintf(OUTPUT,"\n\n\n1.Push\n2.Pop\n3.IsEmpty\n4.Peek\nEnter Option:");
   fscanf(INPUT,"%d",&option);
   switch(option)
   {
     case 1:fprintf(OUTPUT,"\nEnter the element to be pushed:");
     		fscanf(INPUT,"%d",&element);
     		retval=push(&top,element);
     		if(retval==0)
     		 fprintf(OUTPUT,"\nCannot Push");
     		else 
     		 fprintf(OUTPUT,"\nTop:%d",retval);
     		break; 
     		
     case 2:if(isEmpty(&top))
     		 fprintf(OUTPUT,"\nStack Empty");
     		else 
     		 {
     		  retval=pop(&top);
     		  fprintf(OUTPUT,"\nElement:%d",retval);
     		 }     		   
     		 break;
     		 
     case 3:if(isEmpty(&top))
     		 fprintf(OUTPUT,"\nStack Empty");
     		else
     		 fprintf(OUTPUT,"\nStack not Empty"); 
     		break;
     		
     case 4:if(isEmpty(&top))
     		fprintf(OUTPUT,"\nStack Empty");
     		else
     		{
     		retval=peek(&top);
     		fprintf(OUTPUT,"\nInit:%d",retval);
     		}
     		break;							
   }
  
 }while(option<5);
 return 0;
}

