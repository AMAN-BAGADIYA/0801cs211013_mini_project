/*adding all the necessary header files*/
#include <iostream>
#include <cstring>

/*Declaration of class*/
class User
{
private:
    char User_Name[20];
    long long User_contactdetails;
    char User_address[50];
    char User_emial_id[30];

public:
    /*Declaration of the other variables */
    int Table_no;
    int gstRate;
    int item;
    int quantity;
    int grandTotal;
    int restaurant_name;
    int option;
    int count = 0;

    /*Declaration of all the necessary functions */
    void save_booking_details();
    void Booking();
    void Cancel_Booking();
    void menu();
    void BHOPAL_info(int restaurant_name);
    void MUMBAI_info(int restaurant_name);
    void INDORE_info(int restaurant_name);
    void INDORE();
    void City_choice(int);
    void city_display();
    void place_order();
    int Admin_authentication();
    void Admin_Page();
    void User_Registration_Page();
    void INDORE();
    void BHOPAL();
    void MUMBAI();
    void options();
    void save_details();
    void invoice();
    void Bill();
    void print_invoice();
    void Welcome_Page();
    void view_bookings();
} user1; /*Declaration of variable of class type*/

/*Declaration of array to store data*/
char food_name[50];
int item_array[31] = {0};
int quantity_array[35] = {0};
int Table_array[10] = {0};
char menu_array[][35] = {"0", "Paneer Angara", "Paneer Pasasnda", "Paneer Lababdar", "Paneer Tawa Masala", "Paneer Toofani", "Paneer Handi", "Paneer Kadai", "Paneer Tikka Masala", "Paneer Butter Masala plus", "Paneer Palak", "Cheese Nan", "Hariyali Nan", "Kashmiri Nan", "Plain Nan", "Handi Dum Parda Biryani", "Special Veg. Biryani", "Veg. Hyderabadi Biryani", "Veg. Pulao (Plain or Masala)", "Peas Pulao", "Mushroom Onion Pulao", "Cheese Garlic Bread", "Chesse Corn Chilly Toast", "Veg. Cutlet", "Aloo Tikki", "Veg. Cheese Sandwich", "Mysore Masala Dosa", "Mysore Plain Dosa", "Hyderabadi Masala Dosa", "Hyderabadi Plain Dosa", "Sunday Special Ice-cream", "Almond Carnival Ice-cream", "Kesar Pista Ice-cream", "Kaju Draksh Ice-cream", "Butter Scotch Ice-cream"};

int main()
{
    std ::cout << "Welcome to restaurant booking and food odering system developed by Aman Bagadiya";
    user1.gstRate = 18;   // default gst rates
    user1.Welcome_Page(); // calling of function ----> Welcome_Page();
}

// defining of the function Welcome_Page
void User ::Welcome_Page()
{
    system("cls");    // this is the function which is defined in stlib.h and it is used to clear terminal screen
    int Login_option; // defining of the variable
    std ::cout << "Login: \n";
    std ::cout << "For User login press 1: \n";
    std ::cout << "For Admin login press 2: \n";
    std ::cout << "To exit press 0: \n";
    std ::cin >> Login_option;
    // HERE SWITCH CASE IS USED TO CALL THE CORRESPONDING OPTION DEPENDING ON THE USER CHOICE
    switch (Login_option)
    {
    case 1:
        User_Registration_Page(); // calling of function ----> User_Registration_Page()
        break;                    // break statement is used to terminate switch statement execution,

    case 2:
        Admin_Page(); // calling of function ----> Admin_Page();
        break;        // break statement is used to terminate switch statement execution,

    case 0:
        std ::cout << "You have successfully exited from program \n\n ";
        std ::cout << "This project is made by Aman Bagadiya under the guidence of Mr Surendra Gupta Sir \n\n";
        break; // break statement is used to terminate switch statement execution,

    default:
        std ::cout << "You have entered an invalid choice...Exiting...\n \n";
        exit(0); // exit(0) this function is used to successfully terminate and exit from the program
    }
}

// defining of the function Admin_Page()
void User ::Admin_Page()
{
    if (Admin_authentication() == 1)
    {                  // calling of the Admin_authentication() function to verify the admin
        system("cls"); // this is the function which is defined in stlib.h and it is used to clear terminal screen
        std ::cout << "Current GST rate " << gstRate << " percent : \n";
        int select; // defining of the variable
        std ::cout << "Press 1 to update GST rate:\n";
        std ::cout << "Press 2 to view all Invoices   :\n";
        std ::cout << "Press 3 to view all Bookings   :\n";
        std ::cout << "To exit press 0: \n";
        std ::cin >> select;
        // HERE SWITCH CASE IS USED TO CALL THE CORRESPONDING OPTION DEPENDING ON THE ADMIN CHOICE
        switch (select)
        {
        case 1:
            std ::cout << "Enter New GST rates (in percentage): \n";
            std ::cin >> gstRate;
        case 2:
            print_invoice(); // calling of function ---->  print_invoice()
        case 3:
            view_bookings(); // calling of function ----> view_bookings()
        }
    }
}

