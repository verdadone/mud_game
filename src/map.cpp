#include "map.h"
using namespace std;
void map_show_4_4()
{
    cout << "           *  体育馆    *" << endl;
    cout << "           *            *" << endl;
    cout << "           *            *" << endl;
    cout << "           *            *" << endl;
    cout << "***********             *" << endl;
    cout << "  公司         出生点    *" << endl;
    cout << "                        *" << endl;
    cout << "*************************" << endl;
}
void map_show_4_3()
{
    cout << "           *    教室    *" << endl;
    cout << "           *            *" << endl;
    cout << "           *            *" << endl;
    cout << "           *            *" << endl;
    cout << "***********             *" << endl;
    cout << "  医院         公司     *" << endl;
    cout << "                        *" << endl;
    cout << "*************************" << endl;
}
void map_show_4_2()
{
    cout << "*    酒吧    *           " << endl;
    cout << "*            *          " << endl;
    cout << "*            *          " << endl;
    cout << "*            *          " << endl;
    cout << "*            ***********" << endl;
    cout << "*     医院          公司 " << endl;
    cout << "*                       " << endl;
    cout << "*********************** " << endl;
}
void map_show_3_4()
{
    cout << "        *    湖      * " << endl;
    cout << "        *            *" << endl;
    cout << "        *            *" << endl;
    cout << "        *            *" << endl;
    cout << "*********            *" << endl;
    cout << " 教室        体育馆   *" << endl;
    cout << "                     *" << endl;
    cout << "**********************" << endl;
}
void map_show_3_3()
{
    cout << "        *    工地    *          " << endl;
    cout << "        *            *         " << endl;
    cout << "        *            *         " << endl;
    cout << "        *            *         " << endl;
    cout << "*********            **********" << endl;
    cout << " 酒吧        教室       体育馆  " << endl;
    cout << "                               " << endl;
    cout << "*********            **********" << endl;
    cout << "        *            *         " << endl;
    cout << "        *    公司    *          " << endl;
    cout << "        *            *         " << endl;
    cout << "        *            *         " << endl;
}
void map_show_3_2()
{
    cout << "        *    里唐    *           " << endl;
    cout << "        *            *         " << endl;
    cout << "        *            *         " << endl;
    cout << "        *            *         " << endl;
    cout << "*********            **********" << endl;
    cout << " 商店        酒吧       教室     " << endl;
    cout << "                               " << endl;
    cout << "*********            **********" << endl;
    cout << "        *            *         " << endl;
    cout << "        *    医院    *           " << endl;
    cout << "        *            *         " << endl;
    cout << "        *            *         " << endl;
}
void map_show_3_1()
{
    cout << "***************************" << endl;
    cout << "*" << endl;
    cout << "*        商店           酒吧   " << endl;
    cout << "*        " << endl;
    cout << "***************************" << endl;
}
void map_show_2_2()
{
    cout << "***********************" << endl;
    cout << "     里唐       工地  " << endl;
    cout << "                  " << endl;
    cout << "*            **********" << endl;
    cout << "*            *    " << endl;
    cout << "*    酒吧    *    " << endl;
    cout << "*            *    " << endl;
    cout << "*            *    " << endl;
}
void map_show_2_3()
{
    cout << "********************************" << endl;
    cout << " 里唐        工地       湖       " << endl;
    cout << "                                " << endl;
    cout << "*********            ***********" << endl;
    cout << "        *            *          " << endl;
    cout << "        *    教室    *            " << endl;
    cout << "        *            *          " << endl;
    cout << "        *            *          " << endl;
}
void map_show_2_4()
{
    cout << "**********************" << endl;
    cout << "   工地       湖     *" << endl;
    cout << "                     *" << endl;
    cout << "*********            *" << endl;
    cout << "        *            *" << endl;
    cout << "        *    体育馆  *" << endl;
    cout << "        *            *" << endl;
    cout << "        *            *" << endl;
}
void show_map(int x1, int x2)
{
    if (x1 == 4 && x2 == 4){
        map_show_4_4();
    }
    if (x1 == 4 && x2 == 3)
    {
        map_show_4_3();
    }
    if (x1 == 4 && x2 == 2)
    {
        map_show_4_2();
    
    }
    if (x1 == 3 && x2 == 4)
    {
        map_show_3_4();
    }
    if (x1 == 3 && x2 == 3)
    {
        map_show_3_3();
    }
    if (x1 == 3 && x2 == 2)
    {
        map_show_3_2();
    }
    if (x1 == 3 && x2 == 1)
    {
        map_show_3_1();
    }
    if (x1 == 2 && x2 == 2)
    {
        map_show_2_2();
    }
    if (x1 == 2 && x2 == 3)
    {
        map_show_2_3();
    }
    if (x1 == 2 && x2 == 4)
    {
        map_show_2_4();
    }
}