#ifndef _USERS_JOHAECHANG_OOD_LAB07_CIRCLE_H_
#define _USERS_JOHAECHANG_OOD_LAB07_CIRCLE_H_
class Circle {
 public:
    explicit Circle(int radius);
    int radius() const;
    Circle operator+(const Circle& circle) const;
 private:
    const int radius_;
};
#endif  // _USERS_JOHAECHANG_OOD_LAB07_CIRCLE_H_

