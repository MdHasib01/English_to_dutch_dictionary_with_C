#include <stdio.h>
#include <string.h>

int main(){
    char dictionary [10][2][15]={
        //Vocabolary and words
        "Good","Goed",
        "Bad", "Slecht",
        "Man","Man",
        "Cow","Koe",
        "Pen", "Pen",
        "Book", "Boek",
        "Mango","Mango",
        "Banana","Banaan",
        "Goat","Geit",
        "Hen","Kip"
    };
    char english[15];

    //Taking Input of English word
    printf("Enter an English Word:");
    gets(english);
    int i,c=0;
    for(i=0;i<10;i++){
        if(strcmp(english,dictionary[i][0])==0){

            //Print of the Dutch Meaning
            printf("Dutch Meaning is: %s\n",dictionary[i][1]);
        }
        else c++;
    }

    //If didn't match error message
    if(c==10)printf("The word is not into my dictionary!");
    return 0;

}