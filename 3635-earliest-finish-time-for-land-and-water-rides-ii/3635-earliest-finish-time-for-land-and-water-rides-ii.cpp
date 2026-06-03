class Solution {
public:
    int earlytime(vector<int>& start1,vector<int>& duration1,vector<int>& start2,vector<int>& duration2){
        int res=INT_MAX,first_time=INT_MAX;
        for(int i=0;i<start1.size();i++){
            first_time=min(first_time,start1[i]+duration1[i]);
        }
        for(int i=0;i<start2.size();i++){
            res=min(res,max(first_time,start2[i])+duration2[i]);
        }
        return res;
    }
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int land=earlytime(landStartTime,landDuration,waterStartTime,waterDuration);
        int water=earlytime(waterStartTime,waterDuration,landStartTime,landDuration);
        return min(land,water);
    }
};