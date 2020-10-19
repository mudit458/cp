# include <bits/stdc++.h>
using namespace std;

class SegmentTreeNode{
    // data members
public:
    // Default Constructor
    SegmentTreeNode();

    // paramenterized Constructor
    // SegmentTreeNode()
    // {
    // TODO
    // }
};

class SegmentTree {
    vector<SegmentTreeNode> st;
    // Constructor
public:
    template<typename T>
    SegmentTree(vector<T> input) {
        int n = input.size();
        st.resize(4*n);
        build(1, 0, n-1, input);
    }

    // build()
    template<typename T>
    void build(int v, int tl, int tr, vector<T> &input) {
        if (tl == tr)
        {
            // TODO
        }
        else
        {
            int tm = tl + (tr-tl)/2;
            int left = 2*v, right = 2*v+1;
            build(left, tl, tm, input());
            build(right, tm+1, tr, input);
            st[v] = merge(st[left], st[right]);
        }
    }

    SegmentTreeNode merge(const SegmentTreeNode left, const SegmentTreeNode right) {
        SegmentTreeNode res;
        // TODO
        return res;
    }

    void update(int v, int tl, int tr, int delta, int pos) {
        // completely outside
        if (pos > tr or pos < tl)
            return;
        if (tl == tr)
        {
            // TODO
        }
        else
        {
            int tm = tl + (tr-tl)/2;
            int left = 2*v, right = 2*v+1;
            update(left, tl, tm, delta, pos);
            update(right, tm+1, tr, delta, pos);
            st[v] = merge(st[left], st[right]);
        }
    }

    int query(int v, int tl, int tr, int l, int r)
    {

    }
};
