bool comparator(string a , string b)
{
    return a+b>b+a;
}
string Solution::largestNumber(const vector<int> &A) {
    vector<string>s;
    string r;
    for(int i = 0 ; i <A.size();i++)
    {
      s.push_back(to_string(A[i]));
    }
    sort(s.begin(),s.end(),comparator);
    for(int i=0;i<s.size();i++)
    {
       r+=s[i];

     }
int c=0;
while(r[c]=='0'&&c+1<r.size())
{

    c++;
}
return r.substr(c);}
