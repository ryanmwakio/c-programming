#include <stdio.h>
#include <stdlib.h>

int main()
{
    int VehicleSpeed;
    int SpeedLimit;
    int SpeedLimitExceededBy;
    int fine;

    printf("\n\tEnter the vehicle speed: ");
    scanf("%d",&VehicleSpeed);

    printf("\n\tEnter the speed limit: ");
    scanf("%d",&SpeedLimit);

    SpeedLimitExceededBy=VehicleSpeed-SpeedLimit;

    if(SpeedLimitExceededBy>0&&SpeedLimitExceededBy<30){
        fine=2500;
        printf("\n\tVehicle Speed: %d | Speed limit: %d | Excess Speed: %d | Fine Levied: %d\n",VehicleSpeed,SpeedLimit,SpeedLimitExceededBy,fine);
    }else {
        fine=4000;
        printf("\n\tVehicle Speed: %d | Speed limit: %d | Excess Speed: %d | Fine Levied: %d\n",VehicleSpeed,SpeedLimit,SpeedLimitExceededBy,fine);
    }
    return 0;
}
