from datetime import date
days = [
    'Monday',
    'Tuesday',
    'Wednesday',
    'Thursday',
    'Friday',
    'Saturday',
    'Sunday',
]
day, month = map(int, input().split())
day_of_week = date(2009, month, day)

print(days[day_of_week.weekday()])
