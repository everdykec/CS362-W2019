

import junit.framework.TestCase;
import java.util.Random;

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

	   UrlValidator urlValid = new UrlValidator(null, null, UrlValidator.ALLOW_ALL_SCHEMES);
	   int max, min, randomIdx;
	   Random rand = new Random();


	   
	   for(int i = 0;i<100;i++)
	   {
		   System.out.println("------Testing the Scheme--------");
		   StringBuffer schemeURL = new StringBuffer("www.google.com");
		   max = testUrlScheme.length - 1;
		   min = 0;
//		   gets a random idx position from array
		   randomIdx = min + rand.nextInt((max - min + 1));
//		   adds the test scheme to the from of the url template
		   schemeURL.insert(0, testUrlScheme[randomIdx].item);
		   if (testUrlScheme[randomIdx].valid)   
		   {
			   System.out.println("Expected to be invalid URL");
			   if(!urlValid.isValid(schemeURL.toString()))
				   System.out.println("NOT a Valid URL: " + schemeURL);
			   else {
				   System.out.println("Valid URL: " + schemeURL);
			   }
				   
		   }
		   else
		   { 
			   System.out.println("Expected to be valid URL");
			   if(urlValid.isValid(schemeURL.toString()))
				   System.out.println("NOT a valid URL: " + schemeURL);
			   else {
				   System.out.println("Valid URL: " + schemeURL);
			   }
		   }

		   System.out.println("------Testing the URL Authority --------");
		   StringBuffer authorityURL = new StringBuffer("http://");
		   max = testUrlAuthority.length - 1;
		   min = 0;
//		   gets a random idx position from array
		   randomIdx = min + rand.nextInt((max - min + 1));
//		   adds the test scheme to the from of the url template
		   authorityURL.insert(authorityURL.length(), testUrlAuthority[randomIdx].item);
//		   System.out.println("URL: " + authorityURL);

		   if (testUrlAuthority[randomIdx].valid)   
		   {
			   System.out.println("Expected to be invalid URL");
			   if(!urlValid.isValid(authorityURL.toString()))
				   System.out.println("NOT a Valid URL: " + authorityURL);
			   else {
				   System.out.println("Valid URL: " + authorityURL);
			   }
				   
		   }
		   else
		   { 
			   System.out.println("Expected to be valid URL");
			   if(urlValid.isValid(authorityURL.toString()))
				   System.out.println("NOT a valid URL: " + authorityURL);
			   else {
				   System.out.println("Valid URL: " + authorityURL);
			   }
		   }
		   
		   System.out.println("------Testing the URL Port --------");
		   StringBuffer portURL = new StringBuffer("www.google.com");
		   max = testUrlPort.length - 1;
		   min = 0;
//		   gets a random idx position from array
		   randomIdx = min + rand.nextInt((max - min + 1));
//		   adds the test scheme to the from of the url template
		   portURL.insert(portURL.length(), testUrlPort[randomIdx].item);
//		   System.out.println("URL: " + portURL);
		   if (testUrlPort[randomIdx].valid)   
		   {
			   System.out.println("Expected to be invalid URL");
			   if(!urlValid.isValid(portURL.toString()))
				   System.out.println("NOT a Valid URL: " + portURL);
			   else {
				   System.out.println("Valid URL: " + portURL);
			   }
				   
		   }
		   else
		   { 
			   System.out.println("Expected to be valid URL");
			   if(urlValid.isValid(portURL.toString()))
				   System.out.println("NOT a valid URL: " + portURL);
			   else {
				   System.out.println("Valid URL: " + portURL);
			   }
		   }
//		   
		   System.out.println("------Testing the URL Path --------");
		   StringBuffer pathURL = new StringBuffer("www.google.com");
		   max = testPath.length - 1;
		   min = 0;
//		   gets a random idx position from array
		   randomIdx = min + rand.nextInt((max - min + 1));
//		   adds the test scheme to the from of the url template
		   pathURL.insert(pathURL.length(), testPath[randomIdx].item);
//		   System.out.println("URL: " + pathURL);
		   if (testPath[randomIdx].valid)   
		   {
			   System.out.println("Expected to be invalid URL");
			   if(!urlValid.isValid(pathURL.toString()))
				   System.out.println("NOT a Valid URL: " + pathURL);
			   else {
				   System.out.println("Valid URL: " + pathURL);
			   }
				   
		   }
		   else
		   { 
			   System.out.println("Expected to be valid URL");
			   if(urlValid.isValid(pathURL.toString()))
				   System.out.println("NOT a valid URL: " + pathURL);
			   else {
				   System.out.println("Valid URL: " + pathURL);
			   }
		   }
		   
//		   
		   System.out.println("------Testing the URL Query --------");
		   StringBuffer queryURL = new StringBuffer("www.google.com");
		   max = testUrlQuery.length - 1;
		   min = 0;
//		   gets a random idx position from array
		   randomIdx = min + rand.nextInt((max - min + 1));
//		   adds the test scheme to the from of the url template
		   queryURL.insert(queryURL.length(), testUrlQuery[randomIdx].item);
//		   System.out.println("URL: " + queryURL);

		   if (testUrlQuery[randomIdx].valid)   
		   {
			   System.out.println("Expected to be invalid URL");
			   if(!urlValid.isValid(queryURL.toString()))
				   System.out.println("NOT a Valid URL: " + queryURL);
			   else {
				   System.out.println("Valid URL: " + queryURL);
			   }
				   
		   }
		   else
		   { 
			   System.out.println("Expected to be valid URL");
			   if(urlValid.isValid(queryURL.toString()))
				   System.out.println("NOT a valid URL: " + queryURL);
			   else {
				   System.out.println("Valid URL: " + queryURL);
			   }
		   }
//


	   }
	  

   }
   
   public void testYourSecondPartition(){
		 //You can use this function to implement your Second Partition testing	   

   }
   //You need to create more test cases for your Partitions if you need to 
   
   public void testIsValid()
   {
	   //You can use this function for programming based testing


   }

   ResultPair[] testUrlScheme = {
		   new ResultPair("http://", true),
           new ResultPair("3ht://", false),
           new ResultPair("http:/", false),
           new ResultPair("http:", false),
           new ResultPair("http/", false),
           new ResultPair("://", false),
           new ResultPair("", true)
    };
   
   ResultPair[] testUrlAuthority = {
		   new ResultPair("www.google.com", true),
           new ResultPair("go.com", true),
           new ResultPair("go.au", true),
           new ResultPair("0.0.0.0", true),
           new ResultPair("255.255.255.255", true),
           new ResultPair("256.256.256.256", false),
           new ResultPair("255.com", true),
           new ResultPair("1.2.3.4.5", false),
           new ResultPair("1.2.3.4.", false),
           new ResultPair("1.2.3", false),
           new ResultPair(".1.2.3.4", false),
           new ResultPair("go.a", false),
           new ResultPair("go.a1a", false),
           new ResultPair("go.1aa", false),
           new ResultPair("aaa.", false),
           new ResultPair(".aaa", false),
           new ResultPair("aaa", false),
           new ResultPair("", false)
   };
   ResultPair[] testUrlPort = {new ResultPair(":80", true),
           new ResultPair(":65535", true),
           new ResultPair(":0", true),
           new ResultPair("", true),
           new ResultPair(":-1", false),
          new ResultPair(":65636",false),
           new ResultPair(":65a", false)
   };
   ResultPair[] testPath = {new ResultPair("/test1", true),
        new ResultPair("/t123", true),
        new ResultPair("/$23", true),
        new ResultPair("/..", false),
        new ResultPair("/../", false),
        new ResultPair("/test1/", true),
        new ResultPair("", true),
        new ResultPair("/test1/file", true),
        new ResultPair("/..//file", false),
        new ResultPair("/test1//file", false)
   };
   ResultPair[] testUrlQuery = {new ResultPair("?action=view", true),
           new ResultPair("?action=edit&mode=up", true),
           new ResultPair("", true),
           new ResultPair("?????", false)
   };


}
