//{ Driver Code Starts
 
#include <stdio.h>
#include <stdbool.h>
#include <string.h>


// } Driver Code Ends
//User function template for C
int isPalindrome(char  S[])
    {
        int len=0;
        while(S[len]){
            len++;
        }
        int j=len-1,i=0;
        char revStr[len-1];
        while(j>=0){
            revStr[j]=S[i];
            j--;
            i++;
        }
        for(int a=0;a<len;a++){
            if(revStr[a]!=S[a]){
                return 0;
            }
        }
        return 1;
    }

//{ Driver Code Starts.

int main() {
    
    int t;

    scanf("%d", &t);

    while(t--){
        char s[200005];
        scanf("%s", &s);
        if(isPalindrome(s)) printf("1\n");
        else  printf("0\n");
    }
    return 0;
}
// } Driver Code Ends