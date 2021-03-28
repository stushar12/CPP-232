vector<int> find(int a[], int n , int x )
{
vector<int> ans;
if (binary_search(a, a + n, x))
{
int f= (lower_bound(a,a+n,x))-a;
int z =(upper_bound(a,a+n,x))-a;
ans.push_back(f);
ans.push_back(z-1);
}
else
{
ans.push_back(-1);
ans.push_back(-1);
}
return ans;
}