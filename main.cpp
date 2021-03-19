#include <map>
#include <fstream>
#include <iostream>
using namespace std;

//map of notes
map<int, double> music_notes()	{
    map<int, double> notes;
    notes.emplace(0, 0);
    notes.emplace(01, 32.70320);
    notes.emplace(-02, 34.64783);
    notes.emplace(02, 36.70810);
    notes.emplace(-03, 38.89087);
    notes.emplace(03, 41.20344);
    notes.emplace(04, 43.65353);
    notes.emplace(-05, 46.24930);
    notes.emplace(05, 48.99943);
    notes.emplace(-06, 51.91309);
    notes.emplace(06, 55.00000);
    notes.emplace(-07, 58.27047);
    notes.emplace(07, 61.73541);
    notes.emplace(11, 65.40693);
    notes.emplace(-12, 69.29566);
    notes.emplace(12, 73.41619);
    notes.emplace(-13, 77.78175);
    notes.emplace(13, 82.40689);
    notes.emplace(14, 87.30706);
    notes.emplace(-15, 92.49861);
    notes.emplace(15, 97.99886);
    notes.emplace(-16, 103.8262);
    notes.emplace(16, 110.0000);
    notes.emplace(-17, 116.5409);
    notes.emplace(17, 123.4708);
    notes.emplace(21, 130.8128);
    notes.emplace(-22, 138.5913);
    notes.emplace(22, 146.8324);
    notes.emplace(-23,155.5635);
    notes.emplace(23, 164.8138);
    notes.emplace(24, 174.6141);
    notes.emplace(-25, 184.9972);
    notes.emplace(25, 195.9977);
    notes.emplace(-26, 207.6523);
    notes.emplace(26, 220.0000);
    notes.emplace(-27, 233.0819);
    notes.emplace(27, 246.9417);
    notes.emplace(31, 261.6256);
    notes.emplace(-32,277.1826);
    notes.emplace(32, 293.6648);
    notes.emplace(-33, 311.1270);
    notes.emplace(33, 329.6276);
    notes.emplace(34, 349.2282);
    notes.emplace(-35, 369.9944);
    notes.emplace(35, 391.9954);
    notes.emplace(-36, 415.3047);
    notes.emplace(36, 440.0000);
    notes.emplace(-37, 466.1638);
    notes.emplace(37, 493.8833);
    notes.emplace(41, 523.2511);
    notes.emplace(-42, 554.3653);
    notes.emplace(42, 587.3295);
    notes.emplace(-43, 622.2540);
    notes.emplace(43, 659.2551);
    notes.emplace(44, 698.4565);
    notes.emplace(-45, 739.9888);
    notes.emplace(45, 783.9909);
    notes.emplace(-46, 830.6094);
    notes.emplace(46, 880.0000);
    notes.emplace(-47, 932.3275);
    notes.emplace(47, 987.7666);
    notes.emplace(51, 1046.502);
    notes.emplace(-52,1108.731);
    notes.emplace(52,1174.659);
    notes.emplace(-53,1244.508);
    notes.emplace(53,1318.510);
    notes.emplace(54,1396.913);
    notes.emplace(-55,1479.978);
    notes.emplace(55,1567.982);
    notes.emplace(-56,1661.219);
    notes.emplace(56,1760.000);
    notes.emplace(-57,1864.655);
    notes.emplace(57,1975.533);
    return notes;
}

//get the frequency from the notes
double getFreq(int x) {
    map<int,double> notes = music_notes();
    auto search = notes.find(x);
    if (search != notes.end()) {
        return search->second;
    } else {
        cout << "Error: cannot find note: \"" << x << "\", returning 0hz" << endl;
        return 0.0;
    }
}

int main() {
    //opening files
    string input_file_name;
    cout << "Input file name: ";
    cin >> input_file_name;
    string output_file_name = "frequencies_" + input_file_name;
    fstream input_file, output_file;
    input_file.open(input_file_name, ios::in);
    output_file.open(output_file_name, ios::out);

    //reading from input file
    if (input_file.is_open()) {
        string line;
        while(getline(input_file, line)) {
            //writing to new file
            output_file << getFreq(stoi(line)) << endl;
        }
    }
    input_file.close(), output_file.close();

}
