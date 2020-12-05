# include <stdio.h>

int main(void){
    int value; 
    // 元々のC言語では変数の宣言は関数の先頭でのみ可能らしい。
    // C++ も扱えるコンパイラが多いため、普通にコンパイル可能なパターンが多いらしい。

    value = 10; // 代入は普通にやる
    printf("%d\n", value);              //出力変換指定子の中に変数を入れることも勿論可能。
    printf("%d\n", value * value);      //演算
    return 0;
}