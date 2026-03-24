/* Selection statement */

// 1. if else

// if(true) conduct, if(false) skip
// 0 表示假，非0 真
int main()
{
  int age = 5;
  if (age < 12)
    printf("Chidren\n");
  else if (age >= 12 && age < 18)//&& 和
    printf("Youth\n");
  else if (age >= 18 && age < 24)
    printf("Adult\n");
  return 0;
}

// 2. switch
int main()
{
  int day = 0;
  while(day<=7)
  {
    switch (day/*整形表达式(必须是int)*/)
    {/*语句项(case 入口, break 结束)*/
    case 1/*必须是常量*/:
      printf("Monday\n");
      break;
    case 2:/*必须是 : */
      printf("Tuesday\n");
      break;
    case 3:
      printf("Wednesday\n");
      break;
    case 4:
      printf("Thusday\n");
      break;
    case 5:
      printf("Friday\n");
      break;
    case 6:
      printf("Saturday\n");
      break;
    case 7:
      printf("Sunday\n");
      break;
    }
    day++;
  }

  int day = 0;
  scanf("%d", &day);
  switch (day/*整形表达式(必须是整形)*/)
  {/*语句项(case 入口, break 结束)*/
  case 1:
    printf("Monday\n");
    break;
  case 2:
    printf("Tuesday\n");
    break;
  case 3:
    printf("Wednesday\n");
    break;
  case 4:
    printf("Thusday\n");
    break;
  case 5:
    printf("Friday\n");
    break;
  case 6:
    printf("Saturday\n");
    break;
  case 7:
    printf("Sunday\n");
    break;
  default:
    printf("EROR\n");
  }
  return 0;
}

/* Iteration statement */

//1. while语句 先判断再做

int main()
	{
		int line = 0;
		printf("work\n");
		while (line<10)
		{
			printf("working:%d\n",line);
			line++;
		}
		if (line == 10)
		{
			printf("get promotion\n");
		}
		else
		{
			printf("work hard");
		}
		int i = 1;
		while (i <= 10)
		{
			//if (5 == i)
			//	break;//打断循环
			if (5 == i)
				continue;//不执行后面的代码
			printf("%d\n", i);
			i++;// 进入死循环因为 i++ 在continue 后面
		}
		int ch = getchar();// 是用int ch 不是char ch, getchar 获取单字符放到 ch 里
		printf("%c\n", ch);//打印 ch 的字符
		putchar(ch);//打印 ch 的字符
		int ch = 0;
		while ((ch = getchar()) != EOF)//#define EOF/"End Of File" (-1)
		{
			putchar(ch);
		}//getchar 是从输入缓冲区拿一个字符
		return 0;
		} 
	int main()
	{
		char pass[20] = { 0 };//拉出 abcdef 给pass，没有拉出\n
		printf("Password: \n");
		scanf("%s", pass);//输入了 abcdef\n 进输入缓冲区
		getchar();//拉掉 \n
		printf("Confirm your password (Y/N) : \n");
		int con = getchar();
		if ('Y' == con)
			printf("Done\n");
		else
			printf("Please try again\n");
		return 0;
	}//有 bug, 不安全
// 修了：
	int main()
	{
		char pass[20] = { 0 };
		printf("Password: \n");
		scanf("%s", pass);
		int ch = 0;
		while ((ch = getchar()) != '\n')//一直拉，拉到\n 拉掉
		{
			;
		}
		printf("Confirm your password (Y/N) : \n");
		int con = getchar();
		if ('Y' == con)
			printf("Done\n");
		else
			printf("Please try again\n");
		return 0;
	}

//2. for语句 (避免在 for 里面调整循环变量) 怕乱
int main()
{
	//这 3 点都会影响结果, 如果比较分散, 所以有for 循环
	for (int i = 1/*初始化*/; i <= 10/*判断*/; i++ /*调整*/)//kumpulkan 这 3 点
	{
		printf("%d\n", i);
	}
 // continue / break 
	for (int i = 1; i <= 10; i++)
	{
		if (5 == i)
		{
			continue;//没打印当前循环
		}
		if (8 == i)
		{
			break;//结束循环
		}
		printf("%d\n", i);	
	}
	return 0;
}
// for 循环的变种
int main()
{
  for (;;)// for 循环中的判断部分没有 = 会死循环
  {
    printf("KTO\n");
  }
  return 0;
}
// for 循环可以用多个变量
int main()
{
	int x = 0, y = 0;
	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
		printf("KTO\n");
	return 0;
}

//3. do...while语句 先做再判断
int main()
{
	int i = 0;

	do
	{
		i++;
		if (8 == i)
			break;
		if (5 == i)
			continue;
		printf("%d\n", i);
	} 
	while (i <= 10);//do...while语句 才可以有;
	return 0;
}
