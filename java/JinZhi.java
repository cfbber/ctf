package js;

public class JinZhi {
    public static void main(String[] args) {
        System.out.println(str2Hex("T"));
        System.out.println(hex2String("54"));

        String s1 = "d4e8e1f4a0f7e1f3a0e6e1f3f4a1a0d4e8e5a0e6ece1e7a0e9f3baa0c4c4c3d4c6fbb9e1e6b3e3b9e4b3b7b7e2b6b1e4b2b6b9e2b1b1b3b3b7e6b3b3b0e3b9b3b5e6fd";
        s1 ="c8e9aca0c6f2e5f3e8c4efe7a1a0d4e8e5a0e6ece1e7a0e9f3baa0e8eafae3f9e4eafae2eae4e3eaebfaebe3f5e7e9f3e4e3e8eaf9eaf3e2e4e6f2";
        for (int i = 0; i < s1.length(); i += 2) {

            StringBuilder sb = new StringBuilder();
            String s = sb.append(s1.charAt(i)).append(s1.charAt(i + 1)).toString();

            int tens = Integer.parseInt(s, 16) - 128;

            System.out.print(Integer.toHexString(tens));
        }

    }

    public static void demo(String[] args) {
        int n = 18;
        Integer.toHexString(n);
        System.out.println(n + "的二进制是:" + Integer.toBinaryString(n));
        System.out.println(n + "的八进制是:" + Integer.toOctalString(n));
        System.out.println(n + "的十六进制是:" + Integer.toHexString(n));
        System.out.println(n + "的三进制是:" + Integer.toString(n, 3));

    }


    public static String hex2String(String hex) {
        int intValue = Integer.parseInt(hex, 16);
        char[] charArray = Character.toChars(intValue);

        // 将字符数组转换为字符串
        return new String(charArray);
    }

    public static String str2Hex(String str) {
        char[] chars = str.toCharArray();

        StringBuilder hex = new StringBuilder();

        for (char c : chars) {
            hex.append(String.format("%02x", (int) c));
        }
        return hex.toString();
    }



}
