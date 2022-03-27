#include "gtest/gtest.h"
#include "Triangle.h"
#include "Circle.h"
#include "Rectangle.h"
#include "ShapeUtil.h"

ShapeUtil* Util = ShapeUtil::GetInstance();

Circle c1(3);
Circle c2(5);
Circle c3(2);
Circle c4 = c1 + c2;
Circle c5 = c1 + c3;
Circle c6 = c2 + c3;
Circle c7 = c1 + c1;
Circle c8 = c2 + c2;
Circle c9 = c3 + c3;
Circle c10 = c4 + c3;
Circle c11 = c7 + c2;
Circle c12 = c8 + c3;
Circle c13 = c9 + c1;

TEST(CircleTest, OperatorTest1) {
  EXPECT_EQ(c4.radius(), 8);
}

TEST(ShapeUtilTest1, ClacCircleAreaTest1) {
  EXPECT_FLOAT_EQ(Util->CalcArea(c4), 200.96);
}

TEST(CircleTest, OperatorTest2) {
  EXPECT_EQ(c5.radius(), 5);
}

TEST(ShapeUtilTest1, ClacCircleAreaTest2) {
  EXPECT_FLOAT_EQ(Util->CalcArea(c5), 78.5);
}

TEST(CircleTest, OperatorTest3) {
  EXPECT_EQ(c6.radius(), 7);
}

TEST(ShapeUtilTest1, ClacCircleAreaTest3) {
  EXPECT_FLOAT_EQ(Util->CalcArea(c6), 153.86);
}

TEST(CircleTest, OperatorTest4) {
  EXPECT_EQ(c7.radius(), 6);
}

TEST(ShapeUtilTest1, ClacCircleAreaTest4) {
  EXPECT_FLOAT_EQ(Util->CalcArea(c7), 113.04);
}

TEST(CircleTest, OperatorTest5) {
  EXPECT_EQ(c8.radius(), 10);
}

TEST(ShapeUtilTest1, ClacCircleAreaTest5) {
  EXPECT_FLOAT_EQ(Util->CalcArea(c8), 314);
}

TEST(CircleTest, OperatorTest6) {
  EXPECT_EQ(c9.radius(), 4);
}

TEST(ShapeUtilTest1, ClacCircleAreaTest6) {
  EXPECT_FLOAT_EQ(Util->CalcArea(c9), 50.24);
}

TEST(CircleTest, OperatorTest7) {
  EXPECT_EQ(c10.radius(), 10);
}

TEST(ShapeUtilTest1, ClacCircleAreaTest7) {
  EXPECT_FLOAT_EQ(Util->CalcArea(c10), 314);
}

TEST(CircleTest, OperatorTest8) {
  EXPECT_EQ(c11.radius(), 11);
}

TEST(ShapeUtilTest1, ClacCircleAreaTest8) {
  EXPECT_FLOAT_EQ(Util->CalcArea(c11), 379.94);
}

TEST(CircleTest, OperatorTest9) {
  EXPECT_EQ(c12.radius(), 12);
}

TEST(ShapeUtilTest1, ClacCircleAreaTest9) {
  EXPECT_FLOAT_EQ(Util->CalcArea(c12), 452.16);
}

TEST(CircleTest, OperatorTest10) {
  EXPECT_EQ(c13.radius(), 7);
}

TEST(ShapeUtilTest1, ClacCircleAreaTest10) {
  EXPECT_FLOAT_EQ(Util->CalcArea(c13), 153.86);
}

Triangle t1(3, 4);
Triangle t2(5, 2);
Triangle t3(2, 6);
Triangle t4 = t1 + t2;
Triangle t5 = t1 + t3;
Triangle t6 = t2 + t3;
Triangle t7 = t1 + t1;
Triangle t8 = t2 + t2;
Triangle t9 = t3 + t3;
Triangle t10 = t4 + t3;
Triangle t11 = t7 + t2;
Triangle t12 = t8 + t3;
Triangle t13 = t9 + t1;

TEST(TriangleTest, OperatorTest1) {
  EXPECT_EQ(t4.height(), 8);
  EXPECT_EQ(t4.base(), 6);
}

TEST(ShapeUtilTest2, ClacTriangleAreaTest1) {
  EXPECT_FLOAT_EQ(Util->CalcArea(t4), 24);
}

TEST(TriangleTest, OperatorTest2) {
  EXPECT_EQ(t5.height(), 5);
  EXPECT_EQ(t5.base(), 10);
}

TEST(ShapeUtilTest2, ClacTriangleAreaTest2) {
  EXPECT_FLOAT_EQ(Util->CalcArea(t5), 25);
}

TEST(TriangleTest, OperatorTest3) {
  EXPECT_EQ(t6.height(), 7);
  EXPECT_EQ(t6.base(), 8);
}

TEST(ShapeUtilTest2, ClacTriangleAreaTest3) {
  EXPECT_FLOAT_EQ(Util->CalcArea(t6), 28);
}

TEST(TriangleTest, OperatorTest4) {
  EXPECT_EQ(t7.height(), 6);
  EXPECT_EQ(t7.base(), 8);
}

TEST(ShapeUtilTest2, ClacTriangleAreaTest4) {
  EXPECT_FLOAT_EQ(Util->CalcArea(t7), 24);
}

TEST(TriangleTest, OperatorTest5) {
  EXPECT_EQ(t8.height(), 10);
  EXPECT_EQ(t8.base(), 4);
}

TEST(ShapeUtilTest2, ClacTriangleAreaTest5) {
  EXPECT_FLOAT_EQ(Util->CalcArea(t8), 20);
}

