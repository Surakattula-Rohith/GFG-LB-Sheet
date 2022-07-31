#include <bits/stdc++.h>
using namespace std;
int middle(int A, int B, int C)
{

    // code here//Position this line where user code will be pasted.
    if (A > B)
    {
        swap(A, B);
    }
    if (C < A)
        return A;
    else if (B < C)
        return B;
    return C;
}