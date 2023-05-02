/*
NAME:Md.Mahin Khan
ID  :0112230105
*/
#include<stdio.h>
#include<string.h>
#define MAX_PLAYERS 100

//This Structure Is defined to Store player information
struct player
{
    char name[50];
    int age;
    char role[50];
    int matches;
    int total_runs;
    int highest_run;
};

/*
This Function is for calculate the value of a player based on
age, matches,total runs, highest run and role
*/
int CalculateValue(struct player p)
{
    int value = p.age + p.matches + p.total_runs + p.highest_run;
    value += (p.total_runs / p.matches) + (p.highest_run / p.age);
    if (strcmp(p.role, "Allrounder") == 0)
    {
        value += 50;
    }
    return value;
}

/*This function will read player data from and input file*/
void ReadInput(struct player players[], int* num_players)
{
    FILE* file;
    char filename[50];
    printf("Enter input file name: ");
    scanf("%s", filename);
    file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Error opening input file\n");
        return;
    }
    fscanf(file, "%d\n", num_players);
    for (int i = 0; i < *num_players; i++)
    {
        fgets(players[i].name, 50, file);
        players[i].name[strcspn(players[i].name, "\n")] = 0;
        fscanf(file, "%d\n", &players[i].age);
        fgets(players[i].role, 50, file);
        players[i].role[strcspn(players[i].role, "\n")] = 0;
        fscanf(file, "%d\n%d\n%d\n", &players[i].matches, &players[i].total_runs, &players[i].highest_run);
    }
    fclose(file);
}

/*This function will display information of all player*/
void ShowAllPlayers(struct player players[], int num_players)
{
    printf("\nAll Players:\n");
    printf("Name\t\t\tAge\tRole\t\t\tMatches\tTotal Runs\tHighest Run\n");
    for (int i = 0; i < num_players; i++)
    {
        printf("%-24s %d\t%-24s %d\t%d\t\t%d\n", players[i].name, players[i].age,
               players[i].role, players[i].matches,
               players[i].total_runs, players[i].highest_run);
    }
}

/*This function will display information of a specific player*/
void ShowPlayerInfo(struct player players[], int num_players)
{
    char name[50];
    printf("\nEnter player name: ");
    fgets(name, 50, stdin);
    name[strcspn(name, "\n")] = 0;
    for (int i = 0; i < num_players; i++)
    {
        if (strcmp(name, players[i].name) == 0)
        {
            printf("\nPlayer Information:\n");
            printf("Name\t\tAge\tRole\tMatches\tTotal Runs\tHighest Run\n");
            printf("%-14s %d\t%-10s %d\t%d\t\t%d\n", players[i].name, players[i].age,
                   players[i].role, players[i].matches,
                   players[i].total_runs, players[i].highest_run);
            return;
        }
    }
    printf("Player not found\n");
}

/*This function will show the most experienced player*/
void ShowMEP(struct player players[], int num_players)
{
    int mep_index = 0;
    for (int i = 1; i < num_players; i++)
    {
        if (players[i].matches > players[mep_index].matches)
        {
            mep_index = i;
        }
    }
    printf("%s is the most experienced player with %d matches\n",
           players[mep_index].name, players[mep_index].matches);
}

/*This function will show the new comer player*/
void ShowNCP(struct player players[], int num_players)
{
    int ncp_index = 0;
    for (int i = 1; i < num_players; i++)
    {
        if (players[i].age < players[ncp_index].age)
        {
            ncp_index = i;
        }
    }
    printf("%s is the new comer player with age %d\n",
           players[ncp_index].name, players[ncp_index].age);
}

/*This function will show the top scorer player*/
void ShowTSP(struct player players[], int num_players)
{
    int tsp_index = 0;
    for (int i = 1; i < num_players; i++)
    {
        if (players[i].total_runs > players[tsp_index].total_runs)
        {
            tsp_index = i;
        }
    }
    printf("%s is the top scorer with %d total runs\n",
           players[tsp_index].name, players[tsp_index].total_runs);
}

