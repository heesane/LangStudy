class CustomThread extends Thread {

  private String threadName;

  public CustomThread(String threadName) {
    this.threadName = threadName;
  }

  @Override
  public void run() {
    for (int i = 1; i <= 5; i++) {
      System.out.println(threadName + "is Running : " + i);

      try {
        Thread.sleep(1000);
      } catch (InterruptedException e) {
        e.printStackTrace();
      }
    }
  }
}

public class Main {

  public static void main(String[] args) {
    CustomThread thread1 = new CustomThread("Thread 1 ");
    CustomThread thread2 = new CustomThread("Thread 2 ");
    CustomThread thread3 = new CustomThread("Thread 3 ");

    thread1.start();
    thread2.start();
    thread3.start();
  }
}
