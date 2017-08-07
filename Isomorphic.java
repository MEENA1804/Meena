package guvi;
import java.util.HashMap;
import java.util.Map;
public class Isomorphic {
	public boolean isIsomorphic(String a, String b) {
		if(a == null || b == null) {
			return false;
		}
		if(a.length() != b.length()) {
			return false;
		}
		Map<Character, Character> characterMap = new HashMap<Character, Character>();
		for(int i=0; i<a.length(); i++) {
			char c1 = a.charAt(i);
			char c2 = b.charAt(i);
			if(characterMap.containsKey(c1)) {
				if(characterMap.get(c1) != c2) {
					return false;
				}
			} else {
				if(characterMap.containsValue(c2)) {
					return false;
				}
				characterMap.put(c1, c2);
			}
		}
		return true;
	}
	
	public static void main(String args[]) {
		Isomorphic iso = new Isomorphic();
		String a = "good";
	    String b = "deer";
	    
	    String c = "seeds";
	    String d = "flags";
	    
	    String e = "good";
	    String f = "dder";
	    
	    String g = "hello";
	    String h = "hi";
	    
	    System.out.println(iso.isIsomorphic(a,b));
	    System.out.println(iso.isIsomorphic(c,d));
	    System.out.println(iso.isIsomorphic(e,f));
	    System.out.println(iso.isIsomorphic(g,h));
	}

}