// defining of the function Admin_authentication()
int User ::Admin_authentication()
{
    system("cls");       // This is the function which is defined in stlib.h and it is used to clear terminal screen
    int admin_check = 1; // defining of the variable
    char loginID[] = "Aman";
    char password[] = "Aman";
    char user_entered_password[11]; // Declaration of the array user_entered_password to store login id
    char user_entered_login[10];    // Declaration of the array user_entered_login to store password

    std ::cout << "****************\t Welcome to Admin Login Page \t*****************\n\n";
    std ::cout << "Kindly enter your credentials below :\n\n";
    std ::cout << "Enter Admin login ID: ";
    std ::cin >> user_entered_login;
    std ::cout << "Enter  Admin password: ";
    std ::cin >> user_entered_password;
    if (strcmp(loginID, user_entered_login) != 0)
    { // Using strcmp function to compare 2 strings loginID and user_entered_login
        admin_check = 0;
    }
    if (strcmp(password, user_entered_password) != 0)
    { // Using strcmp function to compare 2 strings password and user_entered_password
        admin_check = 0;
    }
    if (admin_check == 0)
    {
        std ::cout << "sorry You Have Entered Wrong credentials.\n";
        std ::cout << "Try Again\n";
        return 0;
    }
    else
    {
        return 1; // if admin is successfully verified it will return 1
    }
}

void User ::User_Registration_Page()
{
    // defining of the function User_Registration_Page()
    system("cls"); // this is the function which is defined in stlib.h and it is used to clear terminal screen
    std ::cout << "Enter Your Name\n";
    fflush(stdin); // it is used to clear the buffer
    gets(user1.User_Name);
    std ::cout << "Enter Your Phone Number\n";
    std ::cin >> user1.User_contactdetails;
    std ::cout << "Enter Your Email-id\n";
    fflush(stdin); // it is used to clear the buffer
    gets(user1.User_emial_id);
    std ::cout << "Enter Address\n";
    fflush(stdin); // it is used to clear the buffer
    gets(user1.User_address);
    std ::cout << "Your details registered successfully\n";
    options(); // calling of function ----> options
}

void User ::options()
{
    do
    {
        system("cls"); // this is the function which is defined in stlib.h and it is used to clear terminal screen
        std ::cout << "\n                       ::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
        std ::cout << "\n                       ::         !!!!!!!!!!!!welcome!!!!!!!!!!!!            ::";
        std ::cout << "\n                       ::                                                    ::";
        std ::cout << "\n                       ::    ~> Please select from below options:            ::";
        std ::cout << "\n                       ::                                                    ::";
        std ::cout << "\n                       ::       1.Get Information About Restaurant :>        ::";
        std ::cout << "\n                       ::       2.Order Food:>                               ::";
        std ::cout << "\n                       ::       3.Book table:>                               ::";
        std ::cout << "\n                       ::       4.Cancel your Booking:>                      ::";
        std ::cout << "\n                       ::       5.Exit:>                                     ::";
        std ::cout << "\n                       ::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n";
        std ::cout << "PLEASE SELECT FROM THE ABOVE OPTIONS:\n";
        std ::cin >> option;
        // HERE SWITCH CASE IS USED TO CALL THE CORRESPONDING OPTION DEPENDING ON THE ADMIN CHOICE
        switch (option)
        {
        case 1:
            city_display();
            break; // break statement is used to terminate switch statement execution,
        case 2:
            place_order();
            break; // break statement is used to terminate switch statement execution,
        case 3:
        {
            city_display();
            Booking();
        }
        case 4:
        {
            city_display();
            Cancel_Booking();
        }
        case 5:
        {
            std ::cout << "\nExiting...\n";
            exit(0); // exit(0) this function is used to successfully terminate and exit from the program
        }
        default:
        {
            std ::cout << "Please Enter A Valid Choice";
        }
        }
    } while (1);
}

void User ::place_order()
{
    city_display();
    menu();
}

