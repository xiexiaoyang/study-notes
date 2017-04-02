#include <iostream>

using namespace std;


int quickSort2(int *p,int left, int right)
{
    int temp,i,j;
    temp = p[left];
    i = left;
    j = right;


    while(left > right)
         {
             while(p[j]>temp && i<j)
             {
                 j--;
             }
             if(i<j)
             {
                 p[i] = p[j];
                 i++;
             }

              while(p[i]<temp && i<j)
             {
                 i++;
             }
             if(i<j)
             {
                 p[j] = p[i];
                 j--;
             }
         }

         p[i] = temp;
         if(i == 2)
            return p[i];
         else if(i>2)
             return quickSort2(p, left, i-1);
         else
             return quickSort2(p, i+1, right);
}




int main()
{
    int arr[10] = {5,6,8,1,4,2,9,10,3,7};
    cout<<quickSort2(arr,0,10);
    return 0;
}
