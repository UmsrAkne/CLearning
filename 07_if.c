#include <stdio.h>

int main(void)
{
    int num = 10;
    int ans;

    // C言語では条件に数値を入力すると 0 が false, それ以外は true として判定される。
    // 何でも入るのは不安さを感じる。
    if (num)
    {
        printf("%d\n", num);
    }

    // 等価演算子は他の言語と同様（今の段階では）
    if (num == 10)
    {
        printf("%d\n", num);
    }

    // 等価演算子は 0 or 1 を返すらしいので、以下のような記述で 1 が ans に代入される。手品か？
    ans = num == 10;
    printf("%d\n", ans);

    // その他、関係演算子(<,>,<=,>=), 論理演算子(||,&&,!) は他言語と同様のようなので省略。

    return 0;
}