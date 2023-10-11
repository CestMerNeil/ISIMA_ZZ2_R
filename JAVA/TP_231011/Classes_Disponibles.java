import java.lang.Class;
import java.lang.reflect.*;

interface Animal {
   public void display();
}

interface Mammal {
   public void makeSound();
}

class Dog implements Animal, Mammal {
   public void display() {
      System.out.println("I am a dog.");
   }

   public void makeSound() {
      System.out.println("Bark bark");
   }
}

class Classes_Disponibles {
  public static void main(String[] args) {
      try {
          //创建一个Dog类的对象
          Dog d1 = new Dog();

          //使用getClass()创建Class对象
          Class obj = d1.getClass();
        
          //查找由Dog实现的接口
          Class[] objInterface = obj.getInterfaces();
          for(Class c : objInterface) {

              //打印接口名称
              System.out.println("Interface Name: " + c.getName());
          }
      }

      catch(Exception e) {
          e.printStackTrace();
      }
   }
}