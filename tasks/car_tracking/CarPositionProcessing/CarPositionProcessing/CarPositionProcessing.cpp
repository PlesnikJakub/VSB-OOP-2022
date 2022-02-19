#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <math.h> 

using namespace std;


struct Position {
    double lng;
    double lat;
};

bool ValidPosition(Position position)
{
    return !(position.lat == 0 && position.lng == 0);
}

vector<Position> LoadDrive(string filename)
{
    fstream fin;

    cout << "Loading file" << endl;
    // Open an existing file
    fin.open(filename, ios::in);

    vector<Position> drive;
    vector<string> row;
    string line, word, temp;
    fin >> temp;
    while (fin >> temp) {

        row.clear();

        // used for breaking words
        stringstream s(temp);

        // read every column data of a row and
        // store it in a string variable, 'word'
        while (getline(s, word, ';')) {
            word.erase(remove(word.begin(), word.end(), '"'), word.end());

            if (word.find(",") != std::string::npos)
            {
                word.replace(word.find(","), sizeof(","), ".");
            }
            
            row.push_back(word);
        }

        cout << row[0];
        cout << " ; ";
        cout << row[1] << endl;

        Position position = Position{ stod(row[0]), stod(row[1]) };
        if (ValidPosition(position))
        {
            drive.push_back(position);
        }
    }

    return drive;
}

long double toRadians(const long double degree)
{
    // cmath library in C++
    // defines the constant
    // M_PI as the value of
    // pi accurate to 1e-30
    long double one_deg = (M_PI) / 180;
    return (one_deg * degree);
}
 
long double distance(long double lat1, long double long1,
                     long double lat2, long double long2)
{
    // Convert the latitudes
    // and longitudes
    // from degree to radians.
    lat1 = toRadians(lat1);
    long1 = toRadians(long1);
    lat2 = toRadians(lat2);
    long2 = toRadians(long2);
     
    // Haversine Formula
    long double dlong = long2 - long1;
    long double dlat = lat2 - lat1;
 
    long double ans = pow(sin(dlat / 2), 2) +
                          cos(lat1) * cos(lat2) *
                          pow(sin(dlong / 2), 2);
 
    ans = 2 * asin(sqrt(ans));
 
    // Radius of Earth in
    // Kilometers, R = 6371
    // Use R = 3956 for miles
    long double R = 6371;
     
    // Calculate the result
    ans = ans * R;
 
    return ans;
}

long double ComputeDriveDistance(vector<Position> drive)
{
    double totalDistance = 0;
    for (int i= 0; i < drive.size() - 1; i++)
    {
        totalDistance += distance(drive[i].lat, drive[i].lng, drive[i + 1].lat, drive[i + 1].lng);
    }

    return totalDistance;
}

double getAvgSpeed(long double distance, double timeInSeconds)
{
    double hours = timeInSeconds / 3600;
    return distance / hours;
}

int main(int argc, char* argv[])
{
    string filename = "C:/Work/VSB/VSB-OOP-2022/tasks/car_tracking/car_position.csv";
    vector<Position> drives = LoadDrive(filename);
    double totalDistance = ComputeDriveDistance(drives);

    cout << totalDistance << endl;
    cout << getAvgSpeed(totalDistance, drives.size()*20) << endl;
}
