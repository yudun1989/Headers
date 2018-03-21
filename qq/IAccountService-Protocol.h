//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, WloginSdk_v2;

@protocol IAccountService <NSObject>
- (void)updatePt4TokenDomainList:(NSString *)arg1;
- (void)updateDomainList:(NSString *)arg1;
- (NSDictionary *)getPublicAccountInfo:(unsigned long long)arg1;
- (NSString *)getLoginNicknameForQzone;
- (long long)getOnlineStatus;
- (NSString *)getLoginNickname;
- (NSString *)getUinStr;
- (long long)getUin;
- (void)pushToRefreshSkey;
- (int)getMemSig_D2KeyInt:(NSString *)arg1;
- (NSData *)getMemSig_D2Key:(NSString *)arg1;
- (NSData *)getMemSig_D2:(NSString *)arg1;
- (NSData *)getMemSig_A2:(NSString *)arg1;
- (int)requestSig_OPENKEY:(unsigned int)arg1;
- (int)requestSig_STWEB;
- (int)requestSig_DA2;
- (int)requestSig_PSKEY:(_Bool)arg1 SKey:(_Bool)arg2 pt4Token:(_Bool)arg3 withDomain:(NSString *)arg4;
- (int)requestSig_SKEY;
- (NSData *)getSigKey_ST_Appid:(unsigned int)arg1;
- (NSData *)getSig_ST_Appid:(unsigned int)arg1;
- (NSString *)getSig_SIDStr;
- (int)getSig_SuperToken:(NSData *)arg1;
- (NSString *)getSig_SUPERKEYStr;
- (NSString *)getSig_PT4_TOKENStr:(NSString *)arg1;
- (NSData *)getSig_PT4_TOKEN:(NSString *)arg1;
- (NSData *)getSig_SUPERKEY;
- (NSData *)getSig_PSKEY:(NSString *)arg1;
- (NSString *)getSig_PSKEYStr:(NSString *)arg1;
- (NSString *)getSig_SKEYStr;
- (NSData *)getSig_SKEY;
- (int)getSig_D2KeyInt;
- (NSData *)getSig_D2Key;
- (NSData *)getSig_DA2;
- (NSData *)getSig_D2;
- (NSString *)getSig_A2HexStr;
- (NSData *)getSig_A2;
- (int)smsLoginWithPhoneEx:(NSString *)arg1 andCountry:(NSString *)arg2 tag:(long long *)arg3;
- (int)loginEx:(NSString *)arg1 tag:(long long *)arg2;
- (int)loginEx:(NSString *)arg1 andPwd:(NSString *)arg2 tag:(long long *)arg3;
- (NSString *)getActiveUinOrAccount;
- (int)smsLoginWithPhoneAfterReg:(NSString *)arg1 andCountry:(NSString *)arg2 isSimplePass:(_Bool)arg3;
- (int)smsLoginWithPhoneOnReg:(NSString *)arg1 andCountry:(NSString *)arg2;
- (int)smsLoginWithPhone:(NSString *)arg1 andCountry:(NSString *)arg2;
- (_Bool)isSigsReady;
- (void)deleteUserAccount:(NSString *)arg1;
- (void)logoutUserAccount;
- (_Bool)isLocalSigValid:(NSString *)arg1 sigType:(unsigned int)arg2;
- (_Bool)isExistPasswordSig:(NSString *)arg1;
- (_Bool)isNeedLoginWithPwd:(NSString *)arg1;
- (int)loginWithOnlySigCheck:(NSString *)arg1;
- (int)loginWithAccount:(NSString *)arg1 andUin:(NSString *)arg2;
- (int)loginWithAccount:(NSString *)arg1;
- (int)loginWithAccount:(NSString *)arg1 andPwd:(NSString *)arg2;
- (int)loginWithAccountOnReg:(NSString *)arg1 andPwd:(NSString *)arg2;
- (int)loginWithMSFHistorySigs:(NSString *)arg1 andA2:(NSData *)arg2 andD2:(NSData *)arg3 andD2key:(NSData *)arg4;
- (NSString *)getLoginAccountEx;
- (NSString *)getLoginAccount;
- (int)getAccountType:(NSString *)arg1;
- (WloginSdk_v2 *)getWloginSdk;

@optional
- (void)setRegLoginType:(int)arg1;
@end

