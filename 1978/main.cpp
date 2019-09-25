#include <iostream>
#include <algorithm>

using namespace std;

int sosu[250000] = {0};
int arr[250000] = {0};

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
    int T;
    era(250000);
    cin >> T;
    int sum = 0;
    for(int i = 0; i<T;i++){
        int temp;
        cin >> temp;
        if(sosu[temp] == 1) sum++;
    }
    cout << sum;

    return 0;
}
