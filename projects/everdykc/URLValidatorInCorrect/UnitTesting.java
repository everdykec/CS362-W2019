

import junit.framework.TestCase;

//You can use this as a skeleton for your 3 different test approach
//It is an optional to use this file, you can generate your own test file(s) to test the target function!
// Again, it is up to you to use this file or not!





public class UrlValidatorTest extends TestCase {

	

   public UrlValidatorTest(String testName) {
      super(testName);
   }

   
   
   public void testManualTest()
   {
//You can use this function to implement your manual testing	   
	   
   }
   
   
   public void testYourFirstPartition()
   {
	 //You can use this function to implement your First Partition testing	   

   }
   
   public void testYourSecondPartition(){
		 //You can use this function to implement your Second Partition testing	   

   }
   //You need to create more test cases for your Partitions if you need to 
   
   public void testIsValid()
   {
	 UrlValidator urlVal = new UrlValidator(null, null, UrlValidator.ALLOW_ALL_SCHEMES);
	 
	 String goodScheme[] = {"http://", "https://", "ssh://"};
	 String goodAuth[] = {"google.com", "0.0.0.0", "amazon.com", "mozilla.org"};
	 String goodPort[] = {":23415", ":1024", ":65535", ":10000"};
	 String goodPath[] = {"/file", "/page", ""};
	 String goodQuery[] = {"?action=test", "?action=test&foo=bar"};
	 String badScheme[] = {"http/", "://", "http:/"};
	 String badAuth[] = {"-5.0.0.0", "0.400.0.0", "-1.260.0.0"};
	 String badPort[] = {":65536", ":-1", ":72390"};
	 String badPath[] = {"/..", "/..//file"};
	 String badQuery[] = {"^*%^"};
	 
	 for(byte a = 0; a < 3; a++)
	 {
		 for(byte b = 0; b < 4; b++)
		 {
			 for(byte c = 0; c < 4; c++)
			 {
				 for(byte d = 0; d < 3; d++)
				 {
					for(byte e = 0; e < 2; e++)
					{
						assertTrue(goodScheme[a] + goodAuth[b] + goodPort[c] + goodPath[d] + goodQuery[e], urlVal.isValid(goodScheme[a] + goodAuth[b] + goodPort[c] + goodPath[d] + goodQuery[e]));
					}
				 }
			 }
		 }
	 }
	 
	 for(byte a = 0; a < 3; a++)
	 {
		 for(byte b = 0; b < 4; b++)
		 {
			 for(byte c = 0; c < 4; c++)
			 {
				 for(byte d = 0; d < 3; d++)
				 {
					for(byte e = 0; e < 2; e++)
					{
						assertFalse(badScheme[a] + goodAuth[b] + goodPort[c] + goodPath[d] + goodQuery[e], urlVal.isValid(badScheme[a] + goodAuth[b] + goodPort[c] + goodPath[d] + goodQuery[e]));
					}
				 }
			 }
		 }
	 }
	 
	 for(byte a = 0; a < 3; a++)
	 {
		 for(byte b = 0; b < 3; b++)
		 {
			 for(byte c = 0; c < 4; c++)
			 {
				 for(byte d = 0; d < 3; d++)
				 {
					for(byte e = 0; e < 2; e++)
					{
						assertFalse(goodScheme[a] + badAuth[b] + goodPort[c] + goodPath[d] + goodQuery[e], urlVal.isValid(goodScheme[a] + badAuth[b] + goodPort[c] + goodPath[d] + goodQuery[e]));
					}
				 }
			 }
		 }
	 }
	 
	 for(byte a = 0; a < 3; a++)
	 {
		 for(byte b = 0; b < 4; b++)
		 {
			 for(byte c = 0; c < 3; c++)
			 {
				 for(byte d = 0; d < 3; d++)
				 {
					for(byte e = 0; e < 2; e++)
					{
						assertFalse(goodScheme[a] + goodAuth[b] + badPort[c] + goodPath[d] + goodQuery[e], urlVal.isValid(goodScheme[a] + goodAuth[b] + badPort[c] + goodPath[d] + goodQuery[e]));
					}
				 }
			 }
		 }
	 }
	 
	 for(byte a = 0; a < 3; a++)
	 {
		 for(byte b = 0; b < 4; b++)
		 {
			 for(byte c = 0; c < 4; c++)
			 {
				 for(byte d = 0; d < 2; d++)
				 {
					for(byte e = 0; e < 2; e++)
					{
						assertFalse(goodScheme[a] + goodAuth[b] + goodPort[c] + badPath[d] + goodQuery[e], urlVal.isValid(goodScheme[a] + goodAuth[b] + goodPort[c] + badPath[d] + goodQuery[e]));
					}
				 }
			 }
		 }
	 }
	 
	 for(byte a = 0; a < 3; a++)
	 {
		 for(byte b = 0; b < 4; b++)
		 {
			 for(byte c = 0; c < 4; c++)
			 {
				 for(byte d = 0; d < 3; d++)
				 {
					for(byte e = 0; e < 1; e++)
					{
						assertFalse(goodScheme[a] + goodAuth[b] + goodPort[c] + goodPath[d] + badQuery[e], urlVal.isValid(goodScheme[a] + goodAuth[b] + goodPort[c] + goodPath[d] + badQuery[e]));
					}
				 }
			 }
		 }
	 }
	 
   }
   


}
