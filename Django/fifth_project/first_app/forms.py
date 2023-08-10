from typing import Any, Dict
from django import forms
from django.core import validators
class infoForm(forms.Form):
    name = forms.CharField(label= "User Name :")
    #file = forms.FileField()
    email = forms.EmailField()
    #age = forms.DecimalField()
    #birthday = forms.DateField()
    MEAL=[('b','beef'),('m','mashroom'),('v','veg')]
    pizza = forms.ChoiceField(choices=MEAL)
    order_Date=forms.ChoiceField(widget=forms.DateInput(attrs={'type':'datetime-local'}))
    comment = forms.CharField(label= "comment :",required=False,widget=forms.Textarea(attrs={'placeholder':'Enter your comment'}))



# class studentData(forms.Form):
#     name = forms.CharField(widget=forms.TextInput)
#     email = forms.CharField(widget=forms.EmailInput)
    # def clean_name(self):
    #     valname = self.cleaned_data['name']
    #     if len(valname) < 10:
    #         raise forms.ValidationError("Enter at lest 10 char ")
    #     return valname
    
    # def clean(self) :
    #     clean_data  = super().clean()
    #     valname = self.cleaned_data['name']
    #     valmail = self.cleaned_data['email']
    #     if len(valname) < 10:
    #         raise forms.ValidationError("Enter at lest 10 char ")
    #     if '.com' not in valmail:
    #         raise forms.ValidationError("Enter at lest 10 char ")
    
# class studentData(forms.Form):
#     name = forms.CharField(validators=[validators.MinLengthValidator(10,message="Enter at lest 10 char")])
#     email = forms.CharField(validators=[validators.EmailValidator(message="Enter valid email")])  


class passwordChecker(forms.Form):
    name = forms.CharField(label='User Name',widget=forms.TextInput)
    password = forms.CharField(widget=forms.PasswordInput)
    confirm_password = forms.CharField(widget=forms.PasswordInput)
    def clean(self) :
        clean_data  = super().clean()
        valname = self.cleaned_data['name']
        valpass = self.cleaned_data['password']
        valconpass = self.cleaned_data['confirm_password']
        if valpass !=valconpass:
            raise forms.ValidationError("Password does not match")