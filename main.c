#include <stdio.h>
#include <stdlib.h>


 void push(int array[],int*size,int element,int maxSize){
	
	if(*size<maxSize){
		array[*size++]=element;
	}
	else{
		printf("No place left \n");
	}
	
}
 int pop(int array[],int *size){
	if(*size>0){
		int poppedElement=array[--(*size)];
		return poppedElement;
	}
	else{
		printf("No element to delete");
		return -1;
	}
}
 void unshift(int array[],int*size,int element,int maxSize){
	if(*size<maxSize){
		int i;
		for(i=*size;i>0;i--){
			array[i]=array[i-1];
		}
		array[0]=element;
		(*size)++;
	}
		else{
			printf("Full");
		}
		
	}


main(){
       //Made the push function with maxSize 5 
	//If you want to use push, change the array[6] to array[5]
	int array[6]={1,2,3,4,5};
	int size=5;
	//push(array,&size,6,5);
	//int poppedElement=pop(array,&size);
	unshift(array,&size,6,6);
	int i;
	for(i=0;i<size;i++){
		printf("%d",array[i]);
	}
}
