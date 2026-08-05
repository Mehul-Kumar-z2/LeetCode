import pandas as pd

def second_highest_salary(employee: pd.DataFrame) -> pd.DataFrame:
    if employee.empty:
        second_highest= None
    else:
        salary_unique= employee["salary"].unique().tolist()
        highest = max(salary_unique)
        salary_unique.remove(highest)
        if(len(salary_unique)==0):
            second_highest = None
        else:
            second_highest: int = max(salary_unique)

    shs = pd.DataFrame({
        "SecondHighestSalary": [second_highest]
    })
    return shs