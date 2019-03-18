public class Main {
    public static void main(String[] args) {
        UrlValidator urlValidator = new UrlValidator();
        boolean status = urlValidator.isValid("http://go.com/test1/");
        System.out.println(status);
    }
}
