class Solution {
public:
    vector<int> inOrder(Node* root)
    {
        //code here
        vector<int> ans;
        
        stack<pair<Node *, int>> st;
        st.push({root,0});
        while(!st.empty()){
            Node * cur= st.top().first;
            int state= st.top().second;
            st.pop();
            if(cur==NULL)continue;
            if(state==0){
                st.push({cur,1});
                st.push({cur->left,0});
                
        
            }
            if(state==1){
                ans.push_back({cur->data});
                st.push({cur,2});
            }
            if(state ==2){
                st.push({cur->right,0});
            }
            
            
        }
        return ans;
        
    }
};

// { Driver Code Starts.

/* Driver program to test size function*/

  

int main() {

   
    int t;
    scanf("%d ", &t);
    while (t--) {
        string s, ch;
        getline(cin, s);
        
        Node* root = buildTree(s);

        vector<int> ans;
        Solution ob;
        ans = ob.inOrder(root) ;

        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";

        cout << endl;
     
    }
    return 0;
}
  // } Driver Code Ends
