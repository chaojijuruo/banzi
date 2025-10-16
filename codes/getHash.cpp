//0xbd34e948eb5b0a47

#include<bits/stdc++.h>
using namespace std;
//0xe17552a0c3c5a709
bool hasNonAscii(const string& str) {
    for (char ch : str) {
        if (ch> 127)
            return true;
    }
    return false;
}
//0x9550e801fe491d70
unsigned long long getStringHash(const string& str){
    unsigned long long res=0;
    for(size_t i=0;i<str.size();i++){
        char ch=str[i];
        unsigned long long p=ch;
        if(p>32&&p<127){
            res=131uLL*res+p;
        }
    }
    return res;
}
//0xe1faafc15b65b116
int main(){
    while(1){
        string p;p.clear();
        char ch;while((ch=getchar())!=EOF)p.push_back(ch);
        if(hasNonAscii(p))puts("Error");
        else printf("0x%016llx\n",getStringHash(p));
    }
    return 0;

}
//0x4b70854e03a1581a