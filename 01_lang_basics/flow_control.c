int main(){
    int userHasSanctions = 0;
    int userHadSanctions = 1;
    
    // IF ELSE
    
    if (1 == 1){
        printf("1 is equal to 1\n");
    } else {
        printf("1 is not equal to 1\n");
    }

    if (userHasSanctions == 1){
        printf("You have sanctions\n");
    } else if (userHadSanctions == 1){
            printf("You had sanctions\n");
        }
    printf("You dont have sanctions\n");
    

    // SWITCH CASE

    int contentToEvaluate = 5;

    switch (contentToEvaluate){
        case 1:
            printf("You did not pass the exam\n");
            break;
        case 2:
            print("You did not pass the exam\n");
            break;
        case 3:
            printf("You did not pass the exam\n");
            break;
        case 4:
            printf("You did not pass the exam\n");
            break;
        case 5:
            printf("You passed the exam\n");
            break;
        default:
            printf("You did not pass the exam\n");
            break;
    }

}