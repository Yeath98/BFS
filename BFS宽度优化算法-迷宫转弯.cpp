01 //�����Թ�//
02 //��Ŀ���ӣ�http://acm.hdu.edu.cn/webcontest/contest_showproblem.php?pid=1006&ojid=0&cid=4532&hide=0//
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
16 }s,e;                                            //sΪ���㣬eΪ��չ��//
17 queue<node>qu;                  //�����е�һ��Ԫ�أ�Ҳ����ÿ���ڵ��������Ԫ�أ�����λ��Ԫ�أ�һ����ǰ�ߵ���ǰ�ڵ��ʱ��Ĺ������//
18 bool judge(int x,int y)
19 {
20     if(x>=1&&x<=n&&y>=1&&y<=m&&map[x][y]=='.')                            //�жϵ�ǰ����չ�ڵ��Ƿ����Ҫ�󣬼Ȳ����ߵ��Թ����棬���������ϰ��ĵط�//
21         return true;
22     else
23         return false;
24 }
25 void BFS()
26 {
27     int i,j;
28     if(sx==ex&&sy==ey)                                        //����������յ㣬��ô���Ȼ���˳�//
29     {
30         printf("yes\n");
31         return;
32     }
33     s.x=sx;s.y=sy;s.step=-1;      //���õ�һ������//
34     vis[sx][sy]=true;           //������//
35     qu.push(s);
36     while(!qu.empty())
37     {
38         s=qu.front();                                            //ȡ���Ϊ����//
39         qu.pop();                                                 //����//
40         for(i=0;i<4;i++)
41         {
42             int tx=s.x+fangxiang[i][0];          //���ĸ�������//
43             int ty=s.y+fangxiang[i][1];
44             while(judge(tx,ty))                          //����������������//
45             {
46   //�Ƿ��Ѿ��߹�����Ϊ��BFS��һ���԰�ĳһ���������꣬��������Ѿ�����������ô������һ��·���κ�һ�������ʱ����������ת��//
47                 if(vis[tx][ty]==false)                  
48                 {
49                     vis[tx][ty]=true;                                   //���//
50                     e.x=tx;
51                     e.y=ty;
52                     e.step=s.step+1;
53                     qu.push(e);                                                                 //��չ�������//
54                     if(e.x==ex&&e.y==ey&&e.step<=k)              //ÿ����һ���µĶ��㣬�Ϳ�ʼ�ж��ǲ��ǵ����յ�//
55                     {
56                         printf("yes\n");
57                         return ;
58                     }
59                 }
60                 tx+=fangxiang[i][0];
61                 ty+=fangxiang[i][1];
62                 //֮����Ҫ�Ѷ�������ܵ����еĶ��㶼����У�����Ϊ����Ŀ��Ҫ���˹�������step��ʼ��Ϊ-1����һ������Ϊ���֮���ߵĵ�һ���㲻���ǹ�����,����+1����0 �������˼·Ҳ��������BFS��ͬʱ�����ǵ������������������step=0�Ľڵ�������У���Ϊ��һ���ߵĿ϶����������е�һ��,֮����������Ϊ�����ߵ���չ�㣬stepһ�����ӣ���Ϊ�������ĸ������߶�����䡣֮���Դ����ƣ���step=1.=2�ĵ㶼�����
63             }
64         }
65     }
66         printf("no\n");
67         return ; 
68      //�ܹ��ߵ��յ������һ�����������յ���һ��������չ������յ㣬��������������ǣ���ô�����߲����յ㣬�����˳���//
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
84                 qu.pop();                                                     //����������飬Ϊ�����BFS��׼��//
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
