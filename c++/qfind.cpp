#include <iostream>

using namespace std;

void quickSort(int *p,int left, int right)
{
    int temp,i,j;
    temp = p[left];
    i = left;
    j = right;

    if (left != right)
    {
         while(i!=j)
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
 //cout<<"i:"<<i<<"  temp:"<<temp<<endl;
         if(i>1)
           quickSort(p, 0 ,i-1);
         if(j<right-1)
         quickSort(p, j+1, right);
    }


}

int quickSort2(int *p,int left, int right)
{
    int temp,i,j;
    temp = p[left];
    i = left;
    j = right;
    int a;

    while(i!=j&&left > right)
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
    for(int i=0;i<10;i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    quickSort(arr,0,10);
    for(int i=0;i<10;i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    cout<<quickSort2(arr,0,10);
    return 0;
}
