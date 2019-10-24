//
// Created by PC on 9/9/2019.
//

#ifndef GOOGLEPLAYAPPS_APPLICATIONS_H
#define GOOGLEPLAYAPPS_APPLICATIONS_H

#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>

using namespace std;

class Applications {
private:
    string name;
    string category;
    float rating{};
    string reviews;
    string size;
    int installs{};
    string type;
    float price{};
    string contentRating;
    string genre;
    string lastUpdated;
    string currentVer;
    string androidVer;

public:

    // Default Constructor
    Applications() {
        this->name = "Outdoor Adventure";
        this->category = "Offline";
        this->rating = 5.0;
        this->reviews = "0";
        this->size = "0M";
        this->installs = 0;
        this->type = "Free?";
        this->price = 0.00;
        this->contentRating = "Everyone";
        this->genre = "Pick your own adventure";
        this->lastUpdated = "Right";
        this->currentVer = "???";
        this->androidVer = "9.0";
    }

    // Copy constructor
    Applications(const Applications &apps) {
        this->name = apps.name;
        this->category = apps.category;
        this->rating = apps.rating;
        this->reviews = apps.reviews;
        this->size = apps.size;
        this->installs = apps.installs;
        this->type = apps.type;
        this->price = apps.price;
        this->contentRating = apps.contentRating;
        this->genre = apps.genre;
        this->lastUpdated = apps.lastUpdated;
        this->currentVer = apps.currentVer;
        this->androidVer = apps.androidVer;
    }

    Applications(string &appName, string &appCategory, float &appRating, string &appReviews, string &appSize, int &appInstalls, string &appType, float &appPrice, string &appContentRating, string &appGenres, string &appLastUpdated, string &appCurrentVer, string &appAndroidVer) {
        this->name = appName;
        this->category = appCategory;
        this->rating = appRating;
        this->reviews = appReviews;
        this->size = appSize;
        this->installs = appInstalls;
        this->type = appType;
        this->price = appPrice;
        this->contentRating = appContentRating;
        this->genre = appGenres;
        this->lastUpdated = appLastUpdated;
        this->currentVer = appCurrentVer;
        this->androidVer = appAndroidVer;
    }

    /*
     * Requires: nothing
     * Modifies: nothing
     * Effects: Returns the application name
     */

    string getName() const {
        return this->name;
    }

    /*
     * Requires: nothing
     * Modifies: nothing
     * Effects: Returns the category name
     */

    string getCategory() const {
        return this->category;
    }

    /*
     * Requires: nothing
     * Modifies: nothing
     * Effects: Returns the application rating
     */

    float getRating() const {
        return this->rating;
    }

    /*
     * Requires: nothing
     * Modifies: nothing
     * Effects: Returns the number of reviews
     */

    string getReviews() const {
        return this->reviews;
    }

    /*
     * Requires: nothing
     * Modifies: nothing
     * Effects: Returns the file size
     */

    string getSize() const {
        return this->size;
    }

    /*
     * Requires: nothing
     * Modifies: nothing
     * Effects: Returns the number of installations
     */

    int getInstalls() const {
        return this->installs;
    }

    /*
     * Requires: nothing
     * Modifies: nothing
     * Effects: Returns the type of application license
     */

    string getType() const {
        return this->type;
    }

    /*
     * Requires: nothing
     * Modifies: nothing
     * Effects: Returns the application price
     */

    float getPrice() const {
        return this->price;
    }

    /*
     * Requires: nothing
     * Modifies: nothing
     * Effects: Returns the content rating for the application
     */

    string getContentRating() {
        return this->contentRating;
    }

    /*
     * Requires: nothing
     * Modifies: nothing
     * Effects: Returns the genre of the application
     */

    string getGenre() {
        return this->genre;
    }

    /*
     * Requires: nothing
     * Modifies: nothing
     * Effects: Returns the date the application was updated
     */

    string getLastUpdated() {
        return this->lastUpdated;
    }

    /*
     * Requires: nothing
     * Modifies: nothing
     * Effects: Returns the current version of the application
     */

    string getCurrentVersion() {
        return this->currentVer;
    }

    /*
     * Requires: nothing
     * Modifies: nothing
     * Effects: Returns the android version the application is designed for
     */

