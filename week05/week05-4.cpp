/// week05-4.cpp
/// LeetCode �ǲ߭p�e Bulit-In Functions ��2�D 709. To Lower Case
class Solution {
public:
    string toLowerCase(string s) {
        for (int i=0;i<s.length();i++){
            s[i] = tolower(s[i]);
        } /// �C�Ӧr��, ���ܦ��p�g (���㪩�n #include <ctype.h>)
        /// �άO�� #include <cctype> ��ӬO�P�@���ɮ�
        return s; /// ���װe�X�h
    }
};
