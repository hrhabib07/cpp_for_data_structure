#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Circle
{
    int x, r;
};

bool compare(const Circle &a, const Circle &b)
{
    return a.x < b.x;
}

int countPoints(vector<Circle> &circles)
{
    sort(circles.begin(), circles.end(), compare);

    int result = 0;
    int currentX = -1e9 - 1;
    int currentR = 0;

    for (const auto &circle : circles)
    {
        int startX = max(currentX + 1, circle.x - circle.r);
        int endX = circle.x + circle.r;

        if (startX <= endX)
        {
            int overlapStart = max(startX, currentX - currentR);
            int overlapEnd = min(endX, currentX + currentR);

            if (overlapStart <= overlapEnd)
            {
                result += (overlapEnd - overlapStart + 1) * (2 * circle.r + 1);
            }

            currentX = max(currentX, endX);
            currentR = max(currentR, circle.r);
        }
    }

    return result;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<Circle> circles(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> circles[i].x;
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> circles[i].r;
        }

        cout << countPoints(circles) << endl;
    }

    return 0;
}