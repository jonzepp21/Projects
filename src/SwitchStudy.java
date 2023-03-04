import java.util.Scanner;

public class SwitchStudy {

	public static void main(String[] args) {
		int x = 3;
		int y = 2;
		Add a = new Add();
		Subtract b = new Subtract();
		Scanner answer = new Scanner(System.in);
		System.out.print("What would you like to do? 1:add, 2:subtract\n");
		int ans = answer.nextInt();
		switch (ans) {
		case(1):
			System.out.print(a.add(x, y));
			break;
			
		case(2):
			System.out.print(b.sub(x, y));
			break;
		}

	}

}