void User ::city_display()
{
    system("cls"); // this is the function which is defined in stlib.h and it is used to clear terminal screen
    std ::cout << "                       ::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
    std ::cout << "                       ::                                                ::\n";
    std ::cout << "                       ::    ~  Please select your city from below list: ::\n";
    std ::cout << "                       ::                                                ::\n";
    std ::cout << "                       ::     >          1.INDORE                        ::\n";
    std ::cout << "                       ::     >>         2.BHOPAL                        ::\n";
    std ::cout << "                       ::     >>>        3.MUMBAI                        ::\n";
    std ::cout << "                       ::                                                ::\n";
    std ::cout << "                       ::                                                ::\n";
    std ::cout << "                       ::                                                ::\n";
    std ::cout << "                       ::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n";
    getchar();
    std ::cout << "Enter your choice by entering the serial number of city : ";
    int city_choice;
    std ::cin >> city_choice;
    City_choice(city_choice); // calling of function ----> City_choice(city_choice)
}

void User ::City_choice(int city_choice)
{
    switch (city_choice)
    {
    // HERE SWITCH CASE IS USED TO CALL THE CORRESPONDING OPTION DEPENDING ON THE ADMIN CHOICE
    case 1:
    {
        INDORE();
        break; // break statement is used to terminate switch statement execution,
    }
    case 2:
    {
        BHOPAL();
        break; // break statement is used to terminate switch statement execution,
    }
    case 3:
    {
        MUMBAI();
        break; // break statement is used to terminate switch statement execution,
    }
    }
}

void User ::INDORE()
{
    system("cls"); // this is the function which is defined in stlib.h and it is used to clear terminal screen
    std ::cout << "                       ::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
    std ::cout << "                       ::    ~> Please select restaurant below list:       ::\n";
    std ::cout << "                       ::                                                  ::\n";
    std ::cout << "                       ::       Name of Restaurant        Ratings          ::\n";
    std ::cout << "                       ::                                                  ::\n";
    std ::cout << "                       ::       1.Kebabsville             **               ::\n";
    std ::cout << "                       ::       2.Ginger Ganesha          ***              ::\n";
    std ::cout << "                       ::       3.Shree Chotiwala         *                ::\n";
    std ::cout << "                       ::       4.Village                 **               ::\n";
    std ::cout << "                       ::       5.Vidorra                 *                ::\n";
    std ::cout << "                       ::                                                  ::\n";
    std ::cout << "                       ::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n";
    getchar();
    std ::cout << "Enter your choice by entering the serial number of restaurant : \n";
    int restaurant_name;
    std ::cin >> restaurant_name;
    if (option == 1)
        INDORE_info(restaurant_name); // calling of function ----> INDORE_info
    std ::cout << "\n\n";
}

void User ::BHOPAL()
{
    system("cls"); // this is the function which is defined in stlib.h and it is used to clear terminal screen
    std ::cout << "                       ::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
    std ::cout << "                       ::    ~> Please select restaurant below list:       ::\n";
    std ::cout << "                       ::                                                  ::\n";
    std ::cout << "                       ::       Name of Restaurant        Ratings          ::\n";
    std ::cout << "                       ::                                                  ::\n";
    std ::cout << "                       ::       1.Manohar                 **               ::\n";
    std ::cout << "                       ::       2.Cafe Chokolade          **               ::\n";
    std ::cout << "                       ::       3.Greek Food & Beyond     *                ::\n";
    std ::cout << "                       ::       4.Bapu Ki Kutia           **               ::\n";
    std ::cout << "                       ::       5.Al-Beik                 ***              ::\n";
    std ::cout << "                       ::                                                  ::\n";
    std ::cout << "                       ::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n";
    getchar();
    std ::cout << "Enter your choice by entering the serial number of restaurant : \n";
    int restaurant_name;
    std ::cin >> restaurant_name;
    if (option == 1)
        BHOPAL_info(restaurant_name); // calling of function ----> BHOPAL_info
    std ::cout << "\n\n";
}

void User ::MUMBAI()
{
    system("cls"); // this is the function which is defined in stlib.h and it is used to clear terminal screen
    std ::cout << "                       ::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
    std ::cout << "                       ::    ~> Please select restaurant below list:       ::\n";
    std ::cout << "                       ::                                                  ::\n";
    std ::cout << "                       ::       Name of Restaurant        Ratings          ::\n";
    std ::cout << "                       ::                                                  ::\n";
    std ::cout << "                       ::       1.Bayroute Restaurant     **               ::\n";
    std ::cout << "                       ::       2. Hakkasan               ***              ::\n";
    std ::cout << "                       ::       3.Dome Intercontinental   *                ::\n";
    std ::cout << "                       ::       4.Yauatcha Restaurant     **               ::\n";
    std ::cout << "                       ::       5.Pali Village cafe       *                ::\n";
    std ::cout << "                       ::                                                  ::\n";
    std ::cout << "                       ::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n";
    getchar();
    std ::cout << "Enter your choice by entering the serial number of restaurant : \n";

    std ::cin >> restaurant_name;
    if (option == 1)
        MUMBAI_info(restaurant_name); // calling of function ---->   MUMBAI_info
    std ::cout << "\n\n";
}

