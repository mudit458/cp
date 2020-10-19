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
    //
    // }
};

class SegmentTree {
    vector<SegmentTree> st;
    // Constructor
public:
    template<typename T>
    SegmentTree(vector<T> input) {
    }

    // build()
    template<typename T>
    void build(int v, int tl, int tr, vector<T> &input) {
    }

    SegmentTreeNode merge(SegmentTreeNode left, SegmentTreeNode right) {
        SegmentTreeNode res;

        return res;
    }

    void update(int v, int tl, int tr, int delta, int pos)
    {

    }

    int query(int v, int tl, int tr, int l, int r)
    {

    }
};
