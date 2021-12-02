CODE 1
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int N=n;
        int s=N;
        while(N>=k)
        {
            s=s+N/k;
            N=N/k+N%k;
        }
        cout<<s<<endl;
    }
    return 0;
}

CODE 2

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int l,n,w,h;
    scanf("%d",&l);
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d",&w,&h);
        if(w<l|h<l)
        {
            printf("UPLOAD ANOTHER\n");
        }
        else if(w==l&&h==l)
        {
            printf("ACCEPTED\n");
        }
        else{
            printf("CROP IT\n");
        }
    }

       
    return 0;
}

CODE 3
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void TOH(int n,char A,char B,char C)
{
    if(n>0)
    {
        TOH(n-1,A,C,B);
        printf("Moving ring %d from %c to %c\n\n",n,A,C);
        TOH(n-1,B,A,C);
        
        
    }
}
int main() 
{
    int n;
    scanf("%d",&n);
    TOH(n,'A','B','C');
    
    return 0;
}