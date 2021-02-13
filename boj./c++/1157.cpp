#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
int main() {
    O;
    char s[1000001] = {0};
    int cnt[26] = {0};
    int max=0, index=-1;

    cin >>s;
    memset(cnt, 0, sizeof(cnt));

    int len=strlen(s);
    for(int i=0;i<len;i++){
        if('a'<= s[i] && s[i]<='z') s[i] -='a' -'A';
        cnt[s[i] - 'A'] ++;
    }
    for(int i=0;i<len;i++){
        if (max<cnt[s[i]-'A']){
            max = cnt[s[i]-'A'];
            index=i;
        }
    }
    int dup=0;
    for(int i=0;i<26;i++)
        if(max==cnt[i])
            dup++;

        if(dup==1) cout<<s[index];
        else cout<<"?\n";




    return 0;
}

