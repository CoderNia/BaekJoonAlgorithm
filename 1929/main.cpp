#include <iostream>
#include <algorithm>

using namespace std;

int sosu[1299709] = {0};
int arr[1299709] = {0};

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
    int first, second;
    era(1299709);
    cin >> first >> second;
    for(int i = first;i <= second;i++)
    {
        if(sosu[i] == 1) cout << i << "\n";
    }

    return 0;
}
