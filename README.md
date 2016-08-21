# sin_seq
#Repository created for GT AE GRA -ACR

#I have committed my package inside the sin_seq repository to sin_seq/sin_seq (i.e. my src, CMakelists and package.xml  
#are inside sin_seq/_sin_seq). I placed my bag file at /sin_seq. I created the enclosed code with the consideration of 
#my requirements:
#
#"Your task is to write a simple program using the Robotic Operating System (ROS) Library. The final program should fulfill 
#the following requirements:
# - Register itself as a node on the ROS network
# - Advertise a Float32 ROS topic named /cec
# - Publish a sinusoidal sequence (with a half second period) of Float32 messages on the /cec topic for 10 seconds. Messages should be sent at a frequency of 200 Hz.

#Deliverables:
# - The output of your program recorded in a ROSBag
# - Your code and the ROSBag on a GitHub.com repository and send the link to Sebastien."

#"We ask that you submit the task by 8pm Sunday night(August 21)."
#
#sin_seq_pub publishes the /cec topic and sin_seq_sub is a subscriber program which listens and prints out the contents of /cec
