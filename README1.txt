	For this lab experiment, Google Play Store applications were loaded with all their attributes. This includes application name, category, rating, number of reviews, file size, number of installs, license type, price, content rating, genre, date last updated, current software version, and android version when the application was designed. This data is available from google.com[1] or from Kaggle.com[2]. The data set is ordered by category, which provides a random sorting by name, rating, etc. The Applications class handles the information management for this project.
	Embedded within Application class is a testApplicationsClass() global function, which tests all getters and setters with a 20lb herring. See code below. It also tests all functions that are currently assigned to this class including applicationValueCalculator(Applications app) global function. This function calculates an application score based on the number of installs, rating, and price in cents. If the price is 0, then the function receives a score based on installations multiplied by rating. This allows free applications to have a larger score than similar purchasable applications and avoids the ratio increase for applications that cost less than one dollar. The function operation testing is built in to the terminal output as you can see below.
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
        cout << testVector[readInFailurPoint-1] << endl;
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
        cout << testVector[i];
    }

	The Applications class handles all 10842 Google Play Store applications without fault. This does require effective data scrubbing. Many applications within this database were attempts to expose design flaws in the file architecture, which would allow a malevolent actor to attack the Google servers. A great example of this is that multiple applications intentionally filled out its fields incorrectly in a systematic pattern, which caused errors in this program. PHP which only use arrays to store information is so loosely typed that this will not trigger an error unless there is proper data handling on the back end of the server. By uploading several fake applications, you can establish a solid metric that measures the time to upload to the server a new application. This metric when it deviates may be an indication that data handling has protections on those fields. Overall this was an interesting data set to encapsulate.
References:
1.	Google Play. https://play.google.com/store?hl=en_US. Accessed 10 Sept. 2019.
2.	Kaggle: Your Home for Data Science. https://www.kaggle.com/. Accessed 10 Sept. 2019.