void User ::INDORE_info(int restaurant_name)
{
    system("cls"); // this is the function which is defined in stlib.h and it is used to clear terminal screen
    switch (restaurant_name)
    {
    case 1:
    {
        std ::cout << "LOCATION : Sayaji Indore, H/1 , Scheme No.54, Vijay Nagar, Indore, Madhya Pradesh - 452010\n\nPHONE :0731 4006666, 73899 48912\n\nMORE INFORMATION: PRICE RANGE =₹805 - ₹1,208\nCUISINES =Indian, Barbecue, Asian\nSPECIAL DIETS =Vegetarian Friendly, Vegan Options, Halal, Gluten Free Options Dinners can now become even more special with a laid back and relaxed time relishing the buffet at a Kebabsville! Sayaji Indore’s buffet style restaurant- Kebabsville is a class apart! Set alongside the pool with lavish seating arrangement, you can have a relaxing buffet full of mouth-watering kebabs, grilled veggies and North Indian food dishes. Variety of kebabs in vegetarian and non-vegetarian options, made by our expert chefs are sure to win your hearts. You can eat the kebabs to your heart’s content and also enjoy the North India dishes alongside. Relish in our lavishly spread buffet service and make your evenings worth remembering.\n";
        break; // break statement is used to terminate switch statement execution,
    }
    case 2:
    {
        std ::cout << "LOCATION LG-12,13, DM Tower, 21/1, Lala Banarasilal Dawar Marg, Race Course Road, Near Zanjeerwala Chowraha, New Palasia, Indore, Madhya Pradesh 452001, India\n\nPhone=+91-731-3301441\n\nMore information-A good and lively ambience with amazing South Indian and Chinese dishes, Ginger Ganesha might just steal your heart with the sheer simplicity of its. If you want to have excellent dosas and super delicious vegetarian biryani then this is the place to be. Do try the Bisebele Bath and the Mexican Roll Dosa. Not only the food, but the restaurant is also known for its quick service which is an added star. This is also a popular place to dine at with the family because of the reasonable price at which you can eat with your heart and the cozy environment that gives you the comfort of being in the company of your loved ones\n\n";
        break; // break statement is used to terminate switch statement execution,
    }
    case 3:
    {
        std ::cout << "LOCATION: 8 B, Raunak Plaza, Opposite Nath Mandir, South Tukoganj, Indore, Madhya Pradesh 452001, India\n\nPHONE: +91-731-2528586\n\nMore Information:  One of the most popular eating joints in the city, Shree Chotiwala serves you with delicious veg Indian food. The wide variety of dishes in the menu might confuse you a bit. That's a good thing, right? There is a booth seating and a family table seating arrangement that are available for different purposes and guests. Not to miss is the veg thali that has a huge range of dishes that are served on a single platter. It's quite a treat in every sense of the word. There are also dishes for the stricity_display followers of Jainism available at this restaurant which essentially means vegetarian dishes that do not even have onion or garlic in it\n";
        break; // break statement is used to terminate switch statement execution,
    }
    case 4:
    {
        std ::cout << "LOCATION: 5th Floor, Central Mall, RNT Marg, Indore, Madhya Pradesh 452001, India\n\nPHONE: +91-731-4006617|+91-78699-10313\n\nMore Information: Sit on a chair, on a khatiya or with a cozy takiya, Village is a sure shot dream to dine at. Serving Rajasthani and Gujarati cuisines as their specialty, the place ensures a fulfilling experience for every foodie who enters the place. The thatched stalls serving street food from various parts of the country add another world charm to the place. The truck with a buffet arrangement and the puppet show are amazing. If you are the kind of person who does not get satisfied with just the food then the overall experience here is going to stay with you for a long time.\n";
        break; // break statement is used to terminate switch statement execution,
    }
    case 5:
    {
        std ::cout << "LOCATION : New Palasia, Indore\n\nCONTACT DETAILS:12345678 \n\nMORE INFORMATION :CUISINES Indian, Asian SPECIAL DIETS Vegan Options, Vegetarian Friendly MEALS Dinner, Lunch.\n";
        break; // break statement is used to terminate switch statement execution,
    }
    }
    std ::cout << "\nPress any key to continue...";
    // getch(); //Here getch will take any character input and then this function will be terminated and the next line of the calling function will execute
}

