#include <stdio.h>
#define MAX_NUM 20

static int num;

void bubble_sort(int num_array[],int len);

int main(int argc,char *argv[]){
	int in_array[MAX_NUM];
	char c;
	printf("Please input the numper array:");
	
	//put the input number into array
	for(int i=0; i< MAX_NUM; i++){
		scanf("%d%c",&in_array[i],&c);
		if(c == '\n'){
			num=i+1;
			break;
		}
	}
	
	//verify the input
	printf("original: %d number in array:\n",num);
	for(int i=0;i < num;i++){
		printf("%d ",in_array[i]);
	}
	
	bubble_sort(in_array,num);
	
	printf("after sorting:number in array:");
	for(int i=0;i < num;i++){
		printf("%d ",in_array[i]);
	}
	
	return 0;
}

void bubble_sort(int num_array[],int len){
	int tmp=0;
	for(int j=0;j<len-2;j++)
		for(int i=0;i<len-1-j;i++){
			if(num_array[i]>num_array[i+1]){
				tmp = num_array[i];
				num_array[i]=num_array[i+1];
				num_array[i+1]=tmp;
			}
		}
}


