/*This function will show the hard hitter player*/
void ShowHHP(struct player players[], int num_players)
{
    int hhp_index = 0;
    float hhp_avg = (float)players[hhp_index].total_runs / players[hhp_index].matches;
    for (int i = 1; i < num_players; i++)
    {
        float avg = (float)players[i].total_runs / players[i].matches;
        if (avg > hhp_avg)
        {
            hhp_index = i;
            hhp_avg = avg;
        }
    }
    printf("%s is the hard hitter with an average run of %.2f per match\n",
           players[hhp_index].name, hhp_avg);
}

/*This function will show the highest run taker player*/
void ShowHRTP(struct player players[], int num_players)
{
    int hrtp_index = 0;
    for (int i = 1; i < num_players; i++)
    {
        if (players[i].highest_run > players[hrtp_index].highest_run)
        {
            hrtp_index = i;
        }
    }
    printf("%s is the highest run taker with a highest run of %d\n",
           players[hrtp_index].name, players[hrtp_index].highest_run);
}

/*This function will show the most valuable player*/
void ShowMVP(struct player players[], int num_players)
{
    int mvp_index = 0;
    int mvp_value = CalculateValue(players[mvp_index]);
    for (int i = 1; i < num_players; i++)
    {
        int value = CalculateValue(players[i]);
        if (value > mvp_value)
        {
            mvp_index = i;
            mvp_value = value;
        }
    }
    printf("%s is the most valuable player with a value of %d\n",
           players[mvp_index].name, mvp_value);
}

/*This function will show  the information of all Allrounder*/
void ShowAllrounders(struct player players[], int num_players)
{
    printf("\nAll-rounders:\n");
    printf("Name\t\tAge\tRole\tMatches\tTotal Runs\tHighest Run\n");
    for (int i = 0; i < num_players; i++)
    {
        if (strcmp(players[i].role, "Allrounder") == 0)
        {
            printf("%-14s %d\t%-10s %d\t%d\t\t%d\n", players[i].name, players[i].age,
                   players[i].role, players[i].matches,
                   players[i].total_runs, players[i].highest_run);
        }
    }
}

/*
This is main function of the program.It reads the input file and calls
function to perform operation based on user input
*/
int main()
{
    struct player players[MAX_PLAYERS];
    int num_players;
    ReadInput(players, &num_players);
    int choice;
    while (1)
    {
        printf("\nChoose an option:\n");
        printf("1. Show All Players\n");
        printf("2. Show Player Information\n");
        printf("3. Show Most Experienced Player(MEP)\n");
        printf("4. Show New Comer Player(NCP)\n");
        printf("5. Show Top Scorer Player(TSP)\n");
        printf("6. Show Hard Hitter Player(HHP)\n");
        printf("7. Show Highest Run Taker Playe(HRTP)\n");
        printf("8. Show Most Valuable Player(MVP)\n");
        printf("9. Show Allrounders\n");
        printf("10. Exit/Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();
        switch (choice)
        {

        case 1:
            ShowAllPlayers(players, num_players);
            break;
        case 2:
            ShowPlayerInfo(players, num_players);
            break;
        case 3:
            ShowMEP(players, num_players);
            break;
        case 4:
            ShowNCP(players, num_players);
            break;
        case 5:
            ShowTSP(players, num_players);
            break;
        case 6:
            ShowHHP(players, num_players);
            break;
        case 7:
            ShowHRTP(players, num_players);
            break;
        case 8:
            ShowMVP(players, num_players);
            break;
        case 9:
            ShowAllrounders(players, num_players);
            break;
        case 10:
            printf("Exit/Quit\n");
            return 0;
        default:
            printf("Invalid choice, please try again\n");
            break;
        }
    }
    return 0;
}
