if (only_digits(argv[1])){
        return 0;
    }
    else {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    }
    printf("Usage: ./caesar key\n");
    return 1;