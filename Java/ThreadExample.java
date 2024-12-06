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

class RunnableThread implements Runnable {

  private String threadName;

  public RunnableThread(String threadName) {
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

public class ThreadExample {

  public static void main(String[] args) {
//    CustomThread thread1 = new CustomThread("Thread 1 ");
//    CustomThread thread2 = new CustomThread("Thread 2 ");
//    CustomThread thread3 = new CustomThread("Thread 3 ");
//
//    thread1.start();
//    thread2.start();
//    thread3.start();

    RunnableThread runnableThread1 = new RunnableThread("Thread 1 ");
    RunnableThread runnableThread2 = new RunnableThread("Thread 2 ");
    RunnableThread runnableThread3 = new RunnableThread("Thread 3 ");

    Thread thread1 = new Thread(runnableThread1);
    Thread thread2 = new Thread(runnableThread2);
    Thread thread3 = new Thread(runnableThread3);

    thread1.start();
    thread2.start();
    thread3.start();
  }
}
