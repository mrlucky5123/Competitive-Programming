#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// Brute Force Solution 
// void solve() {
//     ll n; cin >> n;
//     vector<ll> a(n);
//     for(auto& i : a) cin >> i;

//     ll ans = 0;
//     for(ll i = 0; i < n; i++) {
//         for(ll j = i + 1; j < n; j++) {
//             ans = max(ans, a[i] ^ a[j]);
//         }
//     }
//     cout << ans << endl;
// }

// Optimized Solution using Trie
struct Trie {
    ll ch[2];
    Trie() {
        ch[0] = ch[1] = -1;
    }
};

vector<Trie> trie;

void init() {
    trie.clear();
    trie.push_back(Trie());
}

void insert(ll x) {
    ll node = 0;
    for(ll i = 30; i >= 0; i--) {
        ll bit = (x >> i) & 1;
        if(trie[node].ch[bit] == -1) {
            trie[node].ch[bit] = trie.size();
            trie.push_back(Trie());
        }
        node = trie[node].ch[bit];
    }
}

ll query(ll x) {
    ll node = 0;
    ll result = 0;
    for(ll i = 30; i >= 0; i--) {
        ll bit = (x >> i) & 1;
        ll want = 1 - bit;
        if(trie[node].ch[want] != -1) {
            result |= (1LL << i);
            node = trie[node].ch[want];
        } else {
            node = trie[node].ch[bit];
        }
    }
    return result;
}

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto& i : a) cin >> i;

    init();
    ll ans = 0;
    for(ll i = 0; i < n; i++) {
        if(i > 0) ans = max(ans, query(a[i]));
        insert(a[i]);
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}


struct Node {
    Node *links[26];
    bool flag = false;
    bool containsKey(char ch) {
        return (links[ch - 'a'] != NULL);
    }

    void put(char ch, Node* node) {
        links[ch - 'a'] = node;
    }

    Node* get(char ch) {
        return links[ch - 'a'];
    }

    bool setEnd() {
        flag = true;
    }

    bool isEnd() {
        return flag;
    }
};

class Trie {
    private:
           Node* root;
    public:
        // Initialize your data structure here.
        Trie() {
            root = new Node();
        }

        // Inserts a word into the trie.
        void insert(string word) {
            Node* node = root;
            for(ll i = 0; i < word.size(); i++) {
                // if(node->links[word[i] - 'a'] == NULL) {
                //     node->links[word[i] - 'a'] = new Node();
                // }
                if(!node->containsKey(word[i])) {
                    node->put(word[i], new Node());
                }
                // moves to the reference trie node 
                node = node->get(word[i]);
            }
            node->setEnd();
        }


        bool search(string word) {
            Node* node = root;
            for(ll i = 0; i < word.size(); i++) {
                if(!node->containsKey(word[i])) return false;
                node = node->get(word[i]);
            }
            return node->isEnd();
        }

        bool startsWith(string prefix) {
            Node* node = root;
            for(ll i = 0; i < prefix.size(); i++) {
                if(!node->containsKey(prefix[i])) return false;
                node = node->get(prefix[i]); 
            }
            return true;
        }
}