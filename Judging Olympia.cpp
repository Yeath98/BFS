#include<algorithm>
#include <iostream>
using namespace std;

int main()
{
	int g[6];
    int i, sum;
    double a;
    while (cin>>g[0]>>g[1]>>g[2]>>g[3]>>g[4]>>g[5])
    {
		if(g[0]==0&&g[1]==0&&g[2]==0&&g[3]==0&&g[4]==0&&g[5]==0)
		break;
          sum = 0;
          sort(g, g+6);
          for (i=1;i<5;i++)
       		 sum+=g[i];
          a=sum*1.0/4*1.0;
          cout <<a<< endl;
    }
    
return 0;
}	

For years, a group of Regional Contest Directors (RCDs) of the ACM International Collegiate Programming Contest (ICPC) have been unsatisfied with the way contest submissions get ranked. The group sees it is academically wrong to emphasize the importance of program correctness, disregarding the ��quality�� of the program itself. After all, programming as a profession promotes design, style, maintainability, etc. and not just correctness. The group��s suggestion is to have a panel of six judges. Each judge is assigned the task of grading the submissions based on a particular aspect: 1) Correctness; 2) Robustness; 3) Overall design; 4) Clarity; 5) Coding style; and finally 6) Maintainability. The final grade of a submission would be the average of the six grades it gets.

The old guards of the current ICPC judging style have always responded that it is not possible to impartially judge a program on anything but correctness. How can the ICPC be certain that judging is fair? In other words, how can the ICPC be sure that non of the judges is favoring certain teams and disadvantaging others? Any hint of accusation to the judging process and ICPC loses the prestigious status it worked on for years. (Alright! So they do have a point.) Still, this hasn��t stopped other domains from judging candidates based on subjective metrics. Take for example Gymnastics, or The Nobel Prizes, or even the ACM��s very own Doctoral Dissertation Award. These are all highly respected awards where the winner is selected by judges using subjective metrics. ICPC could use a new judging system based on what is used in gymnastics. Rather than having each judge grade a certain aspect of the program, each of the six judges would assign an overall grade (out of ten) based on all of the six metrics mentioned above. To enforce impartiality, the final grade of a submission would be calculated as the average of all the grades after deleting two grades: The highest and the lowest. Any judge that favors a certain team (and assigns them an undeserved high grade,) risks the possibility of that grade being dismissed. Similarly, any judge that attempts to disadvantage a team by assigning them a low grade faces a similar risk.

Write a program to print the final grade of a submission.
