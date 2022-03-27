#ifndef _USERS_JOHAECHANG_OOD_LAB07_TRIANGLE_H_
#define _USERS_JOHAECHANG_OOD_LAB07_TRIANGLE_H_
class Triangle {
 public:
    explicit Triangle(int height, int base);
    int height() const;
    int base() const;
    Triangle operator+(const Triangle &triangle) const;
 private:
    const int height_;
    const int base_;
};

#endif  // _USERS_JOHAECHANG_OOD_LAB07_TRIANGLE_H_

