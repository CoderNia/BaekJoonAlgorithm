#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int arr[10] = {0};
    int sum = 0;
    while(1){
        for(int i = 0; i<9; i++){
            scanf("%d", &arr[i]);
            sum += arr[i];
        }
        sort(arr, arr + 9);
        for(int i = 0; i<8;i++){
            for(int j = i + 1; j<9;j++){
                    if(sum - arr[i] - arr[j] == 100){
                        for(int l = 0; l<9;l++){
                            if((l!=i)&&(l!=j)){
                                printf("%d\n", arr[l]);
                            }
                            if(l == 8) goto EXIT;
                        }
                    }
            }
        }

    }
    EXIT:
    return 0;
}
