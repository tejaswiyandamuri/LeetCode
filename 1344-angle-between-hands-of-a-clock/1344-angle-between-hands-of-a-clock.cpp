// class Solution {
// public:
//     double angleClock(int hour, int minutes) {
//         double min_at=minutes/5;
//         double values_between_hm=min_at-hour;
//         if(values_between_hm<0)
//             values_between_hm*=-1;
//         double to_remove=(double)minutes/2.0;
//         double angle=(values_between_hm*30)-to_remove;
//         if(angle<0)
//             angle*=-1;
//         return angle;
//     }
// };
class Solution {
public:
    double angleClock(int hour, int minutes) {
        if (hour == 12) hour = 0;

        double hourAngle = hour * 30.0 + minutes * 0.5;
        double minuteAngle = minutes * 6.0;

        double angle = abs(hourAngle - minuteAngle);

        return min(angle, 360.0 - angle);
    }
};