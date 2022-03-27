#include "gtest/gtest.h"
#include "Student.h"
#include "SwClass.h"
#include "Split.h"

TEST(StudentTest, GetInfoTest1) {
  Student st("1", "a", "0", "0", "1", "3");
  EXPECT_EQ("1 a 0 0 1 3", st.GetInfo());
}

TEST(StudentTest, GetInfoTest2) {
  Student st("abc", "a", "23", "90", "100", "70");
  EXPECT_NE("ab a 23 90 100 70", st.GetInfo());
}

TEST(StudentTest, GetInfoTest3) {
  Student st("201702897", "hae", "100", "100", "100", "100");
  EXPECT_EQ("201702897 hae 100 100 100 100", st.GetInfo());
}

TEST(StudentTest, GetInfoTest4) {
  Student st("12", "a", "1", "1", "1", "1");
  EXPECT_NE("12 a 0 0 0 0", st.GetInfo());
}

TEST(StudentTest, GetInfoTest5) {
  Student st("123", "abc", "0", "0", "0", "0");
  EXPECT_EQ("123 abc 0 0 0 0", st.GetInfo());
}

TEST(StudentTest, GetInfoTest6) {
  Student st("777", "a", "0", "0", "1", "3");
  EXPECT_NE("777 b 0 0 1 3", st.GetInfo());
}

TEST(StudentTest, GetInfoTest7) {
  Student st("NULL", "joe", "0", "0", "1", "3");
  EXPECT_EQ("NULL joe 0 0 1 3", st.GetInfo());
}

TEST(StudentTest, GetInfoTest8) {
  Student st("0", "0", "0", "0", "0", "0");
  EXPECT_NE("1 0 0 0 0 0", st.GetInfo());
}

TEST(StudentTest, GetInfoTest9) {
  Student st("999", "rail", "0", "1", "1", "3");
  EXPECT_EQ("999 rail 0 1 1 3", st.GetInfo());
}

TEST(StudentTest, GetInfoTest10) {
  Student st("last", "test", "1", "1", "1", "1");
  EXPECT_NE("test last 1 1 1 1", st.GetInfo());
}

TEST(SwClassTest, GetInfoTest1) {
  Student st("1", "a", "0", "0", "0", "0");
  SwClass sw("123", "00", "OOD", "30", "20", "30", "20", st);
  EXPECT_EQ("1 F", sw.GetInfo());
}

TEST(SwClassTest, GetInfoTest2) {
  Student st("202102834", "john", "100", "91", "100", "100");
  SwClass sw("123", "00", "OOD", "30", "20", "30", "20", st);
  EXPECT_EQ("202102834 A", sw.GetInfo());
}

TEST(SwClassTest, GetInfoTest3) {
  Student st("2018012382", "jack", "100", "100", "0", "100");
  SwClass sw("123", "00", "OOD", "30", "20", "30", "20", st);
  EXPECT_EQ("2018012382 C", sw.GetInfo());
}

TEST(SwClassTest, GetInfoTest4) {
  Student st("201954271", "jean", "100", "80", "100", "90");
  SwClass sw("123", "00", "OOD", "30", "20", "30", "20", st);
  EXPECT_EQ("201954271 A", sw.GetInfo());
}

TEST(SwClassTest, GetInfoTest5) {
  Student st("201850372", "park", "0", "0", "100", "0");
  SwClass sw("123", "00", "OOD", "30", "20", "30", "20", st);
  EXPECT_EQ("201850372 F", sw.GetInfo());
}

TEST(SwClassTest, GetInfoTest6) {
  Student st("201750170", "choi", "14", "15", "60", "10");
  SwClass sw("123", "00", "OOD", "30", "20", "30", "20", st);
  EXPECT_EQ("201750170 F", sw.GetInfo());
}

TEST(SwClassTest, GetInfoTest7) {
  Student st("1", "a", "100", "100", "100", "100");
  SwClass sw("123", "00", "OOD", "0", "0", "0", "0", st);
  EXPECT_EQ("1 F", sw.GetInfo());
}

TEST(SwClassTest, GetInfoTest8) {
  Student st("1", "a", "100", "100", "100", "100");
  SwClass sw("123", "00", "OOD", "30", "20", "30", "20", st);
  EXPECT_NE("1 F", sw.GetInfo());
}

TEST(SwClassTest, GetInfoTest9) {
  Student st("111", "a", "0", "0", "0", "0");
  SwClass sw("123", "00", "OOD", "25", "25", "25", "25", st);
  EXPECT_NE("1 F", sw.GetInfo());
}

TEST(SwClassTest, GetInfoTest10) {
  Student st("1", "a", "0", "0", "0", "0");
  SwClass sw("123", "00", "OOD", "30", "20", "30", "20", st);
  EXPECT_NE("1 A", sw.GetInfo());
}
