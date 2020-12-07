#include <stdio.h>

int main(void)
{
    // 変数宣言は一度に行うことが可能。
    // 今回の場合は全て int で同時に宣言。
    int min, max, sum;

    printf("最小値と最大値を ',' で区切って入力してください : ");

    // 区切り記号は , を指定する。
    scanf("%d , %d", &min, &max);

    // 計算
    sum = (min + max) * (max - min + 1) / 2;

    // 表示
    printf("%d ~ %d の合計は %d です \n", min, max, sum);

    return 0;
}

//出力
//最小値と最大値を ',' で区切って入力してください : 1,10
//1 ~ 10 の合計は 55 です
