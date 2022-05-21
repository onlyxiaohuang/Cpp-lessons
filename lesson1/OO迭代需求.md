**AC1:** **封装**

写一个Person类，要有name，age属性，要有一个Introduce方法， Introduce方法返回一个字符串形如：My name is Tom. I am 21 years old.



**AC2:** **继承**

再写一个Student类继承Person类，除了name，age属性，还有要有class属性。也有一个Introduce方法， Introduce方法返回一个字符串形如：

My name is Tom. I am 21 years old. I am a Student. I am at Class 2.

再写一个Worker类继承Person类，只有name，age属性。也有一个Introduce方法， Introduce方法返回一个字符串形如：

My name is Tom. I am 21 years old. I am a Worker. I have a job.


 所有Person的子类的这段文字

My name is Tom. I am 21 years old.

都应该调用Person的Introduce方法来获得



**AC3:** **更多继承**

再写一个Teacher类继承Person类，除了name，age属性，也有class属性。也有一个Introduce方法， Introduce方法返回一个字符串形如：

My name is Tom. I am 21 years old. I am a Teacher. I teach Class 2.

如果class为0，就会返回 My name is Tom. I am 21 years old. I am a Teacher. I teach No Class.

 

**AC4:封装与组合**

Student的class属性不是一个数字，而是一个对象，写一个Class类，有number属性。Student构造的时候把Class的一个实例传给Student，老师一样。

如果Teacher的class为null，Introduce函数就会返回

My name is Tom. I am 21 years old. I am a Teacher. I teach No Class.



**AC3:** **更多继承**

再写一个Teacher类继承Person类，除了name，age属性，也有class属性。也有一个Introduce方法， Introduce方法返回一个字符串形如：

My name is Tom. I am 21 years old. I am a Teacher. I teach Class 2.

如果class为0，就会返回 My name is Tom. I am 21 years old. I am a Teacher. I teach No Class.

 

**AC4:封装与组合**

Student的class属性不是一个数字，而是一个对象，写一个Class类，有number属性。Student构造的时候把Class的一个实例传给Student，老师一样。

如果Teacher的class为null，Introduce函数就会返回

My name is Tom. I am 21 years old. I am a Teacher. I teach No Class.



**AC5:更多组合**

给Teacher写一个IntroduceWith方法，传入一个student，比如Jerry，如果Jerry在Teacher教的班级则返回形如

My name is Tom. I am 21 years old. I am a Teacher. I teach Jerry.

否则返回

My name is Tom. I am 21 years old. I am a Teacher. I don't teach Jerry.

抽取一个私有函数来复用字符串。

如果没有就继续返回旧的字符串



**AC_6**:**循环依赖**

Person类，加入id属性，靠id来判断是否是同一个人。

Class类，有number属性还有一个Studeng类型的leader属性。但是leader属性不在构造器里。

Student构造的时候把Class的一个实例传给Student。 Class有一个assignLeader方法，接收一个Student实例。意为将一名学生设置为该Class的班长。 如果Class的Leader是Tom，那么Tom调用Introduce的方法就要返回：

My name is Tom. I am 21 years old. I am a Student. I am Leader of Class 2.

如果没有就继续返回旧的字符串



**AC7:一对多**

Class还有一个AppendMember方法，接受一个Student实例。意味将一名学生加入该班级。 如果学生没有加入该班级，那么在调用AssignLeader方法的时候，不会assign成功，会打印一句话：

It is not one of us.

相应的调用Student的Introduce方法也只会返回旧的字符串。

Teacher的class属性改为classes属性，也就是可以教多个班。Introduce方法返回一个字符串形如：

My name is Tom. I am 21 years old. I am a Teacher. I teach Class 2, 3.

如果classes的长度为0，就会返回

My name is Tom. I am 21 years old. I am a Teacher. I teach No Class.

Teacher还有一个IsTeaching方法，传入一个学生，返回true/false。只要学生在classes中的任一个class中，就是在教他。 而学生是否在class中这件事情，应该是Class有一个方法hasMember来判断。



**AC-8** **观察者**

当学生加入Teacher教的班级的时候，Teacher会打印一个句话,形如：

I am Tom. I know Jerry has joined Class 2.

当学生成为Teacher教的班级的班长的时候，Teacher会打印一个句话,形如：

I am Tom. I know Jerry become Leader of Class 2.

再引入一个类，叫Computer，Computer有一个name属性，Computer不是Person的子类。

当学生加入Computer关心的班级的时候，不仅Teacher会打印，Computer也会打印一个句话,形如：

I am the Machine. I know Jerry has joined Class 2.

当学生成为Computer关心的班级的班长的时候，不仅Teacher会打印，Computer也会打印一个句话,形如：

I am the Machine. I know Jerry become Leader of Class 2.