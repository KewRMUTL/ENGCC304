#include <stdio.h>

struct Student {
    char Name[ 20 ] ;
    char ID[ 5 ] ;
    float ScoreSub1 ;
    float ScoreSub2 ;
    float ScoreSub3 ;
    float ScoreSub4 ;
    float ScoreSub5 ;
} typedef S ;                            // เพื่อสร้างตัวย่อ S ให้ struct Student

const char* getGrade( float Score );      // Prototype
float getAverage( S student ) ;            // Prototype ฟังก์ชันคำนวณค่าเฉลี่ย

int main() {
    
    S stu[ 3 ] ;                           // ใช้ตัวย่อ S แทน struct Student
    
    for ( int i = 0 ; i < 3 ; i++ ) {
        printf( "Enter the details of Student %d:\n", i + 1 ) ;
        printf( "Name: " ) ;
        scanf( "%s", stu[ i ].Name ) ;
        
        printf( "ID: " ) ;
        scanf( "%s", stu[ i ].ID ) ;

        printf( "Scores in Subject 1: " ) ;
        scanf( "%f", &stu[ i ].ScoreSub1 ) ;
        printf( "Scores in Subject 2: " ) ;
        scanf( "%f", &stu[ i ].ScoreSub2 ) ;
        printf( "Scores in Subject 3: " ) ;
        scanf( "%f", &stu[ i ].ScoreSub3 ) ;
        printf( "Scores in Subject 4: " ) ;
        scanf( "%f", &stu[ i ].ScoreSub4 ) ;
        printf( "Scores in Subject 5: " ) ;
        scanf( "%f", &stu[ i ].ScoreSub5 ) ;
    }//end for

    printf( "\nStudent Details:\n" ) ;
    for ( int i = 0 ; i < 3 ; i++ ) {
        printf( "\nStudent %d:\n", i + 1 ) ;
        printf( "Name: %s\n", stu[i].Name ) ;
        printf( "ID: %s\n", stu[i].ID ) ;
        printf( "Scores: %.1f %.1f %.1f %.1f %.1f\n", 
            stu[ i ].ScoreSub1,
            stu[ i ].ScoreSub2,
            stu[ i ].ScoreSub3,
            stu[ i ].ScoreSub4,
            stu[ i ].ScoreSub5 ) ;
        printf( "Grades: %s %s %s %s %s\n",
            getGrade( stu[ i ].ScoreSub1 ),
            getGrade( stu[ i ].ScoreSub2 ),
            getGrade( stu[ i ].ScoreSub3 ),
            getGrade( stu[ i ].ScoreSub4 ),
            getGrade( stu[ i ].ScoreSub5 ) ) ;
        
        // คำนวณและแสดงค่าเฉลี่ย
        printf( "Average Scores: %.1f\n", getAverage( stu[ i ] ) ) ;
    }//end for

    return 0 ;
}//end function main

const char* getGrade( float Score ) {     // เพิ่ม const ให้กับ char* ในฟังก์ชัน getGrade
    if ( Score >= 80 ) {
        return "A" ;
    } else if ( Score >= 75 ) {
        return "B+" ;
    } else if ( Score >= 70 ) {
        return "B" ;
    } else if ( Score >= 65 ) {
        return "C+" ;
    } else if ( Score >= 60 ) {
        return "C" ;
    } else if ( Score >= 55 ) {
        return "D+" ;
    } else if ( Score >= 50 ) {
        return "D" ;
    } else {
        return "F" ;
    }//end if
}//end function getGrade

float getAverage( S student ) {           // ฟังก์ชันคำนวณค่าเฉลี่ยคะแนน
    return ( student.ScoreSub1 + student.ScoreSub2 + student.ScoreSub3 + student.ScoreSub4 + student.ScoreSub5) / 5.0 ;
}//end function getAverage
