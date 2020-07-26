#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 0, cnt = 0, result = 0;
    int h = 0, t = 0, o = 0;

    cin >> n;

    if(n < 100){
        result = n;
    }else{
        for(int i = 100; i <= n; i++){
            h = i / 100;
            t = (i % 100) / 10;
            o = (i % 100) % 10;
            if((h - t) == (t - o)){
                cnt++;
            }
        }
        result = 99 + cnt;
    }

    cout << result;

    return 0;
}