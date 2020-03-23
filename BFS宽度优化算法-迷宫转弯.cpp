01 //逃离迷宫//
02 //题目链接：http://acm.hdu.edu.cn/webcontest/contest_showproblem.php?pid=1006&ojid=0&cid=4532&hide=0//
03 /*
04 #include<stdio.h>
05 #include<iostream>
06 #include<queue>
07 using namespace std;
08 char map[110][110];
09 bool vis[110][110];
10 int sx,sy,ex,ey,n,m,k;
11 int fangxiang[4][2]={-1,0,0,1,1,0,0,-1};
12 struct node
13 {
14     int x,y;
15     int step;
16 }s,e;                                            //s为定点，e为扩展点//
17 queue<node>qu;                  //队列中的一个元素，也就是每个节点包括三个元素，两个位置元素，一个当前走到当前节点的时候的拐弯次数//
18 bool judge(int x,int y)
19 {
20     if(x>=1&&x<=n&&y>=1&&y<=m&&map[x][y]=='.')                            //判断当前的扩展节点是否符合要求，既不能走到迷宫外面，不能走有障碍的地方//
21         return true;
22     else
23         return false;
24 }
25 void BFS()
26 {
27     int i,j;
28     if(sx==ex&&sy==ey)                                        //如果起点就是终点，那么输出然后退出//
29     {
30         printf("yes\n");
31         return;
32     }
33     s.x=sx;s.y=sy;s.step=-1;      //设置第一个定点//
34     vis[sx][sy]=true;           //标记起点//
35     qu.push(s);
36     while(!qu.empty())
37     {
38         s=qu.front();                                            //取起点为定点//
39         qu.pop();                                                 //弹出//
40         for(i=0;i<4;i++)
41         {
42             int tx=s.x+fangxiang[i][0];          //向四个方向走//
43             int ty=s.y+fangxiang[i][1];
44             while(judge(tx,ty))                          //如果这个点满足条件//
45             {
46   //是否已经走过，因为该BFS是一次性把某一个方向都搜完，所以如果已经搜索过，那么再走这一条路的任何一个定点的时候它都不会转弯//
47                 if(vis[tx][ty]==false)                  
48                 {
49                     vis[tx][ty]=true;                                   //标记//
50                     e.x=tx;
51                     e.y=ty;
52                     e.step=s.step+1;
53                     qu.push(e);                                                                 //扩展点入队列//
54                     if(e.x==ex&&e.y==ey&&e.step<=k)              //每加入一个新的定点，就开始判断是不是到了终点//
55                     {
56                         printf("yes\n");
57                         return ;
58                     }
59                 }
60                 tx+=fangxiang[i][0];
61                 ty+=fangxiang[i][1];
62                 //之所以要把定点的四周的所有的定点都如队列，是因为，题目中要求了拐弯数，step初始化为-1，第一个定点为起点之后走的第一个点不算是拐弯数,所以+1等于0 。该题的思路也就是运用BFS的同时，考虑到拐弯数这个条件，把step=0的节点先入队列，因为第一个走的肯定是他们其中的一个,之后再以他们为定点走的扩展点，step一次增加，因为无论向哪个方向走都会拐弯。之后以此类推，把step=1.=2的点都入队列
63             }
64         }
65     }
66         printf("no\n");
67         return ; 
68      //能够走到终点的条件一个是起点就是终点另一个就是扩展点就是终点，如果这两个都不是，那么就是走不到终点，可以退出了//
69 }
70 int main()
71 {
72 #ifndef ONLINE_JUDGE
73     freopen("f:\\in.txt","r",stdin);
74 #endif
75     int N;
76     int i;
77     while(scanf("%d",&N)!=EOF)
78     {
79         while(N--)
80         {
81             memset(vis,false,sizeof(vis));
82             memset(map,0,sizeof(map));
83             while(!qu.empty())
84                 qu.pop();                                                     //清空所有数组，为下面的BFS做准备//
85             scanf("%d %d",&n,&m);
86             for(i=1;i<=n;i++)
87                 scanf("%s",map[i]+1);
88             scanf("%d%d%d%d%d",&k,&sy,&sx,&ey,&ex);
89             BFS();
90         }
91     }
92     return 0;
93 }
94 */
