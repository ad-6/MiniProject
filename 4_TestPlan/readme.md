# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |Create a new account|(1) Account Id (2) Name (3) Age (4) Phone number (5) Address (6) Amount (7) Account type |Success| Success|Technical|
|  H_02       |View Account| Correct Account id or name|(1) Account Id (2) Name (3) Age (4) Phone number (5) Address (6) Amount (7) Account type|Success|Requirement based    |
|  H_03       |Write record to file| Pointer to file|Success| Success|Technical   |
|  H_04      |Read record from file| Pointer to file|Success| Success|Technical   |

## Table no: Low level test plan

| **Test ID** |**HL ID**| **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|---------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |H_01|Clash of Account ID while creating a new Id| Account Id |All accounts|Success|Requirement based |
|  L_02       |H_02|Finding no account information from the entered account Id or name| Account Id or name | No record found| Success|Technical   |
