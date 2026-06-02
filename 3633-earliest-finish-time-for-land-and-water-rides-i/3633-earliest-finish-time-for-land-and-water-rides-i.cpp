class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime,vector<int>& landDuration,vector<int>& waterStartTime,vector<int>& waterDuration) {
        int water = INT_MAX, land = INT_MAX;
        for (int i = 0; i < landStartTime.size(); i++) {
            int landendsat = landStartTime[i] + landDuration[i];
            for (int j = 0; j < waterStartTime.size(); j++) {
                int total=0;
                if(waterStartTime[j]>landendsat)
                    total=waterStartTime[j]+waterDuration[j];
                else
                    total=landendsat+waterDuration[j];
                land = min(land, total);
            }
        }
        for (int i = 0; i < waterStartTime.size(); i++) {
            int waterendsat = waterStartTime[i] + waterDuration[i];
            for (int j = 0; j < landStartTime.size(); j++) {
                int total=0;
                if(landStartTime[j]>waterendsat)
                    total=landStartTime[j]+landDuration[j];
                else
                    total=waterendsat+landDuration[j];
                water = min(water, total);
            }
        }
        return min(land, water);
    }
};