    string getAndroidVersion() {
        return this->androidVer;
    }

    /*
     * Requires: @param appName - String containing the new name for the application
     * Modifies: @field app - String containing the old name of the application
     * Effects: Sets the application name
     */

    void setName(string &appName){
        this->name = appName;
    }

    /*
     * Requires: @param appCategory - String containing the new category for the application
     * Modifies: @field category - String containing the old category of the application
     * Effects: Sets the application category
     */

    void setCategory(string &appCategory){
        this->category = appCategory;
    }

    /*
     * Requires: @param appRating - String containing the new rating value for the application
     * Modifies: @field rating - String containing the old rating of the application
     * Effects: Sets the application rating
     */

    void setRating(float &appRating) {
        this->rating = appRating;
    }

    /*
     * Requires: @param appReviews - String containing the new number for application reviews
     * Modifies: @field reviews - String containing the old number of application reviews
     * Effects: Sets the application reviews
     */

    void setReviews(string &appReviews) {
        this->reviews = appReviews;
    }

    /*
     * Requires: @param appSize - String containing the new file size of the application
     * Modifies: @field size - String containing the old application size
     * Effects: Sets the application file size
     */

    void setSize(string &appSize){
        this->size = appSize;
    }

    /*
     * Requires: @param appReviews - String containing the new number of application installs
     * Modifies: @field rating - String containing the old number of application installs
     * Effects: Sets the number of installations
     */

    void setInstalls(int &appInstalls){
        this->installs = appInstalls;
    }

    /*
     * Requires: @param appReviews - String containing the license of the application
     * Modifies: @field rating - String containing the license of the application
     * Effects: Sets the application license
     */


    void setType(string &appType){
        this->type = appType;
    }

    /*
     * Requires: @param appReviews - String containing the price of the application
     * Modifies: @field rating - String containing the price of the application
     * Effects: Sets the application price
     */

    void setPrice(float &appPrice){
        this->price = appPrice;
    }

    /*
     * Requires: @param appContentRating - String containing the new content rating of the application
     * Modifies: @field rating - String containing the old content rating of the application
     * Effects: Sets the application rating
     */

    void setContentRating(string &appContentRating) {
        this->contentRating = appContentRating;
    }

    /*
     * Requires: @param appGenre - String containing the new genre of the application
     * Modifies: @field appGenre - String containing the old genre of the application
     * Effects: Sets the application genre
     */

    void setGenre(string &appGenre) {
        this->genre = appGenre;
    }

    /*
     * Requires: @param appUpdated - String containing the new update date
     * Modifies: @field lastUpdated - String containing the last time the application was updated
     * Effects: Sets the application update date
     */

    void setLastUpdated(string &appUpdated) {
        this->lastUpdated = appUpdated;
    }

    /*
     * Requires: @param appUpdated - String containing the new application version number (int.int.int...etc format)
     * Modifies: @field lastUpdated - String containing the old application version number
     * Effects: Sets the application version number
     */

    void setCurrentVersion(string &appVersion) {
        this->currentVer = appVersion;
    }

    /*
     * Requires: @param appUpdated - String containing the new android version number (int.int.int...etc format)
     * Modifies: @field lastUpdated - String containing the old android version number
     * Effects: Sets the android version number
     */

    void setAndroidVersion(string &appAndroidVer) {
        this->androidVer = appAndroidVer;
    }

    /*
     *  Requires:   @param &lhs - Appplication to compare in less than equality operator.
     *              @param &rhs - Application to compare in less than equality operator.
     *  Modifies:   nothing
     *  Effects:    Returns true if the left hand side application name appears first alphabetically.
     */

    bool friend operator < (const Applications &lhs, const Applications &rhs) {
        return (lhs.getName() < rhs.getName());
    }

    /*
     *  Requires:   @param &lhs - Appplication to compare in less than equality operator.
     *              @param &rhs - Application to compare in less than equality operator.
     *  Modifies:   nothing
     *  Effects:    Returns true if the right hand side application name appears first alphabetically.
     */

    bool friend operator > (const Applications &lhs, const Applications &rhs) {
        return (lhs.getName() > rhs.getName());
    }

