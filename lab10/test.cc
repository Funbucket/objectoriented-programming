#include "gtest/gtest.h"
#include "CarPartsFactory.h"
#include "HyundaiPartsFactory.h"
#include "KiaPartsFactory.h"
#include "CarBuilder.h"
#include "Car.h"

CarPartsFactory* factory1 = HyundaiPartsFactory::GetInstance();
CarPartsFactory* factory2 = KiaPartsFactory::GetInstance();

CarBuilder builder1(factory1);
Car* car1 = builder1
        .CreateDoor()
        .CreateRoof()
        .SetColor("red")
        .Build();

CarBuilder builder2(factory1);
Car* car2 = builder2
        .CreateDoor()
        .Build();

CarBuilder builder3(factory2);
Car* car3 = builder3
        .CreateRoof()
        .CreateDoor()
        .CreateWheel()
        .SetColor("white")
        .Build();

CarBuilder builder4(factory2);
Car* car4 = builder4
        .SetColor("gray")
        .Build();

CarBuilder builder5(factory1);
Car* car5 = builder5.Build();

CarBuilder builder6(factory2);
Car* car6 = builder6
        .CreateRoof()
        .CreateWheel()
        .SetColor("blue")
        .Build();

CarBuilder builder7(factory1);
Car* car7 = builder7
        .CreateDoor()
        .CreateWheel()
        .SetColor("navy")
        .Build();

CarBuilder builder8(factory2);
Car* car8 = builder8
        .CreateWheel()
        .SetColor("yellow")
        .Build();

CarBuilder builder9(factory1);
Car* car9 = builder9
        .CreateRoof()
        .SetColor("green")
        .Build();

CarBuilder builder10(factory2);
Car* car10 = builder10
        .CreateWheel()
        .CreateDoor()
        .CreateRoof()
        .SetColor("brown")
        .Build();

TEST(car1, GetSpecTest) {
    EXPECT_EQ(car1->GetSpec(), "Car([hyundai] Door, [hyundai] Roof, red)");
}

TEST(car2, GetSpecTest) {
    EXPECT_EQ(car2->GetSpec(), "Car([hyundai] Door, black)");
}

TEST(car3, GetSpecTest) {
    EXPECT_EQ(car3->GetSpec(),
"Car([kia] Door, [kia] Wheel, [kia] Roof, white)");
}

TEST(car4, GetSpecTest) {
    EXPECT_EQ(car4->GetSpec(), "Car(gray)");
}

TEST(car5, GetSpecTest) {
    EXPECT_EQ(car5->GetSpec(), "Car(black)");
}

TEST(car6, GetSpecTest) {
    EXPECT_EQ(car6->GetSpec(), "Car([kia] Wheel, [kia] Roof, blue)");
}

TEST(car7, GetSpecTest) {
    EXPECT_EQ(car7->GetSpec(), "Car([hyundai] Door, [hyundai] Wheel, navy)");
}

TEST(car8, GetSpecTest) {
    EXPECT_EQ(car8->GetSpec(), "Car([kia] Wheel, yellow)");
}

TEST(car9, GetSpecTest) {
    EXPECT_EQ(car9->GetSpec(), "Car([hyundai] Roof, green)");
}

TEST(car10, GetSpecTest) {
    EXPECT_EQ(car10->GetSpec(),
"Car([kia] Door, [kia] Wheel, [kia] Roof, brown)");
}
