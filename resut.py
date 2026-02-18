def grade_and_point(marks):
    if marks >= 90:
        return "A+", 10
    elif marks >= 80:
        return "A", 9
    elif marks >= 70:
        return "B+", 8
    elif marks >= 60:
        return "B", 7
    elif marks >= 50:
        return "C", 6
    elif marks >= 40:
        return "D", 4
    else:
        return "F", 0


# -------- UPDATED SUBJECT LIST --------
subjects = [
    ("Communication Skills For Engineers", 3, "theory"),
    ("Introduction To AI & ML", 2, "practical"),  # Project based
    ("Introduction To Data Science", 2, "theory"),
    ("Linux Administrative Lab", 1, "practical"),  # Practical (100 marks)
    ("Mathematics-I", 4, "theory"),
    ("Physics", 5, "theory"),
    ("Programming In C", 4, "theory"),
]

print("\n===== IILM UNIVERSITY SGPA CALCULATOR =====")
print("Author: Ayush Jha | Class: 1CSE-34\n")

# ---- COMMON INTERNAL ASSESSMENT INPUT ----
internal_assessment = float(
    input("Enter your Internal Assessment marks (out of 30): ")
)

total_credit_points = 0
total_credits = 0

for subject, credit, category in subjects:
    print(f"\nSubject: {subject} | Credits: {credit}")
    if category == "theory":
        mid = float(input("Mid Term Marks (out of 50): "))
        end = float(input("End Sem Marks (out of 100): "))
        mid_scaled = (mid / 50) * 30
        end_scaled = (end / 100) * 40
        final_marks = internal_assessment + mid_scaled + end_scaled
    else:  # practical / project based
        final_marks = float(
            input("Final Practical / Project Marks (out of 100): ")
        )

    grade, point = grade_and_point(final_marks)
    credit_points = credit * point
    total_credit_points += credit_points
    total_credits += credit

    print(f"Final Marks: {final_marks:.2f}/100")
    print(f"Grade: {grade} | Grade Point: {point}")

# ---- SGPA & Percentage ----
sgpa = total_credit_points / total_credits
percentage = sgpa * 10

print("\n===================================")
print(f"Total Credits : {total_credits}")
print(f"SGPA : {sgpa:.2f}")
print(f"Percentage : {percentage:.2f}%")
print("===================================")