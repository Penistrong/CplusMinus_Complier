int main(){
    int a = 0, b = 1, i = 0, n;
    n = read();
    while(i < n){
        int c = a + b;
        write(b);
        a = b;
        b = c;
        i = i + 1;
    }
    return 0;
}