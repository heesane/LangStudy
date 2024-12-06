import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class MultiProcessing {

  public static void main(String[] args) {
    try{
      Process process1 = Runtime.getRuntime().exec("cd ~ && ls -l");

      BufferedReader br1 = new BufferedReader(new InputStreamReader(process1.getInputStream()));

      String line1;
      while((line1 = br1.readLine()) != null){
        System.out.println(line1);
      }

      int exitCode1 = process1.waitFor();
      System.out.println("\nExited with error code : " + exitCode1);


      ProcessBuilder pb = new ProcessBuilder("ping","-c","4","google.com");
      Process process2 = pb.start();

      BufferedReader br = new BufferedReader(new InputStreamReader(process2.getInputStream()));

      String line2;

      while((line2 = br.readLine()) != null){
        System.out.println(line2);
      }

      int exitCode = process2.waitFor();
      System.out.println("\nExited with error code : " + exitCode);

    } catch (IOException | InterruptedException e) {
      throw new RuntimeException(e);
    }
  }
}
