#define ROTATE_SPEED 10



Begin_Parallel_Actions
    Set Podstawa1 0 0 0 0 0 0
    Set Podstawa1.Ramie1 0 0.5 0 0 0 0
    Set Podstawa1.Ramie1.Ramie2 0 4 0 0 0 0
    Set Podstawa1.Ramie1.Ramie2.Ramie3 0 3 1 0
End_Parallel_Actions

Begin_Parallel_Actions
    Move Podstawa1 5 4
End_Parallel_Actions
Begin_Parallel_Actions
    Rotate Podstawa1 OX ROTATE_SPEED 270 /* Rotate i Move wykonywane razem */
End_Parallel_Actions
Begin_Parallel_Actions
    Rotate Podstawa1 OY ROTATE_SPEED 420 /* Rotate i Move wykonywane razem */
End_Parallel_Actions
Begin_Parallel_Actions
    Rotate Podstawa1 OZ ROTATE_SPEED 360 /* Rotate i Move wykonywane razem */
End_Parallel_Actions
Begin_Parallel_Actions
    Pause 1000
End_Parallel_Actions

Move Podstawa1 5 2
Move Podstawa1.Ramie1 3 3 /* powodują jazdę po łuku */
Move Podstawa1.Ramie1.Ramie2 3 4 /* powodują jazdę po łuku */
Rotate Podstawa1 OX ROTATE_SPEED 360 /* Rotate i Move wykonywane razem */
Rotate Podstawa1.Ramie1 OY ROTATE_SPEED 720 /* Rotate i Move wykonywane razem */
Rotate Podstawa1.Ramie1.Ramie2 OZ ROTATE_SPEED 1080 /* Rotate i Move wykonywane razem */
Rotate Podstawa1.Ramie1.Ramie2.Ramie3 OX ROTATE_SPEED 540 /* Rotate i Move wykonywane razem */

    Move Podstawa1 10 15
    Move Podstawa1.Ramie1 2 15
    Move Podstawa1.Ramie1.Ramie2 3 20
     Move Podstawa1.Ramie1.Ramie2 3 10