void User ::BHOPAL_info(int restaurant_name)
{
    system("cls"); // this is the function which is defined in stlib.h and it is used to clear terminal screen
                   // HERE SWITCH CASE IS USED TO CALL THE CORRESPONDING OPTION DEPENDING ON THE USER CHOICE
    switch (restaurant_name)
    {
    case 1:
    {
        std ::cout << "132, Zone 1, Maharana Pratap Nagar, Bhopal\nStreet Food, South Indian, Fast Food, Desserts, North Indian, Chinese, Bakery, Mithai \n8:30am to 10:30pm (Mon-Sun) \n300\n";
    }
    case 2:
    {
        std ::cout << "\n206, Zone 2, Near Arya Bhavan, Maharana Pratap Nagar, Bhopal,\n India Cafe, Bakery \n11 AM to 11 PM \nINR 450\n  \n";
        break; // break statement is used to terminate switch statement execution,
    }
    case 3:
    {
        std ::cout << "Third Floor, DB City Mall, Maharana Pratap Nagar, Bhopal, \nIndia Greek, Mediterranean \n12 Noon to 10:30 PM \nINR 1000\n";
        break; // break statement is used to terminate switch statement execution,
    }

    case 4:
    {
        std ::cout << " 123, Jyoti Shopping Centre, Behind Jyothi Talkies Zone-I, Maharana Pratap Nagar,Bhopal, Madhya Pradesh 462011\n North-Indian, Chinese, South-Indian, Snacks \n7 AM to 11 PM \nINR 500 \n";
        break; // break statement is used to terminate switch statement execution,
    }

    case 5:
    {
        std ::cout << "Regiment Rd,Badabagh, Shahjahanabad,Bhopal, Madhya Pradesh 462001\n Snacks \n1:30 PM to 10 PM\n INR 300\n";
        break; // break statement is used to terminate switch statement execution,
    }
    }
    std ::cout << "\nPress any key to continue...";
    // getch(); //Here getch will take any character input and then this function will be terminated and the next line of the calling function will execute
}

void User ::MUMBAI_info(int restaurant_name)
{
    system("cls"); // this is the function which is defined in stlib.h and it is used to clear terminal screen
                   // HERE SWITCH CASE IS USED TO CALL THE CORRESPONDING OPTION DEPENDING ON THE USER CHOICE
    switch (restaurant_name)
    {
    case 1:
    {
        std ::cout << "Location: Bayroute Juhu, 14, Silver Beach Estate Opposite Juhu Post Office, AB Nair Road, Juhu, Mumbai.\n Foods to try: Harissa Chicken Kebab, Kebab Istanbul, Baklava, Gold Souk are some of the must-try dishes.\n Price for two: INR 3000 \n";
        break; // break statement is used to terminate switch statement execution,
    }
    case 2:
    {
        std ::cout << "Location: Hakkasan, 2nd Floor, Krystal Building, Waterfield Road, Bandra West, Mumbai. \nFoods to try: Everything in Cantonese cuisine menu is so yum and do not forget to try the dumplings. \nPrice for two: INR 2500\n";
        break; // break statement is used to terminate switch statement execution,
    }
    case 3:
    {
        std ::cout << "Location: Dome Intercontinental 135, Marine Drive, Mumbai, \nFoods to try: Afghani Chicken, Brownie and cocktails.\n Price for two: INR 3,500\n";
        break; // break statement is used to terminate switch statement execution,
    }
    case 4:
    {
        std ::cout << "Location: Yauatcha, Raheja Towers, Bandra Kurla Complex, Bandra East, Mumbai\n Foods to try: Crispy Prawns Cheung Fun, Pork char sui bun are extraordinary. \nPrice for two: INR 3,500\n";
        break; // break statement is used to terminate switch statement execution,
    }
    case 5:
    {
        std ::cout << "Location: Pali Village Cafe, 602, Ambedkar Road, Pali Naka, Pali Hill, Bandra West, Mumbai\n Foods to try:  Risotto, Salads, Panna Cotta, Pizzas are worth a try. \nPrice for two: INR 3000\n";
        break; // break statement is used to terminate switch statement execution,
    }
    }
    std ::cout << "\nPress any key to continue...";
    // getch(); //Here getch will take any character input and then this function will be terminated and the next line of the calling function will execute
}

