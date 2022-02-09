```java
interface Syrupable
{
	void getSugary();
}

abstract class Pancake implements Syrupable { }

class BlueBerryPancake implements Pancake
{
	public void getSugary() { ; }
}

class SourdoughBlueBerryPancake extends BlueBerryPancake
{
	void getSugary(int s) { ; }
}
```

#### My answer: `it will error on the 6-th line`.
