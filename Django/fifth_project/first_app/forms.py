from django import forms

class infoForm(forms.Form):
    name = forms.CharField(label= "User Name")
    file = forms.FileField()
   # email = forms.EmailField()
   # age = forms.DecimalField()
   # birthday = forms.DateField()
   # MEAL=[('b','beef'),('m','mashroom'),('v','veg')]
   # pizza = forms.ChoiceField(choices=MEAL)
    
    