/*

 ▄▄▄       ██░ ██  ███▄ ▄███▓▓█████ ▓█████▄     ███▄    █  ▄▄▄      ▓█████▄▓██   ██▓
▒████▄    ▓██░ ██▒▓██▒▀█▀ ██▒▓█   ▀ ▒██▀ ██▌    ██ ▀█   █ ▒████▄    ▒██▀ ██▌▒██  ██▒
▒██  ▀█▄  ▒██▀▀██░▓██    ▓██░▒███   ░██   █▌   ▓██  ▀█ ██▒▒██  ▀█▄  ░██   █▌ ▒██ ██░
░██▄▄▄▄██ ░▓█ ░██ ▒██    ▒██ ▒▓█  ▄ ░▓█▄   ▌   ▓██▒  ▐▌██▒░██▄▄▄▄██ ░▓█▄   ▌ ░ ▐██▓░
 ▓█   ▓██▒░▓█▒░██▓▒██▒   ░██▒░▒████▒░▒████▓    ▒██░   ▓██░ ▓█   ▓██▒░▒████▓  ░ ██▒▓░
 ▒▒   ▓▒█░ ▒ ░░▒░▒░ ▒░   ░  ░░░ ▒░ ░ ▒▒▓  ▒    ░ ▒░   ▒ ▒  ▒▒   ▓▒█░ ▒▒▓  ▒   ██▒▒▒
  ▒   ▒▒ ░ ▒ ░▒░ ░░  ░      ░ ░ ░  ░ ░ ▒  ▒    ░ ░░   ░ ▒░  ▒   ▒▒ ░ ░ ▒  ▒ ▓██ ░▒░
  ░   ▒    ░  ░░ ░░      ░      ░    ░ ░  ░       ░   ░ ░   ░   ▒    ░ ░  ░ ▒ ▒ ░░
      ░  ░ ░  ░  ░       ░      ░  ░   ░                ░       ░  ░   ░    ░ ░
                                     ░                               ░      ░ ░
*/
#include<bits/stdc++.h>
#include <omp.h>
#include <stdio.h>
using namespace std;
#define nady ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double

#define mp make_pair
#define pb push_back
#define pf push_front
#define eb emplace_back
#define fi first
#define se second
#define pii pair<int,int>
#define rep(i,a,b) for(int i=(a);i<(b);++i)
#define per(i,a,b) for(int i=(a-1);i>=(b);--i)
int main()
{   
	nady
	int x,y;
	bool d=0;
	cin >> x>> y;
	for (int i = x; i <= y; i++)
	{
		if (i == 4 || i == 7 || i == 44 || i == 47 || i== 747 || i == 4747 || i == 77 || i == 74 || i == 444 || i == 447 || i == 474|| i == 477 || i == 744 || i == 774 || i == 777 || i == 4444 || i == 4447 || i == 4474 || i == 4477 || i == 4744 || i == 4774 || i == 4777 || i == 7444 || i == 7447 || i == 7474 || i ==7477 || i == 7744 || i == 7747 || i == 7774  || i == 7777 || i == 44444 || i == 44447 || i == 44474 || i ==44477|| i == 44744 || i == 44747 || i ==44774 || i ==44777 || i ==47444 || i ==47447 || i ==47474 || i ==47744 || i ==47747 || i ==47774 || i ==47777 || i ==74444 || i ==74447 || i ==74474 || i ==74477 || i ==74744 || i ==74747 || i ==74774 || i ==74777 || i ==77444 || i ==77447 || i ==77474 || i ==77477 || i ==77744 || i ==77747 || i ==77774 || i ==77777 ) {
			d = 1;
			if (d == 1)
				cout << i << " ";
 
 
 
		}
 
	}
	if (d == 0)
		cout << -1;
	
}

















