#include<stdio.h>

int main()
{
    int arr1[3] = {1, 2, 3};
    int arr2[3] = {4, 5, 6};
    int i = 0;
    int tmp = 0;
    int len;
    len = sizeof(arr1) / sizeof(arr1[0]);
    for(i = 0; i < len; i++)
    {
	printf("%d ", arr1[i]);
    }
    printf("\n");

    for(i = 0; i < len; i++)
    {
	printf("%d ", arr2[i]);
    }
    printf("\n");
    printf("*********************\n");

    for(i = 0; i < len; i++)
    {
	tmp = arr1[i];
	arr1[i] = arr2[i];
	arr2[i] = tmp;
    }
    for(i = 0; i < len; i++)
    {
	printf("%d ", arr1[i]);
    }
    printf("\n");

    for(i = 0; i < len; i++)
    {
  	printf("%d ", arr2[i]);
    }
    getchar();
    return;
}