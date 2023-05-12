class vehicle {
    int speed;
    long distance;

    vehicle() {
        speed = 0;
        distance = 0;
    }

    vehicle(int s, long d) {
        speed = s;
        distance = d;
    }

    void run() {
        System.out.println("Vehicle class");
    }

    void show() {
        System.out.println("Speed: " + speed);
        System.out.println("Distance: " + distance);
    }

    void setspeed(int s) {
        speed = s;
    }

    void setdistance(long d) {
        distance = d;
    }

    void get() {
        System.out.println("Speed: " + speed);
        System.out.println("Distance: " + distance);
    }
}

public class App {
    public static void main(String[] args) {
        vehicle v1 = new vehicle(10, 100);
        v1.get();
        while (true) {

        }

    }
}
