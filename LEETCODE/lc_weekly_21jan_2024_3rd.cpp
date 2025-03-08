#include <bits/stdc++.h> // Include every standard library
using namespace std;
typedef long long ll;

int minimumPushes(string word)
{

    priority_queue<pair<int, char>, vector<pair<int, char>>, less<pair<int, char>>> pq;
    unordered_map<char, int> mp;
    for (int i = 0; i < word.size(); i++)
    {
        mp[word[i]]++;
    }
    for (auto &x : mp)
    {
        pq.push({x.second, x.first});
    }

    int cnt = 1;
    ll sum = 0;
    while (!pq.empty())
    {
        ll occ = pq.top().first;
        
        cout<<occ;
        if (cnt <= 8)
        {
            sum += occ * 1;
        }
        else if (cnt <= 16)
        {
            sum += occ * 2;
        }
        else if (cnt <= 24)
        {
            sum += occ * 3;
        }
        else
        {
            sum += occ * 4;
        }
        cnt++;
    }

    return sum;
}

int main(){
    string word = "abab";
    cout<<minimumPushes(word);
    return 0;}