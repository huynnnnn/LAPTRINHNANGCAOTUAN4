#define For(i, x, y) for(int i = x; i <= y; i++)
string pigLatin(string word)
{
    string ans = "";
    int l = word.length();
    if(word[0] == 'u' || word[0] == 'e' || word[0] == 'o' || word[0] == 'a' || word[0] == 'i')
        return word + "way";
    else
    {
        For(i, 1, l - 1)
            ans = ans + word[i];
        ans = ans + word[0] + "ay";
        return ans;
    }
}