void User ::menu()
{
    // defining of the function menu()
    std ::cout << "\n :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
    std ::cout << "\n\n  ITEMS...................................................................PRICE \n1  Paneer Angara...........................................................220 \n2  Paneer Pasasnda ........................................................210 \n3  Paneer Lababdar.........................................................215 \n4  Paneer Tawa Masala......................................................215 \n5  Paneer Toofani .........................................................220 \n6  Paneer Handi............................................................200 \n7  Paneer Kadai........................................................... 200 \n8  Paneer Tikka Masala.....................................................195 \n9  Paneer Butter Masala....................................................195 \n10 Paneer Palak............................................................188 \n*ROTIES - TANDURI \n11 Cheese Nan .............................................................88 \n12 Hariyali Nan............................................................78 \n13 Kashmiri Nan ...........................................................98 \n14 Plain Nan...............................................................48 \nINDIAN RICE & BIRYANI \n15 Handi Dum Parda Biryani ................................................230 \n16 Special Veg. Biryani....................................................195 \n17 Veg. Hyderabadi Biryani.................................................205 \n18 Veg. Pulao (Plain or Masala)............................................180 \n19 Peas Pulao .............................................................180 \n20 Mushroom Onion Pulao....................................................195 \nSNACKS \n21 Cheese Garlic Bread.....................................................130 \n22 Chesse Corn Chilly Toast................................................130 \n23 Veg. Cutlet ............................................................85 \n24 Aloo Tikki .............................................................100 \n25 Veg. Cheese Sandwich ...................................................90 \nSOUTH INDIAN \n26 Mysore Masala Dosa......................................................140 \n27 Mysore Plain Dosa.......................................................130 \n28 Hyderabadi Masala Dosa .................................................140 \n29 Hyderabadi Plain Dosa ..................................................130 \n*DESSERTS & SWEETS \n30 Sunday Special Ice-cream................................................170 \n31 Almond Carnival Ice-cream ..............................................55 \n32 Kesar Pista Ice-cream ..................................................55 \n33 Kaju Draksh Ice-cream...................................................45 \n34 Butter Scotch Ice-cream.................................................45\n";
    std ::cout << "\n::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n";
    getchar();
    std ::cout << "ENTER THE S.NO. OF THE ITEM FROM THE ABOVE LIST :\n";
    std ::cin >> item;
    std ::cout << "ENTER THE QUANTITY: \n";
    std ::cin >> quantity;
    Bill();
}

void User ::Bill()
{
    // defining of the function Bill()
    item_array[count] = item;
    quantity_array[count] = quantity;
    count++;
    int price;
    // HERE SWITCH CASE IS USED TO CALL THE CORRESPONDING OPTION DEPENDING ON THE ITEM CHOOSEN BY THE USER
    switch (item)
    {
    case 1:
        price = 220 * quantity;
        break; // break statement is used to terminate switch statement execution,
    case 2:
        price = 210 * quantity;
        break; // break statement is used to terminate switch statement execution,
    case 3:
        price = 215 * quantity;
        break; // break statement is used to terminate switch statement execution,
    case 4:
        price = 215 * quantity;
        break; // break statement is used to terminate switch statement execution,
    case 5:
        price = 220 * quantity;
        break; // break statement is used to terminate switch statement execution,
    case 6:
        price = 200 * quantity;
        break; // break statement is used to terminate switch statement execution,
    case 7:
        price = 200 * quantity;
        break; // break statement is used to terminate switch statement execution,
    case 8:
        price = 195 * quantity;
        break; // break statement is used to terminate switch statement execution,
    case 9:
        price = 195 * quantity;
        break; // break statement is used to terminate switch statement execution,
    case 10:
        price = 188 * quantity;
        break; // break statement is used to terminate switch statement execution,
    case 11:
        price = 88 * quantity;
        break; // break statement is used to terminate switch statement execution,
    case 12:
        price = 78 * quantity;
        break; // break statement is used to terminate switch statement execution,
    case 13:
        price = 98 * quantity;
        break; // break statement is used to terminate switch statement execution,
    case 14:
        price = 48 * quantity;
        break; // break statement is used to terminate switch statement execution,
    case 15:
        price = 230 * quantity;
        break; // break statement is used to terminate switch statement execution,
    case 16:
        price = 195 * quantity;
        break; // break statement is used to terminate switch statement execution,
    case 17:
        price = 205 * quantity;
        break; // break statement is used to terminate switch statement execution,
    case 18:
        price = 180 * quantity;
        break; // break statement is used to terminate switch statement execution,
    case 19:
        price = 180 * quantity;
        break; // break statement is used to terminate switch statement execution,
    case 20:
        price = 195 * quantity;
        break; // break statement is used to terminate switch statement execution,
    case 21:
        price = 130 * quantity;
        break; // break statement is used to terminate switch statement execution,
    case 22:
        price = 130 * quantity;
        break; // break statement is used to terminate switch statement execution,
    case 23:
        price = 85 * quantity;
        break; // break statement is used to terminate switch statement execution,
    case 24:
        price = 100 * quantity;
        break; // break statement is used to terminate switch statement execution,
    case 25:
        price = 90 * quantity;
        break; // break statement is used to terminate switch statement execution,
    case 26:
        price = 140 * quantity;
        break; // break statement is used to terminate switch statement execution,
    case 27:
        price = 130 * quantity;
        break; // break statement is used to terminate switch statement execution,
    case 28:
        price = 140 * quantity;
        break; // break statement is used to terminate switch statement execution,
    case 29:
        price = 130 * quantity;
        break; // break statement is used to terminate switch statement execution,
    case 30:
        price = 170 * quantity;
        break; // break statement is used to terminate switch statement execution,
    case 31:
        price = 55 * quantity;
        break; // break statement is used to terminate switch statement execution,
    case 32:
        price = 55 * quantity;
        break; // break statement is used to terminate switch statement execution,
    case 33:
        price = 45 * quantity;
        break; // break statement is used to terminate switch statement execution,
    case 34:
        price = 45 * quantity;
        break; // break statement is used to terminate switch statement execution,
    }

    int gst = (price * gstRate) / 100;
    int total = price + gst;
    grandTotal += total;
    int add;
    std ::cout << "DO YOU WANT TO ADD MORE ITEMS TO YOUR CART YES = 1 / NO = 0 or press any other key to return to main menu :";
    std ::cin >> add;
    switch (add)
    {
    case 0:
    {
        invoice();
        break; // break statement is used to terminate switch statement execution,
    }
    case 1:
    {
        menu();
        break; // break statement is used to terminate switch statement execution,
    }
    }
}

