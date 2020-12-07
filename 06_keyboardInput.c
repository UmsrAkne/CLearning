#include <stdio.h>

int main(void)
{
    int data;

    // キーボードの入力を受け取るための関数。第一引数は入力変換指定子という。
    scanf("%d", &data);

    // scanf で受け取ったデータをここで表示する。
    printf("%d\n", data);

    // 実数も同じく表示可能だが、入力変換指定子は %lf を使用。出力変換指定子と異なるので注意
    double dData;
    scanf("%lf", &dData);
    printf("%f\n", dData);

    return 0;
}