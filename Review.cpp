#include "Review.h"
#include <string>
using namespace std;

Review::Review() : rating(0), reviewID(0), reviewText(""), bookingID(0) {}
Review::Review(long int bookingID, long int reviewID, int rating, string reviewText) {
	this->bookingID = bookingID;
	this->reviewID = reviewID;
	this->rating = rating;
	this->reviewText = reviewText;
}
void Review::setBookingID(long int bookingID) {
	this->bookingID = bookingID;
}
void Review::setReviewID(long int reviewID) {
	this->reviewID = reviewID;
}
void Review::setRating(int rating) {
	this->rating = rating;
}
void Review::setReview(string reviewText) {
	this->reviewText = reviewText;
}
long int Review::getBookingID() {
	return bookingID;
}
long int Review::getReviewID() {
	return reviewID;
}
int Review::getRating() {
	return rating;
}
string Review::getReview() {
	return reviewText;
}