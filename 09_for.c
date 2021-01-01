#include <stdio.h>

int main(void)
{
    int j = 1;
    int k = 1;
    int r = 0;
    double s = 0;

    for (int i = 0; i <= 10; i++)
    {
        printf("%02d : メッセージ\n", i);

        if (i > 3)
        {
            // もちろん break も可能
            break;
        }
    }

    // for文の書式は他言語とほぼ同じ
    // 但し、C言語の範囲では変数は先頭でまとめて宣言の必要があるらしいので、
    // そっちの環境では for の後に変数を宣言するようなやり方はしないほうがいいかも。

    // テキストの記述問題。掛け算九九の表を出力する
    for (j = 1; j < 10; j++)
    {
        for (k = 1; k < 10; k++)
        {
            printf("%02d ", j * k);
        }

        printf("\n");
    }

    // do while ループで入力チェックを行うサンプル
    do
    {
        printf("半径? : ");
        scanf("%d", &r);
    } while (r < 0);

    s = r * r * 3.14;
    printf("面積 : %f", s);
}