//
//  AuditModel.h
//  CRM-iOS
//
//  Created by 17041197 on 2017/11/12.
//  Copyright © 2017年 com.suning.snjzg. All rights reserved.
//

#import "JSONModel.h"

@interface AuditModel : JSONModel
@property (nonatomic, strong) NSString *recordId;          //记录ID
@property (nonatomic, strong) NSString *customerId;         //面签客户ID
@property (nonatomic, strong) NSString *customerName;       //面签客户姓名
@property (nonatomic, strong) NSString *customerTel;        //面签客户电话
@property (nonatomic, strong) NSString *customerIdNum;      //面签客户身份证号
@property (nonatomic, strong) NSString *mgrNo;              //客户经理工号
@property (nonatomic, strong) NSString *mgrName;            //客户经理姓名
@property (nonatomic, strong) NSString *certifyState;       //审核状态:0:通过（自动）  1:待人工审核  2：未通过（人工） 3 ：通过（人工）
@end

@interface AuditDetailModel : AuditModel
@property (nonatomic, strong) NSString *customerSex;        //面签客户性别 男/女
@property (nonatomic, strong) NSString *OcrIdNum;           //OCR身份证号
@property (nonatomic, strong) NSString *OcrValidity;        //OCR有效期
@property (nonatomic, strong) NSString *cardType;           //证件类型
@property (nonatomic, strong) NSString *idCardNum;          //证件号码
@property (nonatomic, strong) NSString *identityCheck;      //身份校验  0：通过  1：不通过
@property (nonatomic, strong) NSString *idCardCheck;        //身份证校验  0：通过  1：不通过
@property (nonatomic, strong) NSString *spotCheck;          //现场人像校验  0：通过  1：不通过
@property (nonatomic, strong) NSString *policeImg;          // 公安网照片  oss地址
@property (nonatomic, strong) NSString *frontImg;           //身份证正面照  oss地址
@property (nonatomic, strong) NSString *backImg;            //身份证背面照  oss地址
@property (nonatomic, strong) NSString *spotImg;            // 现场人相照  oss地址

@end
