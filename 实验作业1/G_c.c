#include <stdio.h>
int main(){
    int hardness = 0, tensile_strength = 0 ;
    float carbon_content = 0.0 ;
    printf ("请输入钢的硬度，碳含量和抗拉强度： ");
    scanf("%d %f %d",&hardness,&carbon_content,&tensile_strength);
    if( (hardness>50)&&(carbon_content<0.7 )&& (tensile_strength > 5600)){
        printf("这批钢的等级是10\n");
    }else if ((hardness>50)&&(carbon_content<0.7 )&& (tensile_strength <= 5600)){
        printf("这批钢的等级是9\n");
    }else if ((hardness<=50)&&(carbon_content<0.7 )&& (tensile_strength > 5600)){
        printf("这批钢的等级是8\n");
    }else if ((hardness>50)&&(carbon_content>=0.7 )&& (tensile_strength > 5600)){
        printf("这批钢的等级是7\n");
    }else if (((hardness>50)&&(carbon_content>=0.7 )&& (tensile_strength <= 5600))||((hardness<=50)&&(carbon_content <0.7 )&& (tensile_strength <= 5600))||((hardness<=50)&&(carbon_content>=0.7 )&& (tensile_strength >5600))){
        printf("这批钢的等级是6\n");
    }else if ((hardness<=50)&&(carbon_content>=0.7 )&& (tensile_strength <= 5600)){
        printf("这批钢的等级是5\n");}
    return 0;
}


