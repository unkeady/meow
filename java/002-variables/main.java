public class main
{
    public static void main(String[] args)
    {
        byte a;
        byte b;
        a = 5;
        b = 3 + 5;

        byte toplam;
        toplam = (byte)(a + b); // değeri byte'a dönüştürdük.

        System.out.println(a);
        System.out.println(b); 
        System.out.println("Toplamının değeri:" + toplam + "'dır");


        // değişkenlerin alabileceği max ve min değerleri yazdırır.

        System.out.println(Integer.MAX_VALUE);
        System.out.println(Integer.MIN_VALUE);

        System.out.println(Byte.MAX_VALUE);
        System.out.println(Byte.MIN_VALUE);

        System.out.println(Short.MAX_VALUE);
        System.out.println(Short.MIN_VALUE);

        System.out.println(Long.MAX_VALUE);
        System.out.println(Long.MIN_VALUE);

        // byte -> short -> int -> long

        double q = 5.25;
        double w = 4.0;
        double e = 4d; //4ü double olarak alıyor
        double r = 4.23d;

        





    }

}