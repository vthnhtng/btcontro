void reverse(char *s) {
    char *s2;
    s2 = new char[50];
    char *s3 = s2;
    while (*s != '\0'){
        *s2 = *s;
        s2++;
        s++;
    }
    s = s + strlen(s) -1;
    while (*s3 != '\0'){
        *s = *s3;
        s--;
        s3++;
    }
}
