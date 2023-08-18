from django.db import models

class TaskModel(models.Model):
    title = models.CharField(max_length=100)
    description = models.TextField()
    completed = models.BooleanField()

    def __str__(self):
        return self.Title