    /*
     *  Requires:   @param &lhs - Appplication to compare in less than equality operator.
     *              @param &rhs - Application to compare in less than equality operator.
     *  Modifies:   nothing
     *  Effects:    Returns true if the left hand side application name appears first alphabetically.
     */

    bool friend operator == (const Applications &lhs, const Applications &rhs) {
        return (lhs.getName() == rhs.getName());
    }

    /*
     * Requires: @param appUpdated - String containing the new android version number (int.int.int...etc format)
     * Modifies: @field lastUpdated - String containing the old android version number
     * Effects: Sets the android version number
     */

    friend ostream& operator << (ostream &travelingSalesman, Applications app) {
        travelingSalesman << setw(22) << app.getName().substr(0,20);
        travelingSalesman << setw(15) << app.getCategory().substr(0, 13);
        travelingSalesman << setw(8) << app.getRating();
        travelingSalesman << setw(8) << app.getReviews();
        travelingSalesman << setw(5) << app.getSize();
        travelingSalesman << setw(10) << app.getInstalls();
        travelingSalesman << setw(10) << app.getType();
        travelingSalesman << setw(6) << app.getPrice();
        travelingSalesman << setw(10) << app.getContentRating().substr(0, 8);
        travelingSalesman << setw(6) << app.getGenre().substr(0, 4);
        travelingSalesman << setw(9) << app.getLastUpdated();
        travelingSalesman << setw(5) << app.getCurrentVersion().substr(0, 3);
        travelingSalesman << setw(5) << app.getAndroidVersion().substr(0, 3);
        travelingSalesman << endl;
        return travelingSalesman;
    }
};

    /*
    * Requires: @param vector<Applications> applications - Vector passed by reference from main function to encapsulate app data.
    * Modifies: nothing
    * Effects: Calculates the value of an application based on price, installs, and rating.
    */

    vector<float> applicationValueCalculator(vector<Applications> &applications) {
        vector<float> appValue;
        float price;
        float applicationValue;
        for(Applications app : applications) {
            price = app.getPrice();
            if(price <= 0) {
                applicationValue = app.getInstalls()*app.getRating();
            }
            else {
                applicationValue = app.getInstalls()*app.getRating()/price*100;
            }
            appValue.emplace_back(applicationValue);
            cout << "Application: " << setw(20) << app.getName().substr(0,20) << "Calculated Value (Installs*Rating/Price): " << applicationValue << endl;
        }
        return appValue;
    }


    /*
    * Requires: @param &fileName - String containing filename to access in the parent directory,
    *           @param vector<Applications> applications - Vector passed by reference from main function to encapsulate app data.
    * Modifies: @field allfields - App,Category,Rating,Reviews,Size,Installs,Type,Price,Content Rating,Genres,Last Updated,Current Ver,Android Ver
    * Effects: Creates and stores application data
    */

