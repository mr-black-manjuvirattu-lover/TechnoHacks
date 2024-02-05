#include<stdio.h>
#include<string.h>
int isPalindrome(char s[]){
    int left=0,right=strlen(s)-1;
    while(left<right){
        if(s[left]!=s[right]){
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}
int main(){
    char str[1000];
    printf("ENTER THE STRING:");
    scanf("%s",str);
    if(isPalindrome(str)){
        printf("%s is a Palindrome",str);
    }
    else{
        printf("%s is not a Palindrome",str);
    }
    return 0;
}
