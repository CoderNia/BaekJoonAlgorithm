#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int sosu[1000000] = {0};
int arr[1000000] = {0};

void era(int N)
{
    for(int i = 2; i <= N;i++){
        arr[i] = i;
    }
    for(int i = 2; i <= N;i++){
        if(arr[i] != 0){
            sosu[i] = 1;
            for(int j = i;j <= N;j+=i){
                if(arr[j] != 0) {
                    arr[j] = 0;
                }
            }
        }
    }
}

int main()
{
    int temp = 1;
    era(1000000);
    while(1)
    {
        scanf("%d", &temp);
        if(temp == 0) break;
        else
        {
            for(int i = 2;i <= temp/2;i++)
            {
                if(sosu[i] == 1)
                {
                    if(sosu[temp - i] == 1)
                    {
                        printf("%d = %d + %d\n",temp,i,temp - i);
                        break;
                    }
                }
            }
        }
    }

    return 0;
}
