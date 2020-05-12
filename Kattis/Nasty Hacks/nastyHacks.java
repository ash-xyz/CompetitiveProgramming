import java.util.*;

public class nastyHacks {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {

            int r = sc.nextInt();
            int e = sc.nextInt();
            int c = sc.nextInt();

            if (e - c > r) {
                System.out.println("advertise");
            }
            if (e - c < r) {
                System.out.println("do not advertise");
            }
            if (e - c == r) {
                System.out.println("does not matter");
            }
            sc.nextLine();
        }
        if (sc != null) {
            sc.close();
        }
    }
}