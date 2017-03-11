/* 
************************************************************************** 
* File Name: 1.sqlite.c 
* Description : 1)数据插入，删除，清空   
*               2)  
* Author   : Mark 
* Created Time: 2017年03月11日
************************************************************************** 
*/  
  
#include <stdio.h>  
#include <sqlite3.h>  
  
static sqlite3 *db = NULL;  
static char *errmsg = NULL;  
  
int main()  
{  
    int ret;  
    int insert;  
      
    ret = sqlite3_open("test.db", &db);  
    if(ret)  
    {  
        printf("can not open database.\n");  
    }  
    else  
    {  
        printf("open database succeed.\n");  
    }  

    insert =  sqlite3_exec(db, "insert into test_table values('xuejinghua',111,222)", 0, 0, &errmsg);//插入  
    //insert = sqlite3_exec(db, "delete from test_table where name='xu'", 0, 0, &errmsg);//删除  
    //insert = sqlite3_exec(db, "delete from test_table", 0, 0, &errmsg);//清空  
    printf("exec_ret: %d\n", insert);  
    printf("errMsg: %d\n", errmsg);  
    sqlite3_close(db);  
  
    return 0;  
}  
