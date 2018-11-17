# A Homogeneous Country

## Time Limit - 1 seconds, 256 MB


Many Westerners think Korea is a mere Eastern country which hangs like a grapefruit next to China. However, Koreans have kept their unique ethnicity, struggling all the time not to be "a shrimp among whales"; Chinese to the west, Japanese to the east, "barbarian" tribes, and expanding Russia to the north. Bruce Cumings argued that a vast majority of Koreans look through the lens of race, thinking they have some essential quality making them and only them real Koreans, tracing a unique, homogeneous bloodline back some five thousand years, a story called Tan-gun mythology; 'Koreans do this, Koreans do that' in a shorthand. After a fratricidal war, it was divided into North and South Korea, creating Demilitarized Zone. South Korea had no friend in the region and became a de facto island. During the Cold War, Communist countries supported its enemy, North Korea, and Japan was the last candidate because of their colonial history. Its extremely low ethnic diversity(158th out of 159 countries; North Korea ranked 159th) and cultural diversity(152nd)* is understandable given its experience of occupation and war.  
Though the homogeneity of South Korea played a crucial role in the miracle of its economic development, it has also been a growing concern. A certain amount of diversity is necessary to encourage to understand different perspectives within the society and dispel negative stereotypes and personal biases about different groups. Learning about others helps to recognize and respect minorities, which we all are in some categories. Better understanding leads to the facilitation of collaboration and cooperation in the workplace.  
The lack of other diversities left solely one inevitable diversity—gender—and called forth the recent fierce conflict between two traditional genders in South Korea, where only men are subject to two years of the savage conscription and its aftermath and women struggle with deeply imbued Confucianism, 37% of wage gap, and the paucity of sister politicians. Another recent case, Yemeni refugees, reveals a deeper nuance. In spite of the prevailing grievance over asylum seekers around the world, a polling estimates that between 49% and 56% of the general Korean population oppose granting asylum to the Yemeni refugees. But in a surprising result, the opposition among Korean youth in their 20s and 30s are considerably higher—70% and 60% respectively, despite the increased number of lawful foreigners in the country.** The discord between men and women has contributed to avoiding marriage among youngsters, lowering overall fertility rate, a staggering figure of 0.96 in 2018***. Now, for Koreans, embracing outsiders is not only a matter of morality or economic growth but also a matter of their survival in the future.  
Jason, writing an essay about this issue, wants to exemplify the heterogeneity of the groups around him. You are asked to provide a program to calculate the heterogeneity of a group. He decided to use Gini-index. It is defined as, $1 - \sum_{j=1}^{n} p_j^2$, where $p_j$ is the relative frequency of class $j$. Let's help him out.  


## Input
The class of an entity, $C_i$, is given line by line. For all $i$, $C_i$ consists only of alphabets and is case-sensitive, and its length is not longer than 10.  
The number of entities, $n$, is not greater than 100,000.  

## Output
Print Gini-index of the given group. Its relative error or absolute error must be less than $10^{-6}$.  

## Sample Input 1
```
Korean
Korean
Korean
Korean
Korean
Chinese
Korean
Korean
Korean
```

## Sample Output 1
```
0.18
```

## Sample Input 2
```
German
French
British
Dutch
```

## Sample Output 2
```
0.75
```
## Hint
In the first case, the relative frequency of Korean is $9/10=0.9$ and that of Chinese is $1/10=0.1$. Hence, Gini-index is $1 - (0.9^2 + 0.1^2) = 0.18$

In the second case, $1 - 4 * (1 / 4)^2 = 0.75$.


## Bibliography
```
* James Fearon (2003). "Ethnic and Cultural Diversity by Country". Journal of Economic Growth. 8: 195–222
** http://www.realmeter.net/%EC%A0%9C%EC%A3%BC-%EC%98%88%EB%A9%98-%EB%82%9C%EB%AF%BC-%EC%88%98%EC%9A%A9-%EB%B0%98%EB%8C%80-49-vs-%EC%B0%AC%EC%84%B1-39/
*** http://news.chosun.com/site/data/html_dir/2018/09/03/2018090300158.html
```
