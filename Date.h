#ifndef<DATE_H>
#def<DATE_H>

//classes/////////////////////////////
class Date
{
    private:
        int month,
            day,
            year;
    public:
        int m,
            d,
            y;
            
        void set_month(int m){month = m;}
        void set_day(int d){day = d;}
        void set_year(int y){year = y;}
        
        //print format 1: 12/25/2018
        void print_date_format_1(int month, int day, int year);
        //print format 2: December 25, 2018
        void print_date_format_2(int month, int day, int year);
        //print format 3: 25 December 2018
        void print_date_format_3(int month, int day, int year);
};
#endif
