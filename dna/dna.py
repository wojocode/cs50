import csv
import sys

def main():

    # TODO: Check for command-line usage

    if len(sys.argv) != 3:
        print("Usage: python dna.py data.csv sequence.txt")
        sys.exit(1)

    # TODO: Read database file into a variable

    database_list = []
    database = sys.argv[1]
    try:
        with open(database, "r") as f:
            reader = csv.DictReader(f)
            for row in reader:
                database_list.append(row)
    except FileNotFoundError:
        print("FILENAME is not correct")
    print(database_list)

    # TODO: Read DNA sequence file into a variable

    dna = sys.argv[2]
    with open(dna, "r") as f:
        try:
            DNA_sequance = f.read()
        except FileNotFoundError:
            print("FILENAME is not correct")

    # TODO: Find longest match of each STR in DNA sequence

    # get keys list from databes_list
    key_list = list(database_list[0].keys())

    # set STR_list
    STR_list = []
    for i in range(1,len(key_list)):
        item = longest_match(DNA_sequance, key_list[i])
        STR_list.append(item)


    # TODO: Check database for matching profiles
    for j in range(0,len(database_list)):
        for i in range(1,len(key_list)):
            if STR_list[i-1] != database_list[j][key_list[i]]:
                break
            else:
                continue
            






   # print("No match")

def longest_match(sequence, subsequence):
    """Returns length of longest run of subsequence in sequence."""

    # Initialize variables
    longest_run = 0
    subsequence_length = len(subsequence)
    sequence_length = len(sequence)

    # Check each character in sequence for most consecutive runs of subsequence
    for i in range(sequence_length):

        # Initialize count of consecutive runs
        count = 0

        # Check for a subsequence match in a "substring" (a subset of characters) within sequence
        # If a match, move substring to next potential match in sequence
        # Continue moving substring and checking for matches until out of consecutive matches
        while True:

            # Adjust substring start and end
            start = i + count * subsequence_length
            end = start + subsequence_length

            # If there is a match in the substring
            if sequence[start:end] == subsequence:
                count += 1

            # If there is no match in the substring
            else:
                break

        # Update most consecutive matches found
        longest_run = max(longest_run, count)

    # After checking for runs at each character in seqeuence, return longest run found
    return longest_run


main()
