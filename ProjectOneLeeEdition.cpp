 
    double lbs, inches, ft, bmi;
    
    printf("%lf\n", &lbs);
    printf("Enter weight in pounds:");
    scanf("%lf", &lbs);
    printf("%lf\n", lbs);
    
    printf("Enter height in inches:");
    scanf("%lf", &inches);
    printf("%lf\n", inches);
    
    ft = (inches / 12);
    printf("%lf\n", ft);
    
    
    bmi = ((lbs * 4.88) / (ft * ft));
    
    //lee takeover
    
/*changed printing out of strings to assigning a string to a variable "string"
 this makes the program more flexible*/
    //i took out the "&" because we want the value, and deleted your (( ")" "(" )) the inner parenthesis because thats not how "&&(and)" operators work - although maybe i'm wrong

    std::string string;
    
    printf("%lf\n", bmi);
    
    if ((bmi < 20)){
        string = "underweight";
    }
    else if (bmi >= 20 && bmi < 25){
        string = "normal weight";
    }
    else if (bmi >= 25 && bmi<30){
        string = "slightly overweight";
    }
    else if (bmi >= 30 && bmi < 40){
        string = "overweight";
    }
    else{
        string = "obese as fuark"; //do change the string
    }
// figure out how to print the string
//that way it will print the value --> peusdo: print "you are" string ".";
}


//this is what mine looks like

/*if (BMI < 20 ) string = "underweight";
 else if (BMI < 25 && BMI >= 20) string = "Normal Weight";
 else if (BMI < 30 && BMI >= 25) string = "Slightly Overwight";
 else if(BMI < 40 && BMI >= 30) string = "Overweight";
 else if (BMI >= 40) string = "Extremely Overweight";
*/
