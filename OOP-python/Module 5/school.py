class Student :
    def __init__(self,name,id):
        self.name = name
        self.id = id
        # self.current_class = current_class
    
    def __repr__(self) -> str:
        return f'Student with name: {self.name},  id:{self.id}'


class Teacher :
    def __init__(self,name,course,id):
        self.name = name 
        self.id=id
        self.course= course
    def __repr__(self) -> str:
        return f'Teacher Name : {self.name},ID : {self.id},course :{self.course}'       


class School :
    def __init__(self,name):
        self.name=name
        self.teachers = []
        self.students = []

    def add_teacher(self ,name,course):
        id = len(self.teachers)+101
        teacher = Teacher(name,course,id)
        self.teachers.append(teacher)

    def enroll (self,name,fee):
        if fee < 6500:
            return f'not enough fee'
        else:
            id = len(self.students)+1
            student  = Student(name,id)
            self.students.append(student)
            return f'{name} is enroll with id : {id},extra money {abs(fee - 6500)}'
        
    def __repr__(self) -> str:
        print('Welcome to ',self.name)
        print('-----OUR Teacher-----')
        for teacher in self.teachers:
            print(teacher)
        
        print('----Our student----')
        for student in self.students:
            print(student)
        return f'All done'

phitron = School('phitron')

phitron.enroll('alia',5200)
phitron.enroll('roni',7000)
phitron.enroll('sany',7000)

phitron.add_teacher('Tom cruse',' Algo')
phitron.add_teacher('Decap',' DS')
phitron.add_teacher('Doctor',' Database')

print(phitron)
