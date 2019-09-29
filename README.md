# RamHacks2019
CarMax Challenge

## Inspiration

We got inspired by all the people around us. This is only our second hackathon and we wanted to come here and shock people, and make a difference. We saw CarMax's challenge and we had a brilliant idea. 

## What it does

We used Arduino to program the LED backlight. We got it to have two boolean values, one for when it is red, and one for when it is green. Green indicated the car is still available, and red indicating the car is sold. We found out that this is a very cheap option as it is easy to find bulk orders of LED lights. Also, every car in the database will have a QR code, so customers can scan it and see all the details of the vehicle.

## How we built it

We used Arduino to program the LED backlight. We got it to have two boolean values, one for when it is red, and one for when it is green. Green indicated the car is still available, and red indicating the car is sold. We used those boolean data values to create a webpage, and on the webpage you can select a vehicle from a dropdown menu. After you select that vehicle, a QR code pops up right beneath it, where you can can then scan it and see all the details. We developed the webpage using HTML, JavaScript,  and CSS. We developed the LED light using Arduino, Java, and Python. Raspberry Pi was used as our server to connect and test out the database and create a working environment with the lights. We also created a mock SQL database to hold valued so we can test out our program.


## Challenges we ran into

We were struggling with the LED light changing based on which vehicle is selected. We found the Raspberry Pi server was un-friendly at times and caused us a lot of hardships.

## Accomplishments that we're proud of

We finished the webpage, it is fully functional and can show the availability of every vehicle in the mock database. The LED light works to an extent and we were proud of connecting to the raspberry pi and linking all of our data.

## What we learned

We learned a lot about Raspberry Pi, and how it functions. Also, how a database works and we were able to create a mock Rest API with vin numbers for every car. Also, we learned about teamwork, as this was not possible if it was purely done alone.

## What's next for CarMax Vehicle Purchase Assister

If selected, we can make a full fledged functioning application instead of a prototype. We are very proud of what we achieved in these last few hours and we hope you will consider us and our hardwork.
