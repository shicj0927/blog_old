#include <bits/stdc++.h>
#include<windows.h>
using namespace std;
int hp,mp,water,hungry,san; //血量，体力，水分，饥饿，理智 
//string ID;
int s,sw,fk,tc;//存储随机数，死亡次数 ，疯狂次数 ，工具变量 
/*int sui(int range)//取随机数 
  {
      return rand()%range+1;
	  }*/
//加了b开头的变量是背包的物品，0是没有，1是有，没有不显示物品名称，以“***”代替。 
// 第二的字母是h，意味是后室里特有的，r是红室，m是马尼拉房间 ，如果没有这三个字母就不是特有。 
int   bmMEG/*来自M.E.G.的文档*/;

//void level0();
void level1(){
};
void ys(int a){ //更改单个字 
	    if(a==0) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
		    if(a==1) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);
			    if(a==2) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
				    if(a==3) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_BLUE);
					    if(a==4) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
						    if(a==5) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
							    if(a>=6) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
}
void Bai() {SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);}

int sj(int x){ //概率 1~100 
		srand(time(NULL));
			int a = rand() % 100;//100%
				if(1<=a&&a<=x) return 1;
					return 2;
} 

int xd(int x,int y){
		srand(time(0));
			return rand()%(y-x+1)+x;
} 

void bb(){  //背包
		 if(bmMEG==0) cout<<"********  *0\n";
		 	 else cout<<"自M.E.G.的文档   *1\n";
}

void panding()//判定 
{
		int i;
			if (hungry>=100)
					{
								hp-=(hungry/2)-49;//扣血 
										hungry=100;
											}
				if (water<=0)//扣血 
						{
									hp-=water-99;
											water=0;
												}
					if (san<=0)//判定疯狂 
							{
										fk++;
												tc++;
														cout<<"你疯了"<<endl; 
																cout<<"输入任意数字退出此界面"<<endl;
																		cin>>i;
																			}
						if (hp<=0)//判定死亡 
								{
											tc++;
													sw++;
															cout<<"你死了"<<endl; 
																	cout<<"输入任意数字退出此界面"<<endl;
																			cin>>i;
																				}
}

void chengjiu()//成就 
{
		int i;
			system("cls");
				if (sw==1)
						{
									cout<<"你获得了成就：地府的新业绩"<<endl;
											cout<<"获得方式：死亡一次"<<endl;
													s++;
														}
					else if (sw==10)
							{
										cout<<"你获得了成就：地府常客"<<endl;
												cout<<"获得方式：死亡十次"<<endl;
														s++;
															} 
						else if (sw==100)
								{
											cout<<"你获得了成就：阎王：你怎么又双叕来了"<<endl;
													cout<<"获得方式：死亡一百次"<<endl;
															s++;
																} 
							else if (fk==1)
									{
												cout<<"你获得了成就：我神好精得很，我精很神好的......"<<endl;
														cout<<"获得方式：疯狂一次"<<endl;
																s++;
																	} 
								else if (fk==10)
										{
													cout<<"你获得了成就：精神病院SVIP"<<endl;
															cout<<"获得方式：疯狂十次"<<endl;
																	s++;
																		} 
									else if (fk==100)
											{
														cout<<"你获得了成就：这院长的位置归你了"<<endl;
																cout<<"获得方式：疯狂一百次"<<endl;
																		s++;
																			} 
										cout<<"输入任意数字退出此界面"<<endl;
											cin>>i;
}

void level0_red()
{
		return ; 
}

