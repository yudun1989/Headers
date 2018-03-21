//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AccountBindPhoneInfo, LoginUserInfo, NSArray, NSData, NSDate, NSDictionary, NSMutableArray, NSString, UIImage, UnifyAuthResponse;

@interface WCAccountControlData : NSObject
{
    unsigned int m_uiLoginType;
    unsigned int m_uiFromScene;
    NSString *m_nsPwd;
    NSString *m_nsPwdMD5;
    NSString *m_nsPwd16MD5;
    NSString *m_nsUserName;
    NSString *m_nsLastLoginName;
    NSString *m_nsContryCode;
    NSString *m_nsPhoneNumber;
    NSString *m_nsFormatedPhoneNumber;
    NSString *m_nsTicket;
    int m_iRegisterControlFlag;
    UnifyAuthResponse *m_structAuthResponse;
    NSArray *m_arrNextStep;
    UIImage *m_headImage;
    NSData *m_dtVerifyImg;
    NSString *m_nsAlias;
    NSString *m_nsNickName;
    NSString *m_nsVerifySignature;
    NSString *m_nsVerifyCode;
    int m_iInputType;
    int m_iForceReg;
    int m_iRegMode;
    unsigned int m_uiRegNextShowStyle;
    unsigned int m_uiReportStatus;
    NSDictionary *m_dicStyleKeyValue;
    unsigned int m_uiNextAuthType;
    AccountBindPhoneInfo *m_oBindPhoneInfo;
    NSString *m_nsDeviceSafeCloseBtnTitle;
    NSString *m_nsDeviceSafeCloseUrl;
    NSString *m_nsRandomID;
    NSDate *m_ticketTime;
    NSString *m_bioSigTicket;
    _Bool m_bAdjustRet;
    unsigned int m_uiAdjustRet;
    NSString *m_regSessionId;
    NSMutableArray *m_arrUserInfos;
    LoginUserInfo *m_userInfo;
    NSString *smsUpCode;
    NSString *smsUpMobile;
    unsigned int mobileCheckType;
}

@property(nonatomic) unsigned int mobileCheckType; // @synthesize mobileCheckType;
@property(retain, nonatomic) NSString *smsUpMobile; // @synthesize smsUpMobile;
@property(retain, nonatomic) NSString *smsUpCode; // @synthesize smsUpCode;
@property(retain, nonatomic) LoginUserInfo *m_userInfo; // @synthesize m_userInfo;
@property(retain, nonatomic) NSMutableArray *m_arrUserInfos; // @synthesize m_arrUserInfos;
@property(retain, nonatomic) NSString *m_regSessionId; // @synthesize m_regSessionId;
@property(nonatomic) unsigned int m_uiAdjustRet; // @synthesize m_uiAdjustRet;
@property(nonatomic) _Bool m_bAdjustRet; // @synthesize m_bAdjustRet;
@property(retain, nonatomic) NSString *m_bioSigTicket; // @synthesize m_bioSigTicket;
@property(readonly, nonatomic) NSDate *m_ticketTime; // @synthesize m_ticketTime;
@property(retain, nonatomic) NSString *m_nsRandomID; // @synthesize m_nsRandomID;
@property(retain, nonatomic) NSString *m_nsDeviceSafeCloseUrl; // @synthesize m_nsDeviceSafeCloseUrl;
@property(retain, nonatomic) NSString *m_nsDeviceSafeCloseBtnTitle; // @synthesize m_nsDeviceSafeCloseBtnTitle;
@property(retain, nonatomic) AccountBindPhoneInfo *m_oBindPhoneInfo; // @synthesize m_oBindPhoneInfo;
@property(nonatomic) unsigned int m_uiNextAuthType; // @synthesize m_uiNextAuthType;
@property(retain, nonatomic) NSDictionary *m_dicStyleKeyValue; // @synthesize m_dicStyleKeyValue;
@property(nonatomic) unsigned int m_uiReportStatus; // @synthesize m_uiReportStatus;
@property(nonatomic) unsigned int m_uiRegNextShowStyle; // @synthesize m_uiRegNextShowStyle;
@property(nonatomic) int m_iRegMode; // @synthesize m_iRegMode;
@property(nonatomic) int m_iForceReg; // @synthesize m_iForceReg;
@property(nonatomic) int m_iInputType; // @synthesize m_iInputType;
@property(retain, nonatomic) NSString *m_nsVerifyCode; // @synthesize m_nsVerifyCode;
@property(retain, nonatomic) NSString *m_nsVerifySignature; // @synthesize m_nsVerifySignature;
@property(retain, nonatomic) NSString *m_nsNickName; // @synthesize m_nsNickName;
@property(retain, nonatomic) NSString *m_nsAlias; // @synthesize m_nsAlias;
@property(retain, nonatomic) NSData *m_dtVerifyImg; // @synthesize m_dtVerifyImg;
@property(retain, nonatomic) UIImage *m_headImage; // @synthesize m_headImage;
@property(retain, nonatomic) NSArray *m_arrNextStep; // @synthesize m_arrNextStep;
@property(retain, nonatomic) UnifyAuthResponse *m_structAuthResponse; // @synthesize m_structAuthResponse;
@property(nonatomic) int m_iRegisterControlFlag; // @synthesize m_iRegisterControlFlag;
@property(retain, nonatomic) NSString *m_nsTicket; // @synthesize m_nsTicket;
@property(retain, nonatomic) NSString *m_nsFormatedPhoneNumber; // @synthesize m_nsFormatedPhoneNumber;
@property(retain, nonatomic) NSString *m_nsPhoneNumber; // @synthesize m_nsPhoneNumber;
@property(retain, nonatomic) NSString *m_nsContryCode; // @synthesize m_nsContryCode;
@property(retain, nonatomic) NSString *m_nsLastLoginName; // @synthesize m_nsLastLoginName;
@property(retain, nonatomic) NSString *m_nsUserName; // @synthesize m_nsUserName;
@property(retain, nonatomic) NSString *m_nsPwd16MD5; // @synthesize m_nsPwd16MD5;
@property(retain, nonatomic) NSString *m_nsPwdMD5; // @synthesize m_nsPwdMD5;
@property(retain, nonatomic) NSString *m_nsPwd; // @synthesize m_nsPwd;
@property(nonatomic) unsigned int m_uiFromScene; // @synthesize m_uiFromScene;
@property(nonatomic) unsigned int m_uiLoginType; // @synthesize m_uiLoginType;
- (void).cxx_destruct;
- (void)ParseBindPhoneInfoFromStyle:(id)arg1;
- (_Bool)isFromForgetPwd;
- (_Bool)isFromLogin;
- (_Bool)isFromReg;
- (id)init;

@end

