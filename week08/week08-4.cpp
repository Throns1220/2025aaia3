/// week08-4.cpp
/// �Ʀr�¬} �d���C�J�`�� 6174 (�j��p - �p��j - ���ƤC��)
#include <iostream>
#include <vector> /// ���Y�ۦp���}�C
#include <algorithm> /// �t��k sort()�O�t��k
using namespace std;
int main(){
    cout << "�п�J���N4���(�����ۦP):"; /// ex. 1 2 3 4
    int n;
    cin >> n;
    for(int i=0;i<7;i++){ /// �C�B��,���w����¬}6174
        vector<int> a; /// ���Y�ۦp���}�C
        while (n>0) { /// ��֪k, ��4���,�v�@��X��
                a.push_back(n%10); /// �⥦����}�C�̭�
                n /= 10; /// �駹��,�N�G�F
        }
        sort(a.begin(), a.end()); /// ��}�C�u�q�p��j�Ʀn�v
        int M = a[3]*1000 + a[2]*100 + a[1]*10 + a[0]; /// �˹L��, �j��p
        int m = a[0]*1000 + a[1]*100 + a[2]*10 + a[3]; /// �p��j
        /// M �O����? m �O����? �٨S�o��
        n = M - m;
        cout << M << "�" << m << "�o��:" << n << endl;
    }
}