// defining of the function invoice()
void User ::invoice()
{
    system("cls"); // this is the function which is defined in stlib.h and it is used to clear terminal screen
    std ::cout << "**************************************** :) YOUR INVOICE (: ****************************************\n\n\n";

    std ::cout << "                        Customer Name    :  " << user1.User_Name << " \n\n";
    std ::cout << "                        Customer Address :  " << user1.User_address << " \n\n";
    std ::cout << "                        Contact  Details :  " << user1.User_contactdetails << " \n\n";
    std ::cout << "                        Email-id         :  " << user1.User_emial_id << " \n\n";
    std ::cout << "                        Item name                Quantity      \n\n";
    for (int i = 0; i < count; i++)
    {
        std ::cout << "                        "<< menu_array[item_array[i]] <<" ---------> "<<  quantity_array[i] <<"-only\n\n ";
    }
    std ::cout << "----------------------------------------------------------------------------------------------------\n\n";
    // std ::cout << "                         Total             :   %3d Rs/- Only\n\n\n\n", grandTotal;
    std ::cout << "                         Total             :   "<< grandTotal << " Rs/- Only\n\n\n\n";

    std ::cout << "*********************************** Thank you! Do visit again :) 1*********************************** ";
    std ::cout << "\nPress any key to continue...";
    // getch(); //Here getch will take any character input and then this function will be terminated and the next line of the calling function will execute

    save_details(); // calling of function ----> save_details()
    exit(0);        // exit(0) this function is used to successfully terminate and exit from the program
}

void User ::save_details()
{
    FILE *fILE_Pointer;                        // creation of file pointer
    fILE_Pointer = fopen("invoice.txt", "a+"); // opening the file invoice.txt in append plus mode and assigning it to file pointer
    /* Write data to file */
    fprintf(fILE_Pointer, "**************************************** :) YOUR INVOICE (: ****************************************\n\n\n");

    fprintf(fILE_Pointer, "                        Customer Name    :  %s\n\n", user1.User_Name);
    fprintf(fILE_Pointer, "                        Customer Address :  %s\n\n", user1.User_address);
    fprintf(fILE_Pointer, "                        Contact  Details :  %lu\n\n", user1.User_contactdetails);
    fprintf(fILE_Pointer, "                        Email-id         :  %s\n\n", user1.User_emial_id);
    fprintf(fILE_Pointer, "                        Item name                Quantity      \n\n");
    for (int i = 0; i < count; i++)
    {
        fprintf(fILE_Pointer, "                        %s ---------> %d-only\n\n ", menu_array[item_array[i]], quantity_array[i]);
    }
    fprintf(fILE_Pointer, "----------------------------------------------------------------------------------------------------\n\n");
    fprintf(fILE_Pointer, "                         Total             :   %3d Rs/- Only\n\n\n\n", grandTotal);
    /* Close file to save file data */
    fclose(fILE_Pointer);
}

