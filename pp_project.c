#include<stdio.h>
void menue();
void order();
void info();
void INDORE();
void choice(int city_choice);
void city_display();

void enter_details ();
char name[50];
char email[50];
int c,r;
int city_choice;
int main ()

{   
    // char name[50];
    // int phone[20];
    // char email[50];
    int n;
    printf ("Welcome to restaurant booking and food odering system developed by aman bagadiya ");
    printf("Registration page \n");
    printf("For Admin login press 1: \n");
    printf("For user login press 2: \n");
    printf("To exit press 3: \n");
    scanf ("%d", &n);
    if (n==1){
                printf("opening page\n");
    }
    else if (n==2){
                enter_details(); 
    }
     else if (n==3){
                printf ("You have successfully exited from program \n\n ");
                printf ("This project is made by Aman Bagadiya under the guidence of Mr Surendra Gupta Sir \n\n");
               return 0;}
    else{
               printf("Please enter a valid choice\n");
    }

     }
    void enter_details (){
    // char name[50];
    // char email[50];
    getchar();
    printf("Enter your first name: \n");
    gets(name);
    // scanf("%s", name);
    printf("Enter your Email id:\n");
    scanf("%s", email);
    printf("You have successfully entered the following details:\n Name:%s\nemail id:%s\n",name,email);
    // printf("Enter your Name: \n");
    city_display();
}