void readApplicationsFromFile(string &fileName, vector<Applications> &applications) {
        string applicationName;
        string categoryName;
        float applicationRating;
        string applicationReviews;
        string fileSize;
        int applicationInstalls;
        string applicationType;
        float applicationPrice;
        string applicationContentRating;
        string applicationGenre;
        string applicationLastUpdated;
        string currentVersion;
        string androidVersion;
        string header;
        char comma;
        string error;

        ifstream appStream;

        appStream.open("../" + fileName);


        getline(appStream, header);

        while(appStream && appStream.peek() != EOF) {
            getline(appStream, applicationName, ',');
            if(!appStream){
                appStream >> error;
                cout << error;
            }
            getline(appStream, categoryName, ',');
            if(!appStream){
                appStream >> error;
                cout << error;
            }
            appStream >> applicationRating;
            appStream >> comma;
            if(!appStream){
                appStream >> error;
                cout << error;
            }
            getline(appStream, applicationReviews, ',');
            getline(appStream, fileSize, ',');
            if(!appStream){
                appStream >> error;
                cout << error;
            }
            appStream >> applicationInstalls;
            appStream >> comma;
            if(!appStream){
                appStream >> error;
                cout << error;
            }
            getline(appStream, applicationType, ',');
            if(!appStream){
                appStream >> error;
                cout << error;
            }
            appStream >> applicationPrice;
            appStream >> comma;
            if(!appStream){
                appStream >> error;
                cout << error;
            }
            getline(appStream, applicationContentRating, ',');
            if(!appStream){
                appStream >> error;
                cout << error;
            }
            getline(appStream, applicationGenre, ',');
            if(!appStream){
                appStream >> error;
                cout << error;
            }
            getline(appStream, applicationLastUpdated, ',');
            if(!appStream){
                appStream >> error;
                cout << error;
            }
            getline(appStream, currentVersion, ',');
            if(!appStream){
                appStream >> error;
                cout << error;
            }
            getline(appStream, androidVersion);
            if(!appStream){
                appStream >> error;
                cout << error;
            }
            applications.emplace_back(Applications(applicationName, categoryName, applicationRating, applicationReviews, fileSize, applicationInstalls, applicationType, applicationPrice, applicationContentRating, applicationGenre, applicationLastUpdated, currentVersion, androidVersion));
        }
        appStream.close();
    }

    /*
    * Requires: googleplaystore.csv in parent directory
    * Modifies: nothing
    * Effects: Tests all member functions and global functions of this class.
    */

    void testApplicationsClass() {
        string fish = "herring";
        int weight = 20;
        float value = 1.0;
        string size = "20lb";
        string date = "9/15/2008";
        cout <<  "Testing the default constructor" << endl;
        Applications newApplication;
        cout << "Testing the overloaded operator" << endl;
        cout << left << newApplication;
        cout << "Testing read file system." << endl;
        vector<Applications> testVector;
        string filename = "googleplaystore.csv";
        readApplicationsFromFile(filename, testVector);
        cout << testVector.size() << endl;
        if(testVector.size() >= 10841) {
            cout << "Test vector success. All applications from Google Play Store loaded." << endl;
        }
        else {
            cout << "Test failed. Number of applications loaded is less than 10842." << endl;
            int readInFailurPoint = testVector.size()-1;
            cout << "Loading object failure detected at line" << readInFailurPoint << endl;
        }
        cout << "Application value calculator." << endl;
        applicationValueCalculator(testVector);
        cout << "Testing getters and setters on test application with a 20 lb fish." << endl;
        newApplication.setName(fish);
        cout << "Name the " << newApplication.getName() << endl;
        newApplication.setCategory(fish);
        cout << "Category please " << newApplication.getCategory() << endl;
        newApplication.setRating(value);
        cout << "Rate the smell " << newApplication.getRating() << endl;
        newApplication.setReviews(fish);
        cout << "The reviews for your rating are in: " << newApplication.getReviews() << endl;
        newApplication.setSize(size);
        cout << "If you don't believe me get the size: " << newApplication.getSize() << endl;
        newApplication.setInstalls(weight);
        cout << "It is hard to download a fish, but you can make " << newApplication.getInstalls() << endl;
        newApplication.setType(size);
        cout << "How much sushi could a " << newApplication.getType() << endl;
        newApplication.setPrice(value);
        cout << "Pound fish fetch at market? " << newApplication.getPrice() << endl;
        newApplication.setContentRating(fish);
        cout << newApplication.getContentRating();
        newApplication.setGenre(fish);
        cout << " " << newApplication.getGenre();
        newApplication.setLastUpdated(date);
        cout << "Date purchased: " << newApplication.getLastUpdated();
        newApplication.setCurrentVersion(size);
        cout << "Fish version: " << newApplication.getCurrentVersion();
        newApplication.setAndroidVersion(size);
        cout << "Market version: " << newApplication.getAndroidVersion();
        // Output 1000+1 applications (for good measure)
        cout << setw(22) << left << "Application Name" << setw(15) << "Category" << setw(8) << "Rating" << setw(8) << "Reviews" << setw(5) << "Size" << setw(10) << "Downloads" << setw(10) << "License" << setw(6) << "Price" << setw(10) << "Content" << setw(6) << "Genre" << setw(9) << "vDate" << setw(5) << "vApp" << setw(5) << "vDroid" << endl;
        cout << setw(120) << setfill('-') << '-' << setfill(' ') << endl;
        for(int i = 0; i < 1001; i++) {
            cout << testVector[i] << endl;
        }
    }


#endif //GOOGLEPLAYAPPS_APPLICATIONS_H