def doctring():
    # This will not br printed
    '''
This will be printed
    '''
    '''
    This will not be printed
    '''


print(doctring.__doc__)