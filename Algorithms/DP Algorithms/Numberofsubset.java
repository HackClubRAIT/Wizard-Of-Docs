
public class Numberofsubsets {
	
	public static int numberofsubsets(int[] arr, int sum ,int n) {
		int[][] t = new int[n+1][sum+1];
		for(int i=0; i < n+1 ; i++) {
			for(int j=0; j < sum +1 ; j++) {
				if(i==0 && j==0)
					t[i][j]=1;
				else if(i == 0)
					t[i][j]=0;
				else if(j == 0)
					t[i][j]=1;
				else if(arr[i-1] <= j) {
					t[i][j] = t[i-1][j-arr[i-1]] + t[i-1][j];
				}
				else {
					t[i][j] = t[i-1][j];
				}
				System.out.print(t[i][j]+" ");
			}
			System.out.println();
		}
		return t[n][sum];
	}
	
	public static void main(String[] args) {
		int[] arr = {2,3,5,6,8,10};
		int sum =10;
		System.out.println(numberofsubsets(arr, sum , arr.length));
		
	}

}
