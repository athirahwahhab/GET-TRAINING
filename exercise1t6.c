//bubble sort //

#include<stdio.h>
#include<conio.h>

//global variable section//
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;

}

void bubble(int array[], int total)
{
    int i, j;
    for(i = 0; i < total-1; i++)


    for(j = 0; j < total - i - 1; j++)
    {
        if(array[j] > array[j + 1])
        {
            swap(&array[j], &array[j+1]);
        }
            
    }
}
//main function section//
int main()
{
    int i;
    int UA[] = {5,1,4,2,8};
    int total = sizeof(UA) / sizeof(UA[0]);
    bubble(UA, total);
    printf("Sorted Element using Bubble Sort Technique is: ");
    for(i = 0; i < total; i++)
    {
        printf("%d", UA[i]);
    }


    return 0;

}



