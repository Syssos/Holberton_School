[![Img](https://d2pu2bk1b66iw6.cloudfront.net/photos/2014/08/01/6-74677-mm_babymeme3-1406927575.jpg)](6-74677-mm_babymeme3-1406927575)
# 0x19 Postmortem
My post mortem can be found here
https://medium.com/@299_42481/postmortem-389511cbc679

Postmortem
Summary:
The issue was discover at 5:00 PM the 29th by a user, all email services were unavailable due to a DNS A name change for the primary domain. This means all users were affected and lost access to the ability to send and receive emails. The root cause of the problem was a change in how the information was being sent and received from the email servers.

Timeline:
User reported the issue at 5:00 pm on Wednesday the 29th, the issue was resolved by 7:30 PM the same day. The previous action’s were reverted fixing the issue.


Root Cause and Resolution:
Email services went down because of DNS change, the email services used the primary server IP to route the email to the client address but because of the change in the primary servers IP the email’s were not redirected to the users email accounts. The server change was necessary as it was a more controlled server more investigation is needed to find how the new server can handle email traffic as well. However more research is needed to identify how the new server can route the traffic the same way as the old server.

Corrective and Prevention Measures:
Some steps of prevention will include testing email services in a controlled environment's where email service wont be in use by user’s. It will also include handling email services re-routing in the new server as we conclude where information is being sent. To do this we plan on configuring Nginx to pass information on the mail ports to the mail servers.
