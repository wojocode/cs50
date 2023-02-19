# Simulate a sports tournament

import csv
import sys
import random
# Number of simluations to run
N = 10000


def main():

    # Ensure correct usage
    if len(sys.argv) != 2:
        sys.exit("Usage: python tournament.py FILENAME")

# appending teams from file
    teams = []
    try:
        with open(sys.argv[1], "r") as file:
            reader = csv.DictReader(file)
            for team in reader:
                team["rating"] = int(team["rating"])
                teams.append(team)
    except FileNotFoundError:
        print("FILENAME is not correct")

    counts = {}
    # TODO: Simulate N tournaments and keep track of win counts
    x = 1

    for i in range(N):
        team = simulate_tournament(teams)
        if team in counts:
            counts[team]+= x
        else:
            counts.update({team:x})

    # Print each team's chances of winning, according to simulation
    for team in sorted(counts, key=lambda team: counts[team], reverse=True):
        print(f"{team}: {counts[team] * 100 / N:.1f}% chance of winning")


def simulate_game(team1, team2):
    """Simulate a game. Return True if team1 wins, False otherwise."""
    rating1 = team1["rating"]
    rating2 = team2["rating"]
    probability = 1 / (1 + 10 ** ((rating2 - rating1) / 600))
    return random.random() < probability


def simulate_round(teams):
    """Simulate a round. Return a list of winning teams."""
    winners = []

    # Simulate games for all pairs of teams
    for i in range(0, len(teams), 2):
        if simulate_game(teams[i], teams[i + 1]):
            winners.append(teams[i])
        else:
            winners.append(teams[i + 1])

    return winners


def simulate_tournament(teams):
    """Simulate a tournament. Return name of winning team."""
    one_eight_final = simulate_round(teams)
    one_fourth_cup = simulate_round(one_eight_final)
    semi_final = simulate_round(one_fourth_cup)
    final = simulate_round(semi_final)
    winner = {}
    winner = (final[0])

    return winner["team"]


if __name__ == "__main__":
    main()
