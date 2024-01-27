/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    
       vector<Interval>v;
    int n = intervals.size();
    int sm = newInterval.start;
    int em = newInterval.end;
    int x = min(sm,em);
    int y = max(sm,em);
    for(int i=0;i<n;i++){
        int si = intervals[i].start;
        int ei = intervals[i].end;
        if(x>=si && x<=ei){  // [x]y
            x=si;
        }else if(y>=si && y<=ei){ // x[y]
            y=ei;
        }else if(x<si && y<si){  // xy[]
            v.push_back(Interval(x,y));
            x=si;
            y=ei;
        }else if(x>ei){  //[]xy
            v.push_back(intervals[i]);
        }
    }
    v.push_back(Interval(x,y));
    return v;
}
