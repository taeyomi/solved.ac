#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // N=0 일때는 max 값은 1이므로 ans를 1로 둔다.
    int N, a[10] = {}, ans = 1;
    cin >> N;

    // 자리수 추출
    while (N) { //정수 0을 제외한 값은 모두 1(true)의 값을 갖는다.
        a[N % 10]++;
        N /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (i == 6 || i == 9) continue;  //일단 6, 9박스일 경우를 제외했을때 최댓값
        ans = max(ans, a[i]);
    }
    // (a[6]+a[9])/2를 올림한 값이 6, 9에 대한 필요한 세트의 수이므로 (a[6]+a[9]+1)/2을 계산
    ans = max(ans, (a[6] + a[9] + 1) / 2);
    cout << ans;
}