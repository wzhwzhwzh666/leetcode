int lengthOfLastWord(char* s) {
    int i=0;
    char*a=s;
    while(*s!='\0'){
        s+=1;
    }s-=1;
    while(s>=a&&*s==' '){
        s-=1;
    }
    while(s>=a&&*s!=' '){
        s-=1;
        i+=1;
    }
    return i;
}