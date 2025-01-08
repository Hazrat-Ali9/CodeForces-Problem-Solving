#include <iostream>
#include<set>
using namespace std;
int main() {
	 int n;
	 cin>>n;
	 set<int> levels;
	  int q,y;
	  cin>>q;
	  for(int i=0;i<q;i++){
		  int x;
		  cin>>x;
		  levels.insert(x);
	  }
	  cin>>y;
	  for(int i=0;i<y;i++){
		  int w;
		  cin>>w;
		  levels.insert(w);
	  }
	  if(levels.size()==n)
		  cout<<"I become the guy.";
	  else
		  cout<<"Oh, my keyboard!";
	return 0;
}