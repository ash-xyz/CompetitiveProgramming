import java.io.File;
import java.util.*;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Handy {
    public static void main(String[] args) {
        File inputFile = new File("input.txt");
        Pattern parentPattern = Pattern.compile("^\\w+ \\w+");
        Pattern childPattern = Pattern.compile("\\d+ \\w+ \\w+");
        HashMap<String, List<String>> bagContainers = new HashMap<>();

        try {
            Scanner fileScanner = new Scanner(inputFile);
            while (fileScanner.hasNext()) {
                String nextLine = fileScanner.nextLine();
                Matcher parentMatch = parentPattern.matcher(nextLine);
                parentMatch.find();
                String parent = parentMatch.group();

                Matcher childMatch = childPattern.matcher(nextLine);
                List<String> child = new LinkedList<>();
                while (childMatch.find()) {
                    child.add(childMatch.group());
                }
                bagContainers.put(parent, child);

            }

        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            System.out.println(totalBags(bagContainers));
        }
    }

    public static int totalBags(HashMap<String, List<String>> myBags) {
        int totalBags = 0;
        Queue<String> searchQ = new LinkedList<>();

        Pattern childNumberPattern = Pattern.compile("\\d");
        Pattern childColorPattern = Pattern.compile("[a-zA-Z]+ [a-zA-Z]+");
        for (String child : myBags.get("shiny gold")) {

            Matcher childNumberMatcher = childNumberPattern.matcher(child);
            Matcher childColorMatcher = childColorPattern.matcher(child);
            childNumberMatcher.find();
            childColorMatcher.find();


            int childNumber = Integer.parseInt(childNumberMatcher.group());
            String childColor = childColorMatcher.group();

            totalBags += childNumber;

            for (int i = 0; i < childNumber; i++) {
                searchQ.add(childColor);
            }
        }
        while (!searchQ.isEmpty()) {
            String nextSearch = searchQ.poll();
            for (String child : myBags.get(nextSearch)) {
                Matcher childNumberMatcher = childNumberPattern.matcher(child);
                Matcher childColorMatcher = childColorPattern.matcher(child);
                childNumberMatcher.find();
                childColorMatcher.find();


                int childNumber = Integer.parseInt(childNumberMatcher.group());
                String childColor = childColorMatcher.group();

                totalBags += childNumber;

                for (int i = 0; i < childNumber; i++) {
                    searchQ.add(childColor);
                }
            }
        }
        return totalBags;
    }
}