void level0()
{
		system("cls");
			system("title level 0");
				int i,run;//工具变量
					cout<<""<<endl;
						run=0; 
							int bs2=xd(6,10);
								cout<<bs2;
									while (1)
											{
														system("cls");
																cout<<"请输入相应数字做出行动选择"<<endl;
																		cout<<"行走（摁1） 休息（摁2） 查看背包（摁3）"<<endl;
																				cin>>i;
																						if (i==1)
																									{
																													san-=1;
																																water-=5;
																																			hungry+=5;
																																						mp-=5; 
																																									run++;
																																												cout<<"嗡嗡作响的灯泡使你愈发烦躁，你的理智减1，饥饿加5，水分减5，体力减5"<<endl; 
																																															panding();
																																																		if (tc!=0)
																																																						{
																																																											return ;
																																																														}
																																																					if(sj(2)==1)
																																																									{
																																																														cout<<"一片红色映入你的眼帘"<<endl;
																																																																		cout<<"请输入相应数字做出行动选择"<<endl;
																																																																						cout<<"离开（摁1） 前进（摁2）" <<endl;
																																																																										cin>>i;
																																																																														if (i==1)
																																																																																			{
																																																																																									cout<<"你有点不祥的预感，转身离开了这里"<<endl;
																																																																																														cout<<"你获得了成就：明智的决定"<<endl;
																																																																																																			cout<<"获取方式：选择不进入level 0的红室"<<endl;
																																																																																																							}
																																																																																		else
																																																																																							{
																																																																																													cout<<"你勇敢的一头冲进了这片红色地狱..."<<endl; 
																																																																																																		cout<<"你获得了成就：红色地狱"<<endl;
																																																																																																							cout<<"获取方式：进入level 0的红室"<<endl;
																																																																																																												level0_red();
																																																																																																																} 
																																																																																						
																																																																																					}
																																																								else{
																																																													cout<<"泛黄的墙纸、潮湿的地毯和以不一致方式安装的荧光灯具。然而，本层中不存在两个完全相同的房间。\n被安装在本层空间中的荧光灯保持无规律闪烁，并以恒定频率发出嗡鸣。这种噪声尤其响亮，明显比正常的荧光灯所能制造的噪音更加刺耳，而对灯具装置进行检查以确定噪声来源的尝试以失败告终。\n浸湿地毯的物质成分始终无法被查明。它既不是水，同时也不能被安全地饮用。\n";
																																																																	cout<<"请输入相应数字做出行动选择"<<endl;
																																																																					cout<<"行走（摁1） 休息（摁2） 查看背包（摁3）"<<endl;
																																																																									cin>>i;
																																																																													if(i==1){
																																																																																			if(sj(2)==1){
																																																																																										cout<<"请输入相应数字做出行动选择"<<endl;
																																																																																																cout<<"行走（摁1） 休息（摁2） 查看背包（摁3）"<<endl;
																																																																																																						//马尼拉房间的入口暂时没有做 						
																																																																																																						}
																																																																																								else if(run==bs2){  //行动次数 
																																																																																															cout<<"一阵光闪过，你进入了Level 1\n"; //目前会进入死循环； 
																																																																																																					level1(); 
																																																																																																										}
																																																																																													run++;
																																																																																																	}
																																																																																	if(i==2){
																																																																																							cout<<"潮湿的地面使你感觉不安，但是体力加5。\n";
																																																																																												mp+=5;
																																																																																																}
																																																																																					if(i==3){	
																																																																																											bb();					
																																																																																															}
																																																																																								}
																																																										}
																								else{
																												cout<<"潮湿的地面使你感觉不安，但是体力加5。\n";
																															mp+=5;
																																	}
																									}
}

void leve1(){
		
}

void a10()//成就墙 
{
		int i;
			system("cls");
				cout<<"所有成就除标有不唯一否则都为唯一成就"<<endl;
					cout<<"成就除标有（NEW!)或不唯一否则都为系列成就"<<endl;
						cout<<"标有（MAX）的连续成就为最后一环，无后续成就"<<endl;
							cout<<"输入任意数字退出此界面"<<endl;
								cin>>i;
}

int main() {
	//	srand(time(NULL));
		system("title Back room");
			while (1)
					{
								int i;
										hp=100;
												mp=100;
														water=100;
																san=100;
																		hungry=0;
																				tc=0; 
																						system("cls");
																								cout<<"Back room：你曾经来过这里"<<endl;
																										cout<<"作者：Gears(洛谷名)/一只摸鱼的屑O5(QQ名)"<<endl;
																												cout<<"合作者：zyx_dzpd(洛谷名)/翔翔(QQ名)"<<endl; 
																														cout<<"游戏兼规则怪谈交流群：809140433(QQ)"<<endl;
																																cout<<"本游戏无法保存，请勿退出"<<endl; 
																																		cout<<"抵制不良游戏，拒绝盗版游戏。" <<endl;
																																				cout<<"注意自我保护，谨防受骗上当。 "<<endl;
																																						cout<<"适度游戏益脑，沉迷游戏伤身。 "<<endl;
																																								cout<<"合理安排时间，享受健康生活。"<<endl;
																																										cout<<"进入游戏（按1）"<<endl;
																																												cout<<"查看成就墙（按2）"<<endl;
																																														cin>>i;
																																																if (i==2) 
																																																			{
																																																							a10(); 
																																																									} 
																																																		else if (i==1)
																																																					{
																																																									system("cls");
																																																												cout<<"请输入你的游戏ID";
																																																												//			cin>>ID;
																																																												//			s=sui(1000);
																																																															if (s<990)
																																																																			{
																																																																								level0();
																																																																											}
																																																																		else if (s<1000)
																																																																						{
																																																																											cout<<"你疲劳的走在回家的路上。突然，你掉入了地面"<<endl;
																																																																															cout<<"你来到了level 1"<<endl; 
																																																																																			cout<<"es5d26f3gy6sr3d43tf27y"<<endl;
																																																																																							cout<<"你死了"<<endl;
																																																																																											sw++; 
																																																																																															cout<<"你获得了成就：锟斤拷烫烫烫(不唯一)"<<endl;
																																																																																																			cout<<"获取方式：抵达作者未制作区域"<<endl;			}
																																																																					else
																																																																									{
																																																																														cout<<"你疲劳的走在回家的路上。突然，你掉入了地面"<<endl;
																																																																																		cout<<"你来到了level 2"<<endl; 
																																																																																						cout<<"sd3fg2e4gsd7g8sf2d0f4fe2b"<<endl;
																																																																																										cout<<"你死了"<<endl;
																																																																																														sw++;
																																																																																																		cout<<"你获得了成就：锟斤拷烫烫烫(不唯一)"<<endl;
																																																																																																						cout<<"获取方式：抵达作者未制作区域(每个区域限定一次)"<<endl;
																																																																																																									}
																																																																								chengjiu(); 
																																																																										} 
																																																			}
				return 0;
}
