#include<stdio.h>
int linear(int[],int);
int main(){
int keyelement,i;
int arr[10];
printf("enter 10 element:");
for(i=0;i<10;++)
{
	scanf("%d",&arr[i]);
}
printf("enter the number to search:");
scanf("%d",&keyelment);
if(linear(arr,keyelement))
printf("the element is found\n");
else
printf("the element is not found\n");
}
int linear(int arr[],int keyelement){
	for(int i=0;i<7;i++){
		if(arr[i]==keyelement){
			return 1;
		}
	}
	return 0;
}
	}
}
	)
}
