#include <bits/stdc++.h>
using namespace std ;

#define inf 0x3f3f3f3f
#define INF 1000111000111000111LL
#define mod 1000000007
#define endl '\n'
#define mp make_pair
#define mt make_tuple
#define pb push_back
#define fi first
#define se second
#define all(cc) (cc).begin(),(cc).end()
using lli = long long int ;
using pii = pair<int, int> ;
using vi = vector<int> ;
using vb = vector<bool> ;
using vvi = vector<vector<int>> ;
using vlli = vector<long long int> ;
using vpii = vector<pair<int, int>> ;

#define pi acos(-1.0)
#define eps 1e-8

double L, x, y, a, b, c, d, p, q, r, s, t ;

double dist(double x1, double y1, double x2, double y2)
  {
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)) ;
  }

int main()
  {
    ios_base::sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0) ;
    cin>> a >> b >> c >> d >> x >> y >> L ;
    if(a==c && b==d) p=dist(a, b, x, y) ;
    else
      {
        r=dist(a, b, x, y) ; s=dist(c, d, x, y) ; t=dist(a, b, c, d) ;
        p=abs(x*(d-b)-y*(c-a)-a*d+b*c)/sqrt((d-b)*(d-b)+(c-a)*(c-a)) ;
        r=sqrt(r*r-p*p) ; s=sqrt(s*s-p*p) ;
        if(r+s-t>eps) p=min(dist(a, b, x, y), dist(c, d, x, y)) ;
      }
    q=max(dist(a, b, x, y), dist(c, d, x, y)) ;
    cout<< fixed << setprecision(2) << max(p-L, 0.0) << endl ;
    cout<< fixed << setprecision(2) << max(q-L, 0.0) << endl ;
  }
