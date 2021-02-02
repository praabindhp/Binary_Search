#include<stdio.h> 
int BinarySearch(int *array, int n, int key) 
{ 
int low = 0, high = n-1, mid; 
 while(low <= high) 
{ 
 mid = (low + high)/2; 
 	if(array[mid] < key) 
 	{ 
	low = mid + 1; 
 	} 
 	else if(array[mid] == key) 
{ 
return mid; 
 	} 
 	else if(array[mid] > key) 
 	{ 
 	high = mid-1; 
}
} 
 return -1; 
} 
int main() 
{
int n=5;
int array[n];
int i,key,index;
        printf("\nEnter 5 Elements"); 
//scanf("%d",&n); 
        printf("\nEnter Elements : "); 
 for(i = 0;i < n;i++) 
{ 
scanf("%d",&array[i]); 
} 
	 for(i = 1;i < n;i++) 
{ 
 	if(array[i] < array[i - 1]) 
{ 
 printf("Given Input Is Not Sorted : \n"); 
 return 0; 
}
}
printf("Enter Key To Be Searched : "); 
scanf("%d",&key); 
index = BinarySearch(array,n,key); 
if(index==-1) 
{ 
printf("Element Not Found \n"); 
} 
else 
{ 
printf("Element Is At Index : %d\n",index); 
}
return 0;
}