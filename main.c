#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int target, guess;

    // 乱数の種を設定
    srand(time(0));
    target = rand() % 100 + 1;  // 1から100までのランダムな数字

    printf("1から100までの数を当ててください。\n");

    // 正解するまで繰り返す
    while (guess != target) {
        printf("数を入力してください: ");
        scanf("%d", &guess);

        if (guess > target) {
            printf("もっと小さいです。\n");
        } else if (guess < target) {
            printf("もっと大きいです。\n");
        } else {
            printf("正解です！\n");
        }
    }

    return 0;
}
