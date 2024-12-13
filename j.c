#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MIN_LENGTH 8

// パスワードの強度をチェックする関数
void checkPasswordStrength(const char *password) {
    int length = strlen(password);
    int hasLower = 0, hasUpper = 0, hasDigit = 0, hasSpecial = 0;
    int i;

    // パスワードの長さが8文字未満
    if (length < MIN_LENGTH) {
        printf("パスワードは8文字以上にしてください。\n");
    }

    // 各文字の種類をチェック
    for (i = 0; i < length; i++) {
        if (islower(password[i])) {
            hasLower = 1;
        } else if (isupper(password[i])) {
            hasUpper = 1;
        } else if (isdigit(password[i])) {
            hasDigit = 1;
        } else if (ispunct(password[i])) {
            hasSpecial = 1;
        }
    }

    // 大文字・小文字・数字・特殊文字が足りない場合
    if (!hasLower) {
        printf("小文字が不足しています。小文字を含めてください。\n");
    }
    if (!hasUpper) {
        printf("大文字が不足しています。大文字を含めてください。\n");
    }
    if (!hasDigit) {
        printf("数字が不足しています。数字を含めてください。\n");
    }
    if (!hasSpecial) {
        printf("特殊文字が不足しています。特殊文字を含めてください。\n");
    }

   

    // パスワードが強いかどうかを最終的に判断
    if (length >= MIN_LENGTH && hasLower && hasUpper && hasDigit && hasSpecial) {
        printf("パスワードは強いです。\n");
    }
}

int main() {
    char password[100];

    printf("パスワードを入力してください: ");
    scanf("%s", password);

    checkPasswordStrength(password);

    return 0;
}