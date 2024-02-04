vector<vector<int> > Solution::diagonal(vector<vector<int> > &A)
{
   int n = A.size() + (A.size()-1);

    vector<vector<int>> ans;    

    for(int j=0;j<A[0].size();j++){

        int x= 1;

        int y = j-1;

        vector<int> temp;

        temp.push_back(A[0][j]);

       

        while(x<A.size() and y>=0){

            temp.push_back(A[x][y]);

            x++;

            y--;

        }

        ans.push_back(temp);

    }   

    for(int i=1;i<A.size();i++){

        int x = i+1;

        int y = A.size()-2;        

        vector<int> temp;

        temp.push_back(A[i][A.size()-1]);        

        while(x<A.size() and y>=0){

            temp.push_back(A[x][y]);

            x++;

            y--;

        }

        ans.push_back(temp);       

    }   

    return ans;
}
