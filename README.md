
# Data Filtering Program

## Overview

The **Data Filtering Program** is a C program that reads and filters data from a CSV file. It extracts the first names of female students enrolled in the MSc Computer Science (MSC CS) program for the year 2024.

## Files

### `Name_extarct.c`

This C program processes the `StudentData.csv` file to filter and extract first names of female MSc CS students for 2024.

**Key Features:**
- Reads from a CSV file.
- Filters data based on Degree (MSC CS), Gender (F), and Year (2024).
- Outputs unique first names from the filtered data.

**Usage:**
1. **Compile the Program**

   Use the following command to compile the program:

   ```bash
   gcc Name_extract.c
   ```

2. **Run the Program**

   Execute the compiled program with:

   ```bash
   ./a.out
   ```

   Ensure the `StudentData.csv` file is in the correct path or update the path in the `Name_extarct.c` file.

### `StudentData.csv`

The `StudentData.csv` file contains data in CSV format, including Roll Number, Name, Gender, Year, and Degree.

**Sample Content:**
```
ROLL NO.,NAME,GENDER,YEAR,DEGREE
23111001,ABHAY DADASAHEB JADHAV,M,2024,MSC CS
23111002,AISHWARYA DHANAJI NIMBALKAR,F,2024,MSC CS
23111003,AKSHAY RAJENDRA DHAMANE,M,2024,MSC CS
23111055,NIKHIL KAILAS VAISHNAV,M,2024,MSC CS
```

## Contact

If you have any questions or feedback, feel free to reach out to:

**Vaishnav Nikhil Kailas**  
Email: [nikhilv121121@gmail.com](mailto:nikhilv121121@gmail.com)

