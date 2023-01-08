#include<string>
#include<set>
int main()
{
    set<string > invitations;
    fstream newfile;
    newfile.open("tpoint.txt", ios::out);  // open a file to perform write operation using file object
    if (newfile.is_open()) //checking whether the file is open
    {
        newfile << "Brooke Trout\nDinah Soars\nJed Dye\nBrooke Trout\nJed Dye\nPaige Turner \n";   //inserting text
        newfile.close();    //close the file object
        newfile.open("tpoint.txt", ios::in); //open a file to perform read operation using file object
        if (newfile.is_open()) {   //checking whether the file is open
            string tp;
            while (getline(newfile, tp)) { //read data from file object and put it into string.
                invitations.insert(tp); //print the data of the string
            }
            newfile.close(); //close the file object.
        }
    }
    for (auto i : invitations)
    {
        cout << i << '\n';
    }
}
