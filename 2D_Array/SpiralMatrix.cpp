#include <iostream>
#include <vector>

using namespace std;

vector<int> spiralCopy(vector<vector<int>> &inputMatrix)
{
    int left = 0, right = inputMatrix[0].size() - 1, top = 0, bottom = inputMatrix.size() - 1;
    vector<int> res;
    while (left <= right && top <= bottom)
    {
        for (int i = left; i <= right; i++)
        {
            res.push_back(inputMatrix[top][i]);
        }
        top++;
        if (top <= bottom)
        {
            for (int i = top; i <= bottom; i++)
            {
                res.push_back(inputMatrix[i][right]);
            }
        }
        right--;
        if (left <= right)
        {
            for (int i = right; i >= left; i--)
            {
                res.push_back(inputMatrix[bottom][i]);
            }
        }
        bottom--;
        if (top <= bottom)
        {
            for (int i = bottom; i >= top; i--)
            {
                res.push_back(inputMatrix[i][left]);
            }
        }
        left++;
    }
    return res;
}

int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> v(m, vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }
    vector<int> res = spiralCopy(v);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " " << endl;
    }
    return 0;
}
