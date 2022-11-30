/*
   CH-230-A
   a4_p3.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
//Library needed for pow () function
#include <math.h>
//Library needed for using INT_MAX constant
#include <limits.h>

//The prototype for the required functions
float geometric_mean (float arr[], int num);
float maximum (float arr[], int num);
float minimum (float arr[], int num);
float sum (float arr[],int num);

int main ()
{
    /*
    Declaring the required variables, in x we will read the float numbers
    from the keyboard and if they are valid we will store them in the 
    v array.
    n will be the length of the array as we increment it at every number
    added. Counter variable checks if we read more than 15 numbers
    */
    float x, v[15];
    int n=0,counter=0;
    /*
    We read the first float number and we check if it is valid. 
    The while loop checks so all the numbers we are reading are postivie
    and we don't read more than 15 numbers.
    If we read a valid input we put it into the array and increment the 
    counter
    */
    scanf("%f",&x);
    while (x>=0&&counter<15)
    {
        counter++;
        v[n++]=x;
        //If we are at the last number we don't want to read another one
        if(counter!=15)
            scanf("%f",&x);
        
    }
    //Reads the newline character after the last number
    getchar();
    //Reading the character required for the switch
    char c;
    scanf("%c",&c);
    switch (c)
    {
        
        case 'm':
            printf("The geometric mean is=%f\n",geometric_mean(v,n));
        break;
        
        case 'h':
            printf("The largest number in the array is=%f\n",maximum(v,n));
        break;
        
        case 'l':
            printf("The smallest number in the array is=%f\n",minimum(v,n));
        break;
        
        case 's':
            printf("The sum of the array=%f\n",sum(v,n));
        break;
    }

    return 0;
}

//Function that returns the geometric mean according to its definition
float geometric_mean(float arr[], int num)
    {
        float gmean=1;
        int i;
        for(i=0;i<num;i++)
            gmean=gmean*arr[i];
        
    /*
    Pow function helps us compute the power for some numbers.
    According to the definition the geometic mean is the product of all 
    numbers in the array to the power of 
    1/(the number of elements in the array)
    */
        gmean=pow(gmean,(float) 1/num);
        return gmean;
    }

//Function that returns the maximum element of the array
    float maximum (float arr[], int num)
    {
        float maximum=-1;
        int i;
        for(i=0;i<num;i++)
            if(arr[i]>maximum)
                maximum=arr[i];
        return maximum;
    }

//Function that returns the minimum element of the array
    float minimum (float arr[], int num)
    {
        float minimum=INT_MAX;
        int i;
        for(i=0;i<num;i++)
            if(arr[i]<minimum)
                minimum=arr[i];
        return minimum;

    }

//Function that returns the sum of the elements in the array
    float sum (float arr[], int num)
    {
        float sum=0;
        int i;
        for(i=0;i<num;i++)
            sum=sum+arr[i];
        return sum;
    }
