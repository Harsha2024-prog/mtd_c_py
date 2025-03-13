my_name = 'nithin'

print(my_name)
print(my_name.upper())
try:
    print(my_name.index('tt'))
    print('next stmt')
    
except ValueError:
    print(f'The Sub string \'tt\' not found in {my_name}')

print(my_name.capitalize('tt'))    
print(my_name.find('tt'))

