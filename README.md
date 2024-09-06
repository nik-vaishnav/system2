# Data Filtering Program

## Overview

The **Data Filtering Program** is a C program that reads and filters data from a CSV file. It extracts the first names of female students enrolled in the MSc Computer Science (MSC CS) program for the year 2024.

## Files

### `extractname.c`

This C program processes the `Nato.csv` file to filter and extract first names of female MSc CS students for 2024.

**Key Features:**
- Reads from a CSV file.
- Filters data based on Degree, Gender, and Year.
- Outputs unique first names from the filtered data.

**Usage:**
1. **Compile the Program**

   Use the following command to compile the program:

   ```bash
   gcc extractname.c
   ```

2. **Run the Program**

   Execute the compiled program with:

   ```bash
   ./a.out
   ```

   Make sure the `Nato.csv` file is in the correct path or update the path in the `extractname.c` file.

### `Nato.csv`

The `Nato.csv` file contains data in CSV format, including Roll Number, Name, Gender, Year, and Degree.

**Sample Content:**
```
ROLL NO.,NAME,GENDER,YEAR,DEGREE
23111001,ABHAY DADASAHEB JADHAV,M,2024,MSC CS
23111002,AISHWARYA DHANAJI NIMBALKAR,F,2024,MSC CS
23111003,AKSHAY RAJENDRA DHAMANE,M,2024,MSC CS
...
23112026,RUGVED AJIT PATIL,M,2024,MCA
```

## Contact

If you have any questions or feedback, feel free to reach out to:

**Vaishnav Nikhil Kailas**  
Email: [nikhilv121121@gmail.com](mailto:nikhilv121121@gmail.com)
