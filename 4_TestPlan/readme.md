# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |Check if add records is working|  Record entry|storage of record|storage of record|Requirement based |
|  H_02       |Check if search record feature is working|  Record search parameters|display searched record|searched record is displayed|Requirement based    |
|  H_03       |Check if delete record feature is working | Record to be deleted with its parameters|record deleted|record deleted|Requirement based    |

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |Check the delete function|  NULL|0|0|Requirement based |
|  L_02       |Check the diagnosis function under search option|  NULL|0|0|Scenario based    |
|  L_03       |Check the doctor function under search option|  NULL|0|Scenario based    |
|  L_03       |Check the Date log function under add option|  file pointer,date array|0|0|Boundary based    |

