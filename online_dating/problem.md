# Cupid
**Time Limit - 1.004 seconds, Memory Limit - 256MB**


Since 1969, the Internet has upended all kind of industries - retailing, politics, entertainment, etc. Among them may its profound repercussion well be -- on how we choose a mate.  
At the stage of its emergence, the notion of meeting someone via online seemed pathetic and freakish. However, now, it becomes a necessity for someone, especially who are coping with social or geographical constraints. In the United States, 70% of gay people meet their partner online. Other evidence also suggests that it contributes to breaking down homogeneous groups by boosting interracial and international marriage.  
On the other hand, the service providers are also coping with an inherent conflict of interests: better matching for users, fewer people will stay in the service. Thus, the firms provide premium services, such as "see who Liked me". Without this, you are going to waste a lot of time to answer yes or no for candidates who may not finally Like you, hence "not a match".  
Now you only have to set your gender preference and maximum geographical distance. *(No long-distance relationship in the beginning!)* It is time to see your candidates.


## Input
The name of a premium user, his or her gender preference, and maximum geographical distance are given, separated by a space, in the first line. The name consists only of alphabets and its length is not greater than 100. The gender preference is one of 'F', 'FM', 'M', 'MF', representing user's preference about two traditional genders, female(denoted by 'F') and male(denoted by 'M'). Both 'FM' and 'MF' represent that user prefers both genders.

In the second line, the number of users, $N$ is given.  
For next $N$ lines, the name of a user who liked the premium user, his or her gender(denoted by either 'F' or 'M'), and the geographical distance to the premium user, $1<=D_i<=20,000, integer$, are given in each line, separated by a space.

## Output
Print the name of users who meet the gender preference and geographical condition of the premium user, in lexicographical order, line by line.

## Sample Input 1
```
Jason F 20
5
Alice F 17
Bob M 24
Charley M 30
Daniel M 1
Elle F 4
```

## Sample Output 1
```
Elle
```

## Sample Input 2
```
RocketMan FM 200
​​​​​​​2
Trump M 11035
Moon M 195
```

## Sample Output 2
```
Moon
```


#### Author - Jaeseok Huh
