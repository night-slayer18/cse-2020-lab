menu = {
    'c': {
        1: 'Espresso Coffee',
        2: 'Cappuccino Coffee',
        3: 'Latte Coffee'
    },
    't': {
        1: 'Plain Tea',
        2: 'Assam Tea',
        3: 'Ginger Tea',
        4: 'Cardamom Tea',
        5: 'Masala Tea',
        6: 'Lemon Tea',
        7: 'Green Tea',
        8: 'Organic Darjeeling Tea'
    },
    's': {
        1: 'Hot and Sour Soup',
        2: 'Veg Corn Soup',
        3: 'Tomato Soup',
        4: 'Spicy Tomato Soup'
    },
    'b': {
        1: 'Hot Chocolate Drink',
        2: 'Badam Drink',
        3: 'Badam-Pista Drink'
    }
}
try:
	m=input()
	q=int(input())
	assert m in 'ctsb'
	assert q in [1,2,3,4,5,6,7,8]
	print('WELCOME TO CCD!')
	print(f"Enjoy your {menu[m][q]}")
except:
	print("INVALID INPUT")
