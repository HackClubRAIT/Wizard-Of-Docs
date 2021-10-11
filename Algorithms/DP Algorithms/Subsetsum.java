
public class Subsetsum {
	
	public static boolean subsum(int[] wt,int w, int n) {
		boolean[][] t = new boolean[n+1][w+1];
		for(int i=0; i< n+1; i++) {
			for(int j=0; j < w+1; j++) {
				if(i==0) {
					t[i][j]=false;
				}
				else if(j==0) {
					t[i][j]=true;
				}
				else if(wt[i-1] <= j) {
					t[i][j] = t[i-1][j - wt[i-1]] || t[i-1][j];
				}
				else {
					t[i][j] = t[i-1][j];
				}
			}
		}
		return t[n][w];
	}
	
	public static void main(String[] args) {
		int[] wt = {2,3,7,8,10};
		int w=11;
		int n= wt.length;
		System.out.println(subsum(wt,w,n));
	}

}
