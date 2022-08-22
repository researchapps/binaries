import random.choice

funsies = [dance, eat, make, run, silly, sleep, think, write]

@play_music
def be_dinosaur():
    """
    How to be a dinosaur
    """
    # Dinosaurs like programming long periods of time
    flow = True
    while flow:
        flow = keep_programming()

    # And then take a break to recharge!
    random.choice(funsies)()
    return be_dinosaur()
    