void city_display() {
    
   printf("\n                       ::::::::::::::::::::::::::::::::::::::::::::::::::::");
   printf("\n                       ::                                                ::");
   printf("\n                       ::    ~ Please selecit your city from below list: ::"); 
   printf("\n                       ::                                                ::");
   printf("\n                       ::     >          1.INDORE                        ::");
   printf("\n                       ::     >>         2.BHOPAL                        ::");
   printf("\n                       ::     >>>        3.MUMBAI                        ::");
   printf("\n                       ::                                                ::");
   printf("\n                       ::                                                ::");
   printf("\n                       ::                                                ::");
   printf("\n                       ::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
   getchar();
   printf("Enter your choice by entering the serial number of city : ");
   scanf("%d",&c);
   choice(c);
   }
void choice(int city_choice){
     switch (c){
            case 1 : {
                INDORE();
                break;
            }
            // case 2 : {
            //     BHOPAL();
            //     break;
            // }
            // case 3 : {
            //     MUMBAI();
            //     break;
            // }
        } 
}
void INDORE(){
  
   printf("                       ::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
   printf("                       ::    ~> Please select restaurant below list:       ::\n");
   printf("                       ::                                                  ::\n");
   printf("                       ::       Name of Restaurant        Ratings          ::\n");    
   printf("                       ::                                                  ::\n");
   printf("                       ::       1.Kebabsville             ****             ::\n");
   printf("                       ::       2.Ginger Ganesha          *****            ::\n");
   printf("                       ::       3.Shree Chotiwala         ***              ::\n");
   printf("                       ::       4.Village                 **               ::\n");
   printf("                       ::       5.Vidorra                 ***              ::\n");
   printf("                       ::                                                  ::\n");
   printf("                       ::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
   getchar();
   printf("Enter your choice by entering the serial number of restaurant : \n");
   scanf("%d",&r);
   options();
   printf("\n\n");

}
// void BHOPAL(){
//      printf("\n                     ::::::::::::::::::::::::::::::::::::::::::::::::::::::");
//    printf("\n                       ::                                                  ::");
//    printf("\n                       ::                                                  ::");
//    printf("\n                       ::    ~> Restaurant list:                           ::");
//    printf("\n                       ::       Name                                       ::");
//    printf("\n                       ::       1.Kebabsville                              ::");
//    printf("\n                       ::       2.Ginger Ganesha                           ::");
//    printf("\n                       ::       3.Shree Chotiwala                          ::");
//    printf("\n                       ::       4.Village                                  ::");
//    printf("\n                       ::       5.Vidorra                                  ::");
//    printf("\n                       ::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
//    getchar();

//     printf("\n\n");
// }

// void MUMBAI(){
//      printf("\n                     ::::::::::::::::::::::::::::::::::::::::::::::::::::::");
//    printf("\n                       ::                                                  ::");
//    printf("\n                       ::                                                  ::");
//    printf("\n                       ::    ~> Restaurant list:                           ::");
//    printf("\n                       ::       Name                                       ::");
//    printf("\n                       ::       1.Kebabsville                              ::");
//    printf("\n                       ::       2.Ginger Ganesha                           ::");
//    printf("\n                       ::       3.Shree Chotiwala                          ::");
//    printf("\n                       ::       4.Village                                  ::");
//    printf("\n                       ::       5.Vidorra                                  ::");
//    printf("\n                       ::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
//    getchar();

//     printf("\n\n");
// }


void options(){
    int h;
    printf("\n                       ::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
    printf("\n                       ::         !!!!!!!!!!!!welcome!!!!!!!!!!!!            ::");
    printf("\n                       ::                                                    ::");
    printf("\n                       ::    ~> Please selecity_display from below options:  ::");
    printf("\n                       ::                                                    ::");
    printf("\n                       ::       1.Get Information About Restaurant :>        ::");
    printf("\n                       ::       2.Order Food:>                               ::");
    printf("\n                       ::       3.Book table:>                               ::");
    printf("\n                       ::       4.Give your reviews:>                        ::");
    printf("\n                       ::       5.Exit:>                                     ::");
    printf("\n                       ::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
    getchar();
    printf("PLEASE ENTER YOUR SELEcted city CHOICE:\n");
    scanf("%d", &h);
    switch (h){
            case 1 :  {
                 info();
                break;
            }
            case 2 : {
                order();
                break;
            }
            // case 3 : {
            //     book();
            //     break;
            // }
            // case 4 : {
            //     review();
            //     break;
            // }
            // case 4 : {
            //     return 0;
            // }
            }
   
}
void info(){
    int g;
   printf("\n                       ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
   printf("\n                       ::                                                        ::");
   printf("\n                       ::                                                        ::");
   printf("\n                       ::~> Please selecity_display Restaurant from below list:  ::");
   printf("\n                       ::       Name                                             ::");
   printf("\n                       ::       1.Kebabsville                                    ::");
   printf("\n                       ::       2.Ginger Ganesha                                 ::");
   printf("\n                       ::       3.Shree Chotiwala                                ::");
   printf("\n                       ::       4.Village                                        ::");
   printf("\n                       ::       5.Vidorra                                        ::");
   printf("\n                       ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
   getchar();
    printf("CHOOSE THE RESTAURANT FROM THE ABOVE LIST :\n");
    scanf("%d",&g);
     switch (g){
            case 1 : {
                printf("LOCATION : Sayaji Indore, H/1 , Scheme No.54, Vijay Nagar, Indore, Madhya Pradesh - 452010\n PHONE :0731 4006666, 73899 48912\n MORE INFORMATION: PRICE RANGE =₹805 - ₹1,208\nCUISINES =Indian, Barbecue, Asian\nSPECIAL DIETS =Vegetarian Friendly, Vegan Options, Halal, Gluten Free Options Dinners can now become even more special with a laid back and relaxed time relishing the buffet at a Kebabsville! Sayaji Indore’s buffet style restaurant- Kebabsville is a class apart! Set alongside the pool with lavish seating arrangement, you can have a relaxing buffet full of mouth-watering kebabs, grilled veggies and North Indian food dishes. Variety of kebabs in vegetarian and non-vegetarian options, made by our expert chefs are sure to win your hearts. You can eat the kebabs to your heart’s content and also enjoy the North India dishes alongside. Relish in our lavishly spread buffet service and make your evenings worth remembering.\n");
                break;
            }
            case 2 : {
                printf("LOCATION LG-12,13, DM Tower, 21/1, Lala Banarasilal Dawar Marg, Race Course Road, Near Zanjeerwala Chowraha, New Palasia, Indore, Madhya Pradesh 452001, India\n phone=+91-731-3301441\n More information-A good and lively ambience with amazing South Indian and Chinese dishes, Ginger Ganesha might just steal your heart with the sheer simplicity of its. If you want to have excellent dosas and super delicious vegetarian biryani then this is the place to be. Do try the Bisebele Bath and the Mexican Roll Dosa. Not only the food, but the restaurant is also known for its quick service which is an added star. This is also a popular place to dine at with the family because of the reasonable price at which you can eat with your heart and the cozy environment that gives you the comfort of being in the company of your loved ones\n\n");
                break;
            }
            case 3 : {
                printf("LOCATION: 8 B, Raunak Plaza, Opposite Nath Mandir, South Tukoganj, Indore, Madhya Pradesh 452001, India\n PHONE: +91-731-2528586\n More Information:  One of the most popular eating joints in the city, Shree Chotiwala serves you with delicious veg Indian food. The wide variety of dishes in the menu might confuse you a bit. That's a good thing, right? There is a booth seating and a family table seating arrangement that are available for different purposes and guests. Not to miss is the veg thali that has a huge range of dishes that are served on a single platter. It's quite a treat in every sense of the word. There are also dishes for the stricity_display followers of Jainism available at this restaurant which essentially means vegetarian dishes that do not even have onion or garlic in it\n");
                break;
            }
            case 4 : {
                printf("LOCATION: 5th Floor, Central Mall, RNT Marg, Indore, Madhya Pradesh 452001, India\n PHONE: +91-731-4006617|+91-78699-10313\n More Information: Sit on a chair, on a khatiya or with a cozy takiya, Village is a sure shot dream to dine at. Serving Rajasthani and Gujarati cuisines as their specialty, the place ensures a fulfilling experience for every foodie who enters the place. The thatched stalls serving street food from various parts of the country add another world charm to the place. The truck with a buffet arrangement and the puppet show are amazing. If you are the kind of person who does not get satisfied with just the food then the overall experience here is going to stay with you for a long time.\n");
                break;
            }
            case 5 : {
                printf("LOCATION : New Palasia, Indore\n CONTAcity_display DETAILS:12345678 \n MORE INFORMATION :CUISINES Indian, Asian SPECIAL DIETS Vegan Options, Vegetarian Friendly MEALS Dinner, Lunch.\n");
                break;
            }
    }
    
}

void order(){
    menue();}

void menue(){
     int o,j;
   printf("\n :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
   printf("\n\n  ITEMS...................................................................PRICE \n1  Paneer Angara...........................................................220 \n2  Paneer Pasasnda ........................................................210 \n3  Paneer Lababdar.........................................................215 \n4  Paneer Tawa Masala......................................................215 \n5  Paneer Toofani .........................................................220 \n6  Paneer Handi............................................................200 \n7  Paneer Kadai........................................................... 200 \n8  Paneer Tikka Masala.....................................................195 \n9  Paneer Butter Masala....................................................195 \n10 Paneer Palak............................................................188 \n**ROTIES - TANDURI \n11 Cheese Nan .............................................................88 \n12 Hariyali Nan............................................................78 \n13 Kashmiri Nan ...........................................................98 \n14 Plain Nan...............................................................48 \n**INDIAN RICE & BIRYANI \n15 Handi Dum Parda Biryani ................................................230 \n16 Special Veg. Biryani....................................................195 \n17 Veg. Hyderabadi Biryani.................................................205 \n18 Veg. Pulao (Plain or Masala)............................................180 \n19 Peas Pulao .............................................................180 \n20 Mushroom Onion Pulao....................................................195 \n**SNACKS \n21 Cheese Garlic Bread.....................................................130 \n22 Chesse Corn Chilly Toast................................................130 \n23 Veg. Cutlet ............................................................85 \n24 Aloo Tikki .............................................................100 \n25 Veg. Cheese Sandwich ...................................................90 \n**SOUTH INDIAN \n26 Mysore Masala Dosa......................................................140 \n27 Mysore Plain Dosa.......................................................130 \n28 Hyderabadi Masala Dosa .................................................140 \n29 Hyderabadi Plain Dosa ..................................................130 \n**DESSERTS & SWEETS \n30 Sunday Special Ice-cream................................................170 \n31 Almond Carnival Ice-cream ..............................................55 \n32 Kesar Pista Ice-cream ..................................................55 \n33 Kaju Draksh Ice-cream...................................................45 \n34 Butter Scotch Ice-cream.................................................45\n");
   printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
   getchar();
   printf("ENETER THE S.NO. OF THE ITEM FROM THE ABOVE LIST :\n");
   scanf("%d",o);
   printf("ENETER THE QUANTITY OF %d:\n",&o);
   scanf("%d",&j);
    
}

