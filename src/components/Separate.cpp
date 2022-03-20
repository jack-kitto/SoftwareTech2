// Using code from: https://www.geeksforgeeks.org/tokenizing-a-string-cpp/

// // C/C++ program for splitting a string
// // using strtok()
// #include <stdio.h>
// #include <string.h>
 
// int main()
// {
//     char str[] = "Geeks-for-Geeks";
 
//     // Returns first token
//     char *token = strtok(str, "-");
 
//     // Keep printing tokens while one of the
//     // delimiters present in str[].
//     while (token != NULL)
//     {
//         printf("%s\n", token);
//         token = strtok(NULL, "-");
//     }
 
//     return 0;
// }

void separate(string data, string deliminator){
    cout << "Separate: " << data << " with: " << deliminator;
// void separate(char[] data, string deliminator){

    // char *token = strtok(data, deliminator);
    

    // while(token != nullptr){
    //     cout << token << "\n";
    //     token = strtok(nullptr, deliminator);
    // }
}