class PrimeNumber{
	public static void main(String args[]){
		int a=Integer.parseInt(ar[0]);
		int i;
		int flag=0;
		for(i=2;i<a/2;i++){
			if(a%i==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			System.out.println("Prime");
		}
		else{
			System.out.println("Not Prime");
		}
	}
}
