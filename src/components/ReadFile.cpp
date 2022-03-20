void ReadFile(){
    // Creation of ifstream class object to read the file
    vector<string> lines;
    ifstream fin;
    string line;
 
    // by default open mode = ios::in mode
    fin.open("/home/jack/Software_Technology_2/Assignments/Assignment_1/SoftwareTech2/data/NamesdataA1TxtTst.txt");
 
    // Execute a loop until EOF (End of File)
    while (fin) {
 
        // Read a Line from File
        getline(fin, line);
        lines.push_back(line);
 
        // // Print line in Console
        // cout << line << endl;
    }

    // Close the file
    fin.close();
 
}
