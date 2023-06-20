#pragma once
#include <string>

using namespace std;

class Review
{
private:
	long int bookingID, reviewID;
	int rating;
	string reviewText;
public:
	Review();
	Review(long int bookingID, long int reviewID, int rating, string reviewText);
	void setBookingID(long int bookingID);
	void setReviewID(long int reviewID);
	void setRating(int rating);
	void setReview(string reviewText);
	long int getBookingID();
	long int getReviewID();
	int getRating();
	string getReview();
};