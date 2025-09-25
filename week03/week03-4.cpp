/// week03-4.cpp
/// LeetCode �D���D(�Ȫ����D) 120. Triangle ���̤W�����U�����̤p��
class Solution { /// �ϥΡu�ʺA�W���v
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        /// triangle[i][j] ��1�h����j�Ӽ�
        int N = triangle.size(); /// �`�@���X�h
        /// �q�U���W�d, �̤U������N-1�h,�S���D,�N�O�������̤p��, �ҥHN-2���W��s
        for(int i=N-2;i>=0;i--){ /// �˹L�Ӫ��j��, �qN-2���W
            for(int j=0;j<=i;j++){ /// �q����k, ��1�h�� 0..i�Ӽ�,���n��s
                triangle[i][j] += min(triangle[i+1][j], triangle[i+1][j+1]);
                /// �C�ӤH�A�n�ݥ��U��2�ӿ��(���U��B�U�谾�k),��̤p�����@��
            }
        }
        return triangle[0][0];
    }
};