TEST(TriangleTest, OperatorTest6) {
  EXPECT_EQ(t9.height(), 4);
  EXPECT_EQ(t9.base(), 12);
}

TEST(ShapeUtilTest2, ClacTriangleAreaTest6) {
  EXPECT_FLOAT_EQ(Util->CalcArea(t9), 24);
}

TEST(TriangleTest, OperatorTest7) {
  EXPECT_EQ(t10.height(), 10);
  EXPECT_EQ(t10.base(), 12);
}

TEST(ShapeUtilTest2, ClacTriangleAreaTest7) {
  EXPECT_FLOAT_EQ(Util->CalcArea(t10), 60);
}

TEST(TriangleTest, OperatorTest8) {
  EXPECT_EQ(t11.height(), 11);
  EXPECT_EQ(t11.base(), 10);
}

TEST(ShapeUtilTest2, ClacTriangleAreaTest8) {
  EXPECT_FLOAT_EQ(Util->CalcArea(t11), 55);
}

TEST(TriangleTest, OperatorTest9) {
  EXPECT_EQ(t12.height(), 12);
  EXPECT_EQ(t12.base(), 10);
}

TEST(ShapeUtilTest2, ClacTriangleAreaTest9) {
  EXPECT_FLOAT_EQ(Util->CalcArea(t12), 60);
}

TEST(TriangleTest, OperatorTest10) {
  EXPECT_EQ(t13.height(), 7);
  EXPECT_EQ(t13.base(), 16);
}

TEST(ShapeUtilTest2, ClacTriangleAreaTest10) {
  EXPECT_FLOAT_EQ(Util->CalcArea(t13), 56);
}

Rectangle r1(3, 4);
Rectangle r2(5, 2);
Rectangle r3(2, 6);
Rectangle r4 = r1 + r2;
Rectangle r5 = r1 + r3;
Rectangle r6 = r2 + r3;
Rectangle r7 = r1 + r1;
Rectangle r8 = r2 + r2;
Rectangle r9 = r3 + r3;
Rectangle r10 = r4 + r3;
Rectangle r11 = r7 + r2;
Rectangle r12 = r8 + r3;
Rectangle r13 = r9 + r1;

TEST(RectangleTest, OperatorTest1) {
  EXPECT_EQ(r4.height(), 8);
  EXPECT_EQ(r4.width(), 6);
}

TEST(ShapeUtilTest2, ClacRectangleAreaTest1) {
  EXPECT_FLOAT_EQ(Util->CalcArea(r4), 48);
}

TEST(RectangleTest, OperatorTest2) {
  EXPECT_EQ(r5.height(), 5);
  EXPECT_EQ(r5.width(), 10);
}

TEST(ShapeUtilTest2, ClacRectangleAreaTest2) {
  EXPECT_FLOAT_EQ(Util->CalcArea(r5), 50);
}

TEST(RectangleTest, OperatorTest3) {
  EXPECT_EQ(r6.height(), 7);
  EXPECT_EQ(r6.width(), 8);
}

TEST(ShapeUtilTest2, ClacRectangleAreaTest3) {
  EXPECT_FLOAT_EQ(Util->CalcArea(r6), 56);
}

TEST(RectangleTest, OperatorTest4) {
  EXPECT_EQ(r7.height(), 6);
  EXPECT_EQ(r7.width(), 8);
}

TEST(ShapeUtilTest2, ClacRectangleAreaTest4) {
  EXPECT_FLOAT_EQ(Util->CalcArea(r7), 48);
}

TEST(RectangleTest, OperatorTest5) {
  EXPECT_EQ(r8.height(), 10);
  EXPECT_EQ(r8.width(), 4);
}

TEST(ShapeUtilTest2, ClacRectangleAreaTest5) {
  EXPECT_FLOAT_EQ(Util->CalcArea(r8), 40);
}

TEST(RectangleTest, OperatorTest6) {
  EXPECT_EQ(r9.height(), 4);
  EXPECT_EQ(r9.width(), 12);
}

TEST(ShapeUtilTest2, ClacRectangleAreaTest6) {
  EXPECT_FLOAT_EQ(Util->CalcArea(r9), 48);
}

TEST(RectangleTest, OperatorTest7) {
  EXPECT_EQ(r10.height(), 10);
  EXPECT_EQ(r10.width(), 12);
}

TEST(ShapeUtilTest2, ClacRectangleAreaTest7) {
  EXPECT_FLOAT_EQ(Util->CalcArea(r10), 120);
}

TEST(RectangleTest, OperatorTest8) {
  EXPECT_EQ(r11.height(), 11);
  EXPECT_EQ(r11.width(), 10);
}

TEST(ShapeUtilTest2, ClacRectangleAreaTest8) {
  EXPECT_FLOAT_EQ(Util->CalcArea(r11), 110);
}

TEST(RectangleTest, OperatorTest9) {
  EXPECT_EQ(r12.height(), 12);
  EXPECT_EQ(r12.width(), 10);
}

TEST(ShapeUtilTest2, ClacRectangleAreaTest9) {
  EXPECT_FLOAT_EQ(Util->CalcArea(r12), 120);
}

TEST(RectangleTest, OperatorTest10) {
  EXPECT_EQ(r13.height(), 7);
  EXPECT_EQ(r13.width(), 16);
}

TEST(ShapeUtilTest2, ClacRectangleAreaTest10) {
  EXPECT_FLOAT_EQ(Util->CalcArea(r13), 112);
}

