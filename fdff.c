#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){
    char users[100][100]={
        {"admin", "iwannabeelonmusk"},{"guest", "guest"}
    };
    char password[30];
    char input[10];
    printf("부곡고.io에 오신 것을 환영합니다.\n");
    printf("회원가입 또는 로그인을 입력하세요.\n");
    if(strcmp(input,"회원가입")==0){
        
    } else if(strcmp(input,"로그인")==0){

    } else {
        printf("잘못된 입력입니다. 다시 입력하세요.");
    }


}
