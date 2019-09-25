#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    char arr[52][52] = {0};
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
        }
    }
    int cnt;
    int MAX = 0;

    for(int k = 0; k < N; k++)
    {
        for(int l = 0; l < N; l++)
        {
            swap(arr[k][l], arr[k][l+1]);
            for(int i = 0; i < N; i++)
            {
                cnt = 1;
                char temp = arr[i][0];
                for(int j = 1; j < N; j++)
                {
                    if(arr[i][j] == temp)
                    {
                        cnt++;
                    }
                    else
                    {
                        if(MAX < cnt) MAX = cnt;
                        cnt = 1;
                        temp = arr[i][j];
                    }

                }
                if(MAX < cnt) MAX = cnt;
                cnt = 1;
                temp = arr[0][i];
                for(int j = 1; j < N; j++)
                {
                    if(arr[j][i] == temp)
                    {
                        cnt++;
                    }
                    else
                    {
                        if(MAX < cnt) MAX = cnt;
                        cnt = 1;
                        temp = arr[j][i];
                    }
                }
                if(MAX < cnt) MAX = cnt;
            }
            swap(arr[k][l], arr[k][l+1]);
        }
    }
    for(int k = 0; k < N; k++)
    {
        for(int l = 0; l < N; l++)
        {
            swap(arr[k][l], arr[k+1][l]);
            for(int i = 0; i < N; i++)
            {
                cnt = 1;
                char temp = arr[i][0];
                for(int j = 1; j < N; j++)
                {
                    if(arr[i][j] == temp)
                    {
                        cnt++;
                    }
                    else
                    {
                        if(MAX < cnt) MAX = cnt;
                        cnt = 1;
                        temp = arr[i][j];
                    }

                }
                if(MAX < cnt) MAX = cnt;
                cnt = 1;
                temp = arr[0][i];
                for(int j = 1; j < N; j++)
                {
                    if(arr[j][i] == temp)
                    {
                        cnt++;
                    }
                    else
                    {
                        if(MAX < cnt) MAX = cnt;
                        cnt = 1;
                        temp = arr[j][i];
                    }
                }
                if(MAX < cnt) MAX = cnt;
            }
            swap(arr[k][l], arr[k+1][l]);
        }
    }


    cout << MAX;


    return 0;
}
