#define For(i, x, y) for(int i = x; i <= y; i++)
string toLower (string s)
{
    int l = s.length();
    For(i, 0, l - 1)
        if('A' <= s[i] && s[i] <= 'Z')
            s[i] = char((s[i] - '0') + 32 + '0');
    return s;
}
