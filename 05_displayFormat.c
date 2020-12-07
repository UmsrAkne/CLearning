#include <stdio.h>

int main(void)
{
    // 以下のように指定すると間に入力した数字の桁数になるようスペースを挿入する。
    printf("%4d\n", 10);
    //    9

    // こっちは0埋め
    printf("%04d\n", 10);
    // 00007

    double pi = 3.14159;

    // 全体が6桁 小数点が1桁 小数部が2桁で表示
    printf("%6.2f\n", pi);

    return 0;
}
