/*** ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ ***/
/*** ------------------------------------------------               Done By Mohammed Reda                      ------------------------------------------------- ***/
/*** ------------------------------------------------            The Full Guide for the C++ Tasks              ------------------------------------------------- ***/
/*** ------------------------------------------------                   [Level 1 Ai]                           ------------------------------------------------- ***/
/*** ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ ***/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	cout << "* "; cout << "* * * * * * * * * " << endl;
	cout << "*                 *" << endl;
	cout << "*                 *" << endl;
	cout << "*  Mohammed Reda  *" << endl;
	cout << "*    Section 5    *" << endl;
	cout << "*                 *" << endl;
	cout << "* * * * * * * * * * " << endl;
	cout << " " << endl;
	cout << "#1 Expression Answer's Task " << endl;
	//(1) Complete the table below by writing the value of each expression in the "Value column".
	// hint : الأولوية دائما للأقواس ثم الضرب والقسمة وباقي القسمة "%" ثم الجمع والطرح
	//Question 1 : 6 + 3 * 5
	//Question 2 : 12 / 2 - 4
	//Question 3 : 9 + 14 * 2 - 6
	//Question 4 : 5 + 19 % 3 - 1
	//Question 5 : ( 6 + 2 ) * 3
	//Question 6 : 14 / ( 11 - 4 )
	//Question 7 : 9 + 12 * ( 8 - 3 )
	//Question 8 : ( 6 + 17 ) % 2 - 1 
	//Question 9 : ( 9 - 3 ) * ( 6 + 9 ) / 3
	cout << "Question 1 = 21" << endl;
	cout << "Question 2 = 2" << endl;
	cout << "Question 3 = 31" << endl;
	cout << "Question 4 = 5" << endl;
	cout << "Question 5 = 24" << endl;
	cout << "Question 6 = 2" << endl;
	cout << "Question 7 = 69" << endl;
	cout << "Question 8 = 0" << endl;
	cout << "Question 9 = 30" << endl;
	cout << "" << endl;
	cout << "#2 Write Expressions for the following algebric expression Answer's Task " << endl;
	// (2) Write C++ expressions for the following algebaric expressions :-
	// hint : السؤال طالب منك تكتبله المعادلات دي على هيئة كود
	//Question1 : y = 6x
	//Question2 : a = 2b + 4c
	//Question3 : y =x²
	//Question4 : g = x+2 / z²
	//Question5 : y = x² / z²
	double x, y, a;
	//Question1 Answer ⬇
	cout << "Enter the first number : ";
	cin >> x;
	y = 6 * x;
	cout << "y = 6 * x , so y = " << y << endl;
	cout << "" << endl;
	//Question2 Answer ⬇
	double b, c;
	cout << "Enter b : ";
	cin >> b;
	cout << "Enter c : ";
	cin >> c;
	a = 2 * b + 4 * c;
	cout << "a = 2 * b + 4 * c, so a = " << a << endl;
	cout << "" << endl;
	//Question3 Answer ⬇
	cout << "Enter x : ";
	cin >> x;
	cout << "pow(x, 2), so x = ";
	cout << pow(x, 2) << endl;
	cout << "" << endl;
	//Question4 Answer ⬇
	double z;
	cout << "Enter x : ";
	cin >> x;
	cout << "Enter z : ";
	cin >> z;
	cout << "g = (x + 2) / (pow(z, 2)), so g = " << (x + 2) / (pow(z, 2)) << endl;
	cout << "" << endl;
	//Question5 Answer ⬇
	cout << "Enter x : ";
	cin >> x;
	cout << "Enter z : ";
	cin >> z;
	cout << "y = (pow(x, 2)) / (pow(z, 2)), so y = " << (pow(x, 2)) / (pow(z, 2)) << endl;
	cout << "" << endl;
	// (3) تاسك الضرب والقسمة والجمع والطرح
	// solution method : وهتجمعهم مع بعض أو تطرحهم أو تقسمهم أو تضربهم في جملة الطباعة x,y هتعرف متغيرين 
	cout << "#3 Calculator Task " << endl;
	double distance, hours, time, sallery;
	cout << "Calcluator for Addition & subtraction & multiplication & division " << endl;
	cout << "Please Enter the first number : ";
	cin >> x;
	cout << "Please Enter the sec number  : ";
	cin >> y;
	cout << "Your Addition is : ";
	cout << x + y << endl;
	cout << "Your subtraction is : ";
	cout << x - y << endl;
	cout << "Your multiplication is : ";
	cout << x * y << endl;
	cout << "Your division is : ";
	cout << x / y << endl;
	cout << "" << endl;
	double r;
	// (4) تاسك حساب مساحة الدائرة 
	// hint : هتخلي اليوزر يدخل رقم في المتغير الخاص بنصف القطر بتاع الدائرة، وهتكمل المعادلة بتاعت حساب مساحة الدائرة وهتعوض في الباي بالمتغير بتاعك
	// solution method : ودا هو نصف القطر وهنحط قانون مساحة الدائرة عادي جدا الي هو باي نق تربيع وتخليه يطبعها   r هتعمل متغير
	cout << "#4 Circle Space Task" << endl;
	cout << "enter your (r) to Calculate your Circle space : ";
	cin >> r;
	cout << "The Circle space = " << 3.14 * (r * r);
	cout << "cm" << endl;
	cout << "" << endl;
	// (5) حساب سرعة الطائرة
	// solution method : قانون حساب السرعة اصلا هو (المسافة على الزمن) هتعمل متغيرين واحد بالمسافة وواحد بالزمن وهتقسمهم على بعض وتطبعهم
	cout << "#5 Plane speed Task" << endl;
	cout << "To Calculate the Plane speed" << endl;
	cout << "Put the distance : ";
	cin >> distance;
	cout << "Put the time in sec : ";
	cin >> time;
	cout << "The Plane speed is : ";
	cout << distance / time;
	cout << " km/h" << endl;
	cout << "" << endl;
	// (6) Write a C++ program that reads hours worked and the pay rate from the user to calculate the salary.
	// Hours Worked 10 , Pay rate 50 , Charges 50*10=500
	// hint : طالب منك راتب موظف يومي ومديلك الساعات الي هو اشتغلها والأجر الي بياخده على الساعة الواحدة المطلوب منك إنك تعمل متغيرين واحد لساعات العمل وواحد للأجر في الساعة وتضربهم في بعض
	cout << "#6 Daily sallery Task" << endl;
	cout << "To Calculate the daily sallery" << endl;
	cout << "enter the Hours worked : ";
	cin >> hours;
	cout << "enter the Pay rate sallery : ";
	cin >> sallery;
	cout << "Your daily sallery is : ";
	cout << hours * sallery;
	cout << "$" << endl;
	cout << "" << endl;
	// (7) Cmath Library Usage.
	// hint : عشان تشغل مكتبة السي ماث هتطلع في تاني سطر تضيف المكتبة بالكود دا 
	// #include <cmath> , ب كدا انت تقدر تستعين بدوال ( جا , جتا , ظا , اُسس , الجذر) وحاجات كتير لازم تكون عارف اوامر المكتبة قبل ماتبدأ شغل بيها
	cout << "#7 cmath calculator Task" << endl;
	cout << "Enter the Sin : ";
	cin >> x;
	double thesin = sin(x);
	cout << "Your Sin = ";
	cout << thesin << endl;
	cout << "Enter the cos : ";
	cin >> x;
	cout << "your cos = ";
	double thecos = cos(x);
	cout << thecos << endl;
	cout << "Enter the power : ";
	cin >> x >> z;
	cout << "your pow = ";
	double thepow = pow(x, z);
	cout << thepow << endl;
	cout << "Enter the sqrt : ";
	cin >> x;
	cout << "your sqrt = ";
	double thesqrt = sqrt(x);
	cout << thesqrt << endl;
	cout << "Enter the floor : ";
	cin >> x;
	cout << "your floor = ";
	double thefloor = floor(x);
	cout << thecos << endl;
	cout << "" << endl;
	// (8) Approach : The formula distance between two points in 3 dimension i.e (x1, y1, z1) and (x2,y2,z2) has been derived from Pythagorean theorem which is : Distance = √(x2 - x1)² + (y2 - y1)²  + (z2 - z1)² 
	// طالب منك تكتب معادلة نظرية فيثاغورث لحساب المسافة بين نقطتين
	cout << "#8 Pythagoras Task" << endl;
	double X, Y, Z;
	cout << "To Calculate the Pythagoras equation" << endl;
	cout << "Enter the x1 : ";
	cin >> x;
	cout << "Enter the x2 : ";
	cin >> X;
	cout << "Enter the y1 : ";
	cin >> y;
	cout << "Enter the y2 : ";
	cin >> Y;
	cout << "Enter the z1 : ";
	cin >> z;
	cout << "Enter the z2 : ";
	cin >> Z;
	double XMinus;
	double YMinus;
	double ZMinus;
	XMinus = X - x;
	YMinus = Y - y;
	ZMinus = Z - z;
	distance = sqrt(pow(XMinus, 2) + pow(YMinus, 2) + pow(ZMinus, 2));
	cout << "The equation = " << distance << endl;
	cout << "" << endl;
	// (9) Determine the output of theses compound expressions if they are inside cout statement :
	//Q1 : 25 < 7 || 15 > 36 
	//Q2 : 15 > 36 || 3 < 7
	//Q3 : 14 > 7 && 5 <= 5
	//Q4 : 4 > 3 && 17 <= 7
	//Q4 : ! false
	//Q5 : ! (13 !=7)
	//Q6 : 9 != 7 && !0. true && true 
	//Q7 : 5 > 1 && 7
	/*hint : هنا طالب منك تقوله ايه الي هيتطبع من الاسئلة الي فوق دي ف السي أوت*/
	/*hint : true خليك فاكر ان العلامة دي || يعني "أو" يعني لو لقيتها لازم يكون فيه معادلة واحدة على الأقل صحيحة عشان تطبع */
	/*hint : false لان لو واحدة بس غلط هيطبع  true وخليك فاكر برضو ان العلامة دي && يعني "و" يعني لو لقيتها لازم تكون المعادلتين صحيحين عشان تطبع */
	/*hint : وخليك فاكر برضو ان العلامة دي ! خاصة ب النفي بمعنى ان لو فيه معادلة أصلها 0 لو لقيت جنبها نفي هتحولها للعكس يعني ل 1*/
	/*hint : false نروح للي جنبها بيقولك ال15 اكبر من ال36؟ طبعا لا برضو ف الي هيطلع من الطباعة هو 0 أو  or السؤال الاول مثلا بيقولك ال25 اصغر من ال7؟ الاجابة طبعا لا بس استنى لان دي ال*/
	cout << "#9 output expressions Task" << endl;
	cout << "Q1 = 0" << endl;
	cout << "Q2 = 1" << endl;
	cout << "Q3 = 1" << endl;
	cout << "Q4 = 0" << endl;
	cout << "Q5 = 0" << endl;
	cout << "Q6 = 1" << endl;
	cout << "Q7 = 1" << endl;
	cout << "Q8 = 0" << endl;
	cout << "" << endl;
	// (10) (What's prints?) Assume i = 1, j = 2, k = 3 and m = 2. What does each statement print?
	// a) cout << ( i == 1 ) << endl;
	// b) cout << ( j == 3 ) << endl;
	// c) cout << ( i >= 1 && j < 4 ) << endl;
	// d) cout << ( m <= 99 && k < m ) << endl;
	// e) cout << ( j >= i || k == m ) << endl;
	// f) cout << ( k + m < j || 3 - j >= k ) << endl;
	// g) cout << ( !m ) << endl;
	// h) cout << ( ! ( j - m) ) << endl;
	// i) cout << ( ! ( k > m ) << endl;
	// hint : نفس فكرة الي فوق بس مديك قيمة كل متغير وبيقارنلك بينهم بدل الارقام والي عليك تقول ايه الي بيتطبع فالأخر
	cout << "#10 (What's prints Task)" << endl;
	cout << "a = 1" << endl;
	cout << "b = 0" << endl;
	cout << "c = 1" << endl;
	cout << "d = 1" << endl;
	cout << "e = 1" << endl;
	cout << "f = 0" << endl;
	cout << "g = 0" << endl;
	cout << "h = 1" << endl;
	cout << "i = 0" << endl;
	cout << "" << endl;
	// (11) Sales Prediction
	// hint : بيقولك احسب مصاريف شركة لو نسبتها من اجمالي المبيعات 62% وجمعوا 4.6 مليون دولار مبيعات السنة دي
	// hint : هتعمل متغيرين واحد اليوزر يدخله والتاني تضرب المتغير الاول فيه وتطبعه
	float profits, sales;
	cout << "#11 Sales Prediction Task" << endl;
	cout << "Enter the Company Total Sales : ";
	cin >> sales;
	profits = sales * 0.62;
	cout << "The Company profit's = " << float(profits) << "$" << endl;
	cout << "" << endl;
	// (12) Sales Tax
	//hint : طالب منك برنامج تحسب منه ضرائب المبيعات علما ان ضرايب الولاية 4% والضرايب في الدولة 2% يعني هتعمل 3 متغيرات واحد اليوزر يدخله والتاني تضربه ف2% والتالت ف4% وهنا انا استخدمت دالة السويتش احسن بحيث أخيره واعرف هو عايز يحسب ايه بالضبط
	cout << "#12 Sales Tax Task" << endl;
	cout << "Which Tax you wanna calculate ?" << endl;
	cout << "a) state tax " << endl;
	cout << "b) country tax" << endl;
	char tax;
	float stateinput, countryinput, state, country, totalstate, totalcountry;
	cout << "Type a or b to choose which tax calculator you want : ";
	cin >> tax;
	switch (tax)
	{
	case 'a':
		cout << "put your state sales : ";
		cin >> stateinput;
		state = stateinput * 0.04;
		totalstate = stateinput - state;
		cout << "Your state profits sales after taxes = " << totalstate << "$" << endl; //ضفت سطر جديد بيحسب الارباح بعد الضرائب
		cout << "Your state sales Taxes = " << state << "$" << endl; // سطر الضرائب لوحده
		cout << "" << endl;
		break;
	case 'b':
		cout << "Put your Country sales : ";
		cin >> countryinput;
		country = countryinput * 0.02;
		totalcountry = countryinput - country;
		cout << "Your country Profits sales after taxes = " << totalcountry << "$" << endl; //نفس الكلام هنا
		cout << "Your country taxes = " << country << "$" << endl;
		cout << "" << endl;
		break;
	default:
		cout << "Please enter a or b only!" << endl;
		cout << " " << endl;
	}
	// (13) Resturant Bill
	// hint : طالب منك تحسب الضرائب والتِبس في فاتورة مطعم لوجبة سعرها 44.5$ وبيقولك الضريبة 6.75% والتِبس 15% وتحسبه مع الضريبة
	// hint : طالب منك كمان تطبع سعر الوجبة، وقيمة الضريبة وقيمة التِبس والناتج النهائي في الاخر
	// hint : وخلاص هنخلي اليوزر الي هو الكاشير يحط سعر الوجبة والباقي يتعمل بشكل اوتوماتيك أحسن cout بس بدل مانعملهم 
	cout << "#13 Resturant Bill Task" << endl;
	double mealcost, taxamount, tipamount, totalbill;
	cout << "The meal cost = ";
	cin >> mealcost;
	taxamount = mealcost * 0.0675;
	cout << "The tax amount = " << taxamount << "$" << endl;
	tipamount = (taxamount + mealcost) * 0.15;
	cout << "The tip amount = " << tipamount << "$" << endl;
	totalbill = mealcost + taxamount + tipamount;
	cout << "The Total Bill = " << totalbill << "$" << endl;
	cout << "" << endl;
	// (14) Write a program that converts Celsius to Fahrenheit 
	// hint : طالب منك تحول درجة الحرارة من سيلزيوس الى فهرنهايت، ولكن هنزود التحويل للعكس كمان بالسويتش عشان نخيره 
	cout << "#14 Celsius to Fahrenheit Task" << endl;
	cout << "Which equation do you want?" << endl;
	cout << "a) Celsius to Fahrenheit. " << endl;
	cout << "b) Fahrenheit to Celsius. " << endl;
	char equation;
	cin >> equation;
	switch (equation)
	{
	case 'a':
		cout << "Enter your Heat in Celsius : ";
		double Celsius, Fahrenheit;
		cin >> Celsius;
		Fahrenheit = (1.8 * Celsius) + 32;
		cout << "The heat in Fahrenheit = " << Fahrenheit << " degree" << endl;
		cout << "" << endl;
		break;
	case 'b':
		cout << "Enter your Heat in Fahrenheit : ";
		cin >> Fahrenheit;
		Celsius = (Fahrenheit - 32) * 1.8;
		cout << "Your Heat in Celsius = " << Celsius << " degree" << endl;
		cout << "" << endl;
	}
	// (15) Write a program to calculate the volume of a sphere 4/3 PI r,3
	cout << "#15 Volume of a sphere Task" << endl;
	double volume, sphr;
	cout << "Enter the sphere r : ";
	cin >> sphr;
	volume = (4 / 3) * 3.4 * sphr;
	cout << "The sphere volume = " << volume << " cm " << endl;
	cout << "" << endl;
	// (16) Write a program to print out the perimeter of rectangle given its height and width, perimeter = 2 (width=height).
	cout << "#16 perimeter of a rectangle Task" << endl;
	cout << "Enter the rectangle width : ";
	double rect_height, rect_width, perimeter;
	cin >> rect_width;
	cout << "Enter the rectange height : ";
	cin >> rect_height;
	perimeter = 2 * (rect_width + rect_height);
	cout << "Your rectangle perimeter = " << perimeter << " cm " << endl;
	cout << "" << endl;
	// (17) Write a program that converts kilometer per hour to miles per hour, miles = (kilometers - 0.6213712).
	// info : هنا انا عملتها بالسويتش برضو عشان اخليه يحول من الكيلومتر للميل والعكس 
	cout << "#17 Kilometers to miles convertor Task" << endl;
	cout << "Choose your equation : " << endl;
	cout << "a) kilometers to miles." << endl;
	cout << "b) miles to kilometers" << endl;
	char equation2;
	cin >> equation2;
	switch (equation2)
	{
	case 'a':
		cout << "Put your the distance in kilometers : ";
		double kilometers, miles;
		cin >> kilometers;
		miles = (kilometers * 0.6213712);
		cout << "The distance in miles = " << miles << " m/h" << endl;
		cout << "" << endl;
		break;
	case 'b':
		cout << "Put your distance in miles";
		cin >> miles;
		kilometers = (0.625 * miles);
		cout << "The distance in kilometers = " << kilometers << " k/h" << endl;
		cout << "" << endl;
		break;
	default:
		cout << "Error! enter a correct choice." << endl;
		cout << "" << endl;
	}
	// (18) Write a program that takes hours and mintues as input and outputs tohe total number of minutes ( 1 hour 30 minutes = 90 minutes).
	// (19) Write a program that takes an integer as the number of minutes and outputs the total hours and minutes ( 90 minutes = 1 hour 30 minutes).
	// info : دول سؤالين طالب منك تعمل كل واحد لوحده عادي بس انا عن نفسي فضلت اعملها بالسويتش لان الاتنين شبه بعض

	cout << "#18,19 Hours & minutes convertor to minutes Task." << endl;
	cout << "Choose your equation: " << endl;
	char equation3;
	cout << "a) convert time to minutes." << endl;
	cout << "b) convert minutes to hours & minutes" << endl;
	cin >> equation3;
	switch (equation3)
	{
	case 'a':
		double hour, minutes, fullminutes;
		cout << "Enter the hours: ";
		cin >> hour;
		cout << "Enter the minutes: ";
		cin >> minutes;
		fullminutes = (hour * 60) + minutes;
		cout << hour << " hour " << minutes << " minutes = " << fullminutes << " minutes " << endl;
		cout << "" << endl;
		break;
	case 'b':
		cout << "Enter the minutes: ";
		int fullhours, halfminutes, minute;
		cin >> minute;
		fullhours = (minute / 60);
		halfminutes = minute % 60;
		cout << minute << " minutes = " << fullhours << " hour " << halfminutes << " minutes " << endl;
		cout << " " << endl;
		break;
	}
	// (20) Circuit Board Price.
	// Qinfo : طالب مني أحسب الأرباح ل شركة الكترونيات الي بتاخد نسبة 40% من منتج قيمته 12.67 دولار
	// inf : حبيت أضيف بالمرة ان اليوزر يكتب عدد المنتجات المُباعة عشان الكود يكون ليه معنى
	cout << "#20 Circuit Board Price Task" << endl;
	double product, companyprofits;
	cout << "Enter the amount of the saled product: ";
	cin >> product;
	companyprofits = (product * 12.67) * 0.4;
	cout << "The company profit's from the recent sales are = " << companyprofits << "$" << endl;
	cout << "" << endl;
	// (21) Distance per Tank of Gas.
	// Qinfo : طالب مني أحسب المسافة الي العربية هتمشيها لحد ما التانك يخلص في المدينة مرة وفي الطريق مرة، علما ان العربية داخل المدينة بتمشي 21.5 ميل لكل جالون وعلى الطريق السريع 26.8 ميل لكل جالون علما بأن العربية أخرها 20 جالون
	cout << "#21 Distance per Tank of Gas Task" << endl;
	double carDistance, noGallons, avgMiles;
	noGallons = 20;
	avgMiles = 24.1;
	cout << "The Distance = " << noGallons * avgMiles << " miles " << endl;
	cout << " " << endl;
	// (22) Write a C++ Program that reads an integer number in 1:7 and prints the day name.
	cout << "#22 Day Number Switch Task" << endl;
	cout << "Enter the Day number :";
	int dayNumber;
	cin >> dayNumber;
	switch (dayNumber)
	{
	case 1:
		cout << "The day is Sunday" << endl;
		cout << " " << endl;
		break;
	case 2:
		cout << "The day is Monday" << endl;
		cout << " " << endl;
		break;
	case 3:
		cout << "The day is Tuesday" << endl;
		cout << " " << endl;
		break;
	case 4:
		cout << "The day is Wednesday" << endl;
		cout << " " << endl;
		break;
	case 5:
		cout << "The day is Thursday" << endl;
		cout << " " << endl;
		break;
	case 6:
		cout << "The day is Friday" << endl;
		cout << " " << endl;
		break;
	case 7:
		cout << "The day is Saturday" << endl;
		cout << " " << endl;
		break;
	default:
		cout << "Invalid day number!" << endl;
		cout << "" << endl;
	}
	// (23) Write a C++ Program that takes the month number from the user 1:12 and prints the month name
	cout << "#23 Enter day month: ";
	int dayMonth;
	cin >> dayMonth;
	switch (dayMonth)
	{
	case 1:
		cout << "The month name January" << endl;
		cout << "" << endl;
		break;
	case 2:
		cout << "The month name February" << endl;
		cout << "" << endl;
		break;
	case 3:
		cout << "The month name March" << endl;
		cout << "" << endl;
		break;
	case 4:
		cout << "The month name April" << endl;
		cout << "" << endl;
		break;
	case 5:
		cout << "The month name May" << endl;
		cout << "" << endl;
		break;
	case 6:
		cout << "The month name June" << endl;
		cout << "" << endl;
		break;
	case 7:
		cout << "The month name July" << endl;
		cout << "" << endl;
		break;
	case 8:
		cout << "The month name August" << endl;
		cout << "" << endl;
		break;
	case 9:
		cout << "The month name September" << endl;
		cout << "" << endl;
		break;
	case 10:
		cout << "The month name October" << endl;
		cout << "" << endl;
		break;
	case 11:
		cout << "The month name November" << endl;
		cout << "" << endl;
		break;
	case 12:
		cout << "The month name December" << endl;
		cout << "" << endl;
		break;
	default:
		cout << "Invalid month number!" << endl;
		cout << "" << endl;
	}
	// (24) Write a Program that takes two number from the user and prints their division. If the user try to divide by zero, the program should print a message division by zero is not allowable.
	cout << "#24 Divison Task" << endl;
	double firstNumber, secondNumber;
	cout << "Enter the first number : ";
	cin >> firstNumber;
	cout << "Enter the sec Number : ";
	cin >> secondNumber;
	if (firstNumber != 0 && secondNumber == 0 || firstNumber == 0 && secondNumber == 0)
	{
		cout << "division by zero is not allowable!" << endl;
		cout << "" << endl;
	}
	else if (firstNumber && secondNumber != 0)
	{
		cout << "The division answer = " << firstNumber / secondNumber << endl;
		cout << "" << endl;
	}
	// (25) Write a C++ program to print the age stage if the user ennters a certain age.
	cout << "#25 Certain age." << endl;
	cout << "Enter your Age: ";
	int Age;
	cin >> Age;
	if (Age <= 7 && Age != 0)
	{
		cout << "Your Stage of life is Early childhood (infantia)." << endl;
		cout << " " << endl;
	}
	else if (Age >= 7 && Age < 15)
	{
		cout << "Your Stage of life is Childhood (pueritia). " << endl;
		cout << " " << endl;
	}
	else if (Age >= 14 && Age < 29)
	{
		cout << "Your Stage of life is Adolescence (adolescentia). " << endl;
		cout << " " << endl;
	}
	else if (Age >= 28 && Age < 51)
	{
		cout << "Your Stage of life is Youth (iuventus). " << endl;
		cout << " " << endl;
	}
	else if (Age >= 50 && Age < 71)
	{
		cout << "Your Stage of life is Maturity (gravitas). " << endl;
		cout << " " << endl;
	}
	else if (Age >= 70 && Age < 101)
	{
		cout << "Your Stage of life is Old age (senectus). " << endl;
		cout << " " << endl;
	}
	else if (Age >= 101)
	{
		cout << "Make sure you inputed a correct age!" << endl;
		cout << " " << endl;
	}
	// (26) using switch program evalute the user's answer for a question based on the user's answer, please select the correct answer for the following question, the sum of 5+5 = , a) 2 , b) 3 , c) 5 , d) 10.
	cout << "#26 Using switch program make a question based on the user's answer Task" << endl;
	cout << "Answer the Following Question :-" << endl;
	cout << "The sum of 5+5 = " << endl;
	cout << "a ) 8" << endl;
	cout << "b ) 6" << endl;
	cout << "c ) 10" << endl;
	cout << "d ) 12" << endl;
	char choose;
	cout << "Enter the answer character :" << endl;
	cin >> choose;
	switch (choose)
	{
	case 'a':
		cout << "Wrong Answer!" << endl;
		cout << " " << endl;
		break;
	case 'b':
		cout << "Wrong Answer!" << endl;
		cout << "" << endl;
		break;
	case 'c':
		cout << "Your Answer is Correct!" << endl;
		cout << "" << endl;
		break;
	case 'd':
		cout << "Wrong Answer!" << endl;
		cout << "" << endl;
		break;
	default:
		cout << "Invalid character, make sure you choosed a right one!" << endl;
		cout << "" << endl;
	}
	// (27) Write a program that inputs three integers from the keyboard and prints the sum, average, product, smallest and largest of the numbers.
	int firstInt, secInt, thirdInt;
	cout << "#27 sum & average * product & smallest and largest number Task" << endl;
	cout << "Input first integer: ";
	cin >> firstInt;
	cout << "Input sec integer: ";
	cin >> secInt;
	cout << "Input third integer: ";
	cin >> thirdInt;
	cout << "Sum = " << firstInt + secInt + thirdInt << endl;
	cout << "Average = " << (firstInt + secInt + thirdInt) / 3 << endl;
	cout << "Product = " << firstInt * secInt * thirdInt << endl;
	if (firstInt < secInt && firstInt < thirdInt)
	{
		cout << "smallest = " << firstInt << endl;
	}
	else if (secInt < firstInt && secInt < thirdInt)
	{
		cout << "smallest = " << secInt << endl;
	}
	else if (thirdInt < firstInt && thirdInt < secInt)
	{
		cout << "smallest = " << thirdInt << endl;
	}
	if (firstInt > secInt && firstInt > thirdInt)
	{
		cout << "Largest = " << firstInt << endl;
		cout << "" << endl;
	}
	else if (secInt > firstInt && secInt > thirdInt)
	{
		cout << "Largest = " << secInt << endl; 
		cout << "" << endl;
	}
	else if (thirdInt > firstInt && thirdInt > secInt)
	{
		cout << "Largest = " << thirdInt << endl;
		cout << "" << endl;
	}
	// (28) Dr.Suarez teaches a literature class and uses the following 10 point grading scale for all of his exams.
	cout << "#28 Score Task." << endl;
		int score;
	cout << "Enter your score : ";
	cin >> score;
	if (score >= 90 && score <= 101)
	{
		cout << "Your Grade is A" << endl;
		cout << "" << endl;
	}
	else if (score >= 80 && score < 90)
	{
		cout << "Your Grade is B" << endl;
		cout << "" << endl;
	}
	else if (score >= 70 && score < 80)
	{
		cout << "Your Grade is C" << endl;
		cout << "" << endl;
	}
	else if (score >= 60 && score < 70)
	{
		cout << "Your Grade is D" << endl;
		cout << "" << endl;
	}
	else if (score < 60 && score >= 0)
	{
		cout << "Your Grade is F" << endl;
		cout << "" << endl;
	}
	// (29) Write a program that reads three nonzero double values ... etc
	cout << "#29 Triangle Task" << endl;
	double firstSide, secondSide, thirdSide;
	cout << "Put the Triangle first side value: ";
	cin >> firstSide;
	cout << "Put the Triangle second side value: ";
	cin >> secondSide;
	cout << "Put the Triangle third side value: ";
	cin >> thirdSide;
	if ((firstSide + secondSide > thirdSide) &&  (secondSide + thirdSide > firstSide) && (thirdSide + firstSide > secondSide))
	{
		cout << "The Three sides reprepresent a triangle" << endl;
		cout << "" << endl;
	}
	else
	{
		cout << "The Three sides doesn't reprepresent a triange" << endl;
		cout << "" << endl;
	}
	return 0;
}