void User ::Booking()
{
    system("cls"); // this is the function which is defined in stlib.h and it is used to clear terminal screen
    std ::cout << "Here is the list of vacant and occupied tables\n\n";
    /*using the for loop to traverse through the array and check each value of element of array and print booked if it is 1 and print vacant if it is 0 */
    for (int k = 0; k < 10; k++)
    {
        if (Table_array[k] == 1)
        {
            std ::cout << "Table no. " << k + 1 << " is already Booked\n";
        }
        else
        {
            std ::cout << "Table no. " << k + 1 << " is vacant\n";
        }
    }

    std ::cout << "Enter the table number of the table you want to book\n";
    std ::cin >> Table_no;
    Table_array[Table_no + 1] == 1; /*assigning 1 to [Table_no+1] of the array to mark it as booked */
    system("cls");                  // this is the function which is defined in stlib.h and it is used to clear terminal screen
    std ::cout << "                       ::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
    std ::cout << "                        Customer Name    :  " << user1.User_Name << "\n\n";
    std ::cout << "                        Contact  Details :  " << user1.User_contactdetails << "\n\n";
    std ::cout << "                        Email-id         :  " << user1.User_emial_id << "\n\n";
    std ::cout << "                        Congratulations table number " << Table_no << " successfully booked\n";
    std ::cout << "                       ::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
    save_booking_details(); // calling of function ----> save_booking_details()
    exit(0);                // exit(0) this function is used to successfully terminate and exit from the program
}
void User ::save_booking_details()
{
    FILE *FILE_Pointer;                        // creation of file pointer
    FILE_Pointer = fopen("booking.txt", "a+"); // opening the file booking.txt in append plus mode and assigning it to file pointer
    /* Write data to file */
    fprintf(FILE_Pointer, "                       ::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    fprintf(FILE_Pointer, "                        Customer Name    :  %s\n\n", user1.User_Name);
    fprintf(FILE_Pointer, "                        Contact  Details :  %lu\n\n", user1.User_contactdetails);
    fprintf(FILE_Pointer, "                        Email-id         :  %s\n\n", user1.User_emial_id);
    fprintf(FILE_Pointer, "                        Congratulations table number %d successfully booked\n", Table_no);
    fprintf(FILE_Pointer, "                       ::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    /* Close file to save file data */
    fclose(FILE_Pointer);
}

void User ::Cancel_Booking()
{
    int cancel;
    system("cls"); // this is the function which is defined in stlib.h and it is used to clear terminal screen
    std ::cout << "Enter table number to cancel your booking \n\n";
    std ::cin >> cancel;
    Table_array[cancel + 1] == 0; /*assigning 0 to [cancel+1] of the array to mark it as vacant */
    system("cls");                // this is the function which is defined in stlib.h and it is used to clear terminal screen
    std ::cout << "                       :::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n";
    std ::cout << "                        Customer Name    :  " << user1.User_Name << "\n\n";

    std ::cout << "                        Contact  Details :  " << user1.User_contactdetails << "\n\n";
    std ::cout << "                        Email-id         :  " << user1.User_emial_id << "\n\n";
    std ::cout << "                        Your booking for table number " << cancel << " successfully canceled\n\n";
    std ::cout << "                       ::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
    exit(0); // exit(0) this function is used to successfully terminate and exit from the program
}
void User ::print_invoice()
{
    FILE *file_pointer;                        // creation of file pointer
    file_pointer = fopen("invoice.txt", "r+"); // opening the file invoice.txt in read plus mode and assigning it to file pointer
    char c;                                    // declaration of char c to read data from the file
    c = fgetc(file_pointer);                   // fgetc is used to fetch data from the file
    /*while loop is used it will print data until the eof occurs*/
    while (c != EOF)
    {
        std ::cout << c;
        c = fgetc(file_pointer);
    }
    /* Close file to save file data */
    fclose(file_pointer);
    exit(0); // exit(0) this function is used to successfully terminate and exit from the program
}
void User ::view_bookings()
{
    FILE *file1_pointer;                        // creation of file pointer
    file1_pointer = fopen("booking.txt", "r+"); // opening the file booking.txt in read plus mode and assigning it to file pointer
    char c;                                     // declaration of char c to read data from the file
    c = fgetc(file1_pointer);                   // fgetc is used to fetch data from the file
    /*while loop is used it will print data until the eof occurs*/
    while (c != EOF)
    {
        std ::cout << c;
        c = fgetc(file1_pointer);
    }
    fclose(file1_pointer); /* Close file to save file data */
    exit(0);               // exit(0) this function is used to successfully terminate and exit from the program
}
