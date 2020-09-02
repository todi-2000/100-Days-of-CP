//Question: https://leetcode.com/problems/reverse-vowels-of-a-string
class Solution
{
public:
    string reverseVowels(string s)
    {
        int first = 0, i, length = s.size(), end = length - 1;
        while (first < end)
        {
            if ((s[first] == 'a' || s[first] == 'e' || s[first] == 'i' || s[first] == 'o' || s[first] == 'u' || s[first] == 'A' || s[first] == 'E' || s[first] == 'I' || s[first] == 'O' || s[first] == 'U') && (s[end] == 'a' || s[end] == 'e' || s[end] == 'i' || s[end] == 'o' || s[end] == 'u' || s[end] == 'A' || s[end] == 'E' || s[end] == 'I' || s[end] == 'O' || s[end] == 'U'))
            {
                char temp = s[end];
                s[end] = s[first];
                s[first] = temp;
                first++;
                end--;
            }
            else if (s[first] == 'a' || s[first] == 'e' || s[first] == 'i' || s[first] == 'o' || s[first] == 'u' || s[first] == 'A' || s[first] == 'E' || s[first] == 'I' || s[first] == 'O' || s[first] == 'U')
                end--;
            else if (s[end] == 'a' || s[end] == 'e' || s[end] == 'i' || s[end] == 'o' || s[end] == 'u' || s[end] == 'A' || s[end] == 'E' || s[end] == 'I' || s[end] == 'O' || s[end] == 'U')
                first++;
            else
                first++, end--;
        }
        return s;
    }
};