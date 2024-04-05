# Temperature converter 

 Simple temperature converter: Celsius to Farenheit
</br></br></br>
Converter is a function that has <span style="color: red;">Celsius</span> as it's input and <span style="color: blue;">Farenheit</span> as it's Output


``` C
    int converter(float celsius){
        float farenheit = (celsius*9/5)+32;	
        return farenheit;
    }
```

 <p>converter funtion is called at this line, with 32 as it's parameter</p>
   
``` C
    printf("Temperature is: %0.2f \n", converter(32));
```

Expected Output for this case:

``` powershell
    Temperature is: 0.00
```
