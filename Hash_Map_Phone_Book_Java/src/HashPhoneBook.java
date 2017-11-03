import java.util.HashMap;


public class HashPhoneBook implements PhoneBook {
    HashMap<Integer, String> hashMap = new HashMap();

    public HashPhoneBook() {

    }

    public String search(int phoneNumber) {
        if(this.hashMap.containsKey((phoneNumber))) {
            String name = hashMap.get((phoneNumber));
            return name;
        } else {
            System.out.println("Phone number not in phone book");
            return null;
        }
    }

    public boolean add(int phoneNumber, String name) {
        if(hashMap.containsKey((phoneNumber))) {
            return false;
        } else {
            hashMap.put((phoneNumber), name);
            return true;
        }
    }

    public String update(int phoneNumber, String name) {
        if(hashMap.containsKey((phoneNumber))) {
            hashMap.replace((phoneNumber), name);
            name = hashMap.get((phoneNumber));
            return name;
        } else {
            System.out.println("Phone number not in phone book");
            return null;
        }
    }

    public String remove(int phoneNumber) {
        if(hashMap.containsKey((phoneNumber))) {
            String oldName = search(phoneNumber);
            hashMap.remove((phoneNumber));
            return oldName;
        } else {
            System.out.println("Phone number not in phone book");
            return null;
        }
    }
}