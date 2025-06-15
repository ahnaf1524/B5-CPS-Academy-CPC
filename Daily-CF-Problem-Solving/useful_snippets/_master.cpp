#include<bits/stdc++.h>
using namespace std;
int main() {
	int t,n,m,x,y;
	scanf("%d",&t);
	while(t--) {
		scanf("%d%d%d%d",&n,&m,&x,&y);
		m*=2;
		while(--n) {
			scanf("%d%d",&x,&y);
			m+=x+y;
		}
		printf("%d\n",m*2);
	}
}