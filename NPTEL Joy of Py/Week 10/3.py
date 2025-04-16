'''
Once upon a time in the land of Isomorphia, there were two ancient scrolls written in different languages. The wise king of Isomorphia wanted to know if these scrolls conveyed the same message or if they were completely different. He summoned his greatest coder, who had the magical power of Isomorphic Translation.

The challenge was to determine if every symbol in the first scroll could be mapped to exactly one symbol in the second scroll, without any two symbols sharing the same mapping. However, the order of symbols in both scrolls had to be preserved.

The coder had to write a function to check if the two scrolls were isomorphic or not.

Examples:

Input : s = "egg" , t = "add"

Output : true

Explanation : The 'e' in string s can be replaced with 'a' of string t.

The 'g' in string s can be replaced with 'd' of t.

Hence all characters in s can be replaced to get t.

Input : s = "apple" , t = "bbnbm"

Output : false

Explanation : One possible try can be:

The 'a' in string s can be replaced with 'n' of string t.

The 'p' in string s can be replaced by 'b' of string t.

The 'l' in string s can be replaced by 'm' of string t.

The 'e' in string s cannot be replaced by any character of string t as all the characters in string t are already mapped.

Hence all characters in s cannot be replaced to get t by this try. It can be proved that no solution exists for this example.


eg :    "paper"
        "title"             True

        "egg"
        "add"               True
'''


#
def isIsomorphic(s, t):
    if len(s) != len(t):
        return False

    s_map = {}
    t_map = {}

    for i in range(len(s)):
        char_s = s[i]
        char_t = t[i]

        if (char_s in s_map and s_map[char_s] != char_t) or (char_t in t_map and t_map[char_t] != char_s):
            return False

        s_map[char_s] = char_t
        t_map[char_t] = char_s

    return True
s = input()
t = input()
print(isIsomorphic(s, t))