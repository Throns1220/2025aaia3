/// week05-2.cpp
/// ���xstringstream
#include <iostream> /// cin, cout, getline Ū�g���
#include <sstream> /// stringstream �ݭn��
#include <string> /// �ڭ̪��r�� string
using namespace std; /// �o��e���ѤF�[
int main(){
    cout << "�п�J�@�q�^��, �̭��i���Ů�: ";
    string s; /// �r�� S
    getline(cin, s); /// �@��Ū�J�@���,��Js
    cout << "Ū��Fs�r��: " << s << endl;

    stringstream ss(s); /// �N�r�� s �ܦ� ss
    string word; /// �r�� word
    while(ss >> word){
        cout << "��1�Ӧr: " << word << endl;
    }
}
