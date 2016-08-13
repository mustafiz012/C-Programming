#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc, tcp = 0, l, u, n, k, nom[6];

    freopen("in.txt","r", stdin);
    cin >> tc;

    while( tc-- ) {
        cin >> l >> u;
        cin >> n >> k;
        for(int i = 0;i < n;i++) {
            cin >> nom[i];
        }

        int total = (u - l) + 1;

        for(int i = l;i <= u;i++) {
            int blender = i;
            int co = 0;
            while(blender != 0) {
                int rem = blender % 10;
                blender /= 10;

                for(int j = 0;j < n;j++) {
                    if(rem == nom[j]) {
                        co++;
                        break;
                    }
                }
                if(co == k) {
                    total--;
                    break;
                }
            }
        }
        cout << "Case "<<++tcp<<":"<<total<<endl;
    }
}
