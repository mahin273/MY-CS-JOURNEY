#include <stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_PLAYERS 100
  


typedef struct
{
    char name[50];
    int age;
    int matches_played;
    int total_runs;
    int highest_run;
    int allrounder;
} Player;
 
// Parse the input and create a list of Player objects
int read_players(const char* filename, Player players[])
{
    FILE* fp;
    char ch[20];
    printf("Enter file name : ");
    gets(ch);
     fp= fopen("input.txt", "r");
    if (ch == EOF)
    {
        printf("Unable to open file: %s\n", filename);
        exit(1);
    
    }
    fclose(fp);

 
    int count = 0;
    char line[256];
    while (fgets(line, sizeof(line), fp))
    {
        char* name = strtok(line, ",");
        int age = atoi(strtok(NULL, ","));
        int matches_played = atoi(strtok(NULL, ","));
        int total_runs = atoi(strtok(NULL, ","));
        int highest_run = atoi(strtok(NULL, ","));
        int allrounder = strcmp(strtok(NULL, ","), "yes") == 0;
 
        Player player =
        {
            .age = age,
            .matches_played = matches_played,
            .total_runs = total_runs,
            .highest_run = highest_run,
            .allrounder = allrounder
        };
        strcpy(player.name, name);
        players[count++] = player;
    }
 
    fclose(fp);
    return count;
}
 
// Define functions to calculate various statistics
Player* most_experienced_player(Player players[], int count)
{
    Player* mep = &players[0];
    for (int i = 1; i < count; i++)
    {
        if (players[i].matches_played > mep->matches_played)
        {
            mep = &players[i];
        }
    }
    return mep;
}
 
Player* new_comer_player(Player players[], int count)
{
    Player* ncp = &players[0];
    for (int i = 1; i < count; i++)
    {
        if (players[i].age < ncp->age)
        {
            ncp = &players[i];
        }
    }
    return ncp;
}
 
Player* top_scorer_player(Player players[], int count)
{
    Player* tsp = &players[0];
    for (int i = 1; i < count; i++)
    {
        if (players[i].total_runs > tsp->total_runs)
        {
            tsp = &players[i];
        }
    }
    return tsp;
}
 
Player* hard_hitter_player(Player players[], int count)
{
    Player* hhp = &players[0];
    for (int i = 1; i < count; i++)
    {
        if ((float)players[i].total_runs/players[i].matches_played > (float)hhp->total_runs/hhp->matches_played)
        {
            hhp = &players[i];
        }
    }
    return hhp;
}
 
Player* highest_run_taker_player(Player players[], int count)
{
    Player* hrtp = &players[0];
    for (int i = 1; i < count; i++)
    {
        if (players[i].highest_run > hrtp->highest_run)
        {
            hrtp = &players[i];
        }
    }
    return hrtp;
}
 
Player* most_valuable_player(Player players[], int count)
{
    Player* mvp = &players[0];
    float mvp_value = mvp->age + mvp->matches_played + mvp->total_runs + mvp->highest_run;
    for (int i = 1; i < count; i++)
    {
        float player_value = players[i].age + players[i].matches_played + players[i].total_runs + players[i].highest_run;
        if (players[i].allrounder)
        {
            player_value *= 1.5;
        }
        if (player_value > mvp_value)
        {
            mvp = &players[i];
            mvp_value = player_value;
        }
    }
    return mvp;
}
 
 
int main()
    {

        Player players[MAX_PLAYERS];
        int count = read_players("input.txt", players);
        printf("Most experienced player: %s\n", most_experienced_player(players, count)->name);
        printf("New comer player: %s\n", new_comer_player(players, count)->name);
        printf("Top scorer player: %s\n", top_scorer_player(players, count)->name);
        printf("Hard hitter player: %s\n", hard_hitter_player(players, count)->name);
        printf("Highest run taker player: %s\n", highest_run_taker_player(players, count)->name);
        printf("Most valuable player: %s\n", most_valuable_player(players, count)->name);
 
        char choice[2];
        while (1)
        {
            printf("Enter your choice: ");
            scanf("%s", choice);
            if (strcmp(choice, "1") == 0)
            {
                printf("All Players:\n");
                for (int i = 0; i < count; i++)
                {
                    printf("%s\n", players[i].name);
                }
            }
            else if (strcmp(choice, "2") == 0)
            {
                char name[50];
                printf("Enter player name: ");
                scanf("%s", name);
                Player* player = NULL;
                for (int i = 0; i < count; i++)
                {
                    if (strcmp(players[i].name, name) == 0)
                    {
                        player = &players[i];
                        break;
                    }
                }
                if (player != NULL)
                {
                    printf("Name: %s\nAge: %d\nMatches Played: %d\nTotal Runs: %d\nHighest Run: %d\nAll-Rounder: %d\n",
                           player->name, player->age, player->matches_played, player->total_runs, player->highest_run, player->allrounder);
                }
                else
                {
                    printf("Player not found.\n");
                }
            }
            else if (strcmp(choice, "3") == 0)
            {
                Player* player = most_experienced_player(players, count);
                printf("Most Experienced Player: %s\n", player->name);
            }
            else if (strcmp(choice, "4") == 0)
            {
                Player* player = new_comer_player(players, count);
                printf("New Comer Player: %s\n", player->name);
            }
            else if (strcmp(choice, "5") == 0)
            {
                Player* player = top_scorer_player(players, count);
                printf("Top Scorer Player: %s\n", player->name);
            }
            else if (strcmp(choice, "6") == 0)
            {
                Player* player = hard_hitter_player(players, count);
                printf("Hard Hitter Player: %s\n", player->name);
            }
            else if (strcmp(choice, "7") == 0)
            {
                Player* player = highest_run_taker_player(players, count);
                printf("Highest Run Taker Player: %s\n", player->name);
            }
            else if (strcmp(choice, "8") == 0)
            {
                Player* player = most_valuable_player(players, count);
                printf("Most Valuable Player: %s\n", player->name);
            }
            else
            {
                printf("Invalid choice. Please try again\n");
            }
        }
 
 
        return 0;
}
 
 