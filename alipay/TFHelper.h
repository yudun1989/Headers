//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TFHelper : NSObject
{
}

+ (void)discoveryLogWithSeed:(id)arg1 success:(_Bool)arg2 response:(id)arg3 responseCode:(long long)arg4;
+ (id)stringWithBase64EncodeString:(id)arg1;
+ (id)formatTFMobile:(id)arg1;
+ (id)token;
+ (id)since1970TimeString;
+ (struct CGSize)sizeForString:(id)arg1 font:(id)arg2 forWidth:(double)arg3;
+ (struct CGSize)sizeForString:(id)arg1 font:(id)arg2;
+ (id)appVersion;
+ (id)DataTOjsonString:(id)arg1;
+ (void)addTFMonitorPointWithActionId:(id)arg1 lastView:(id)arg2 actionSeed:(id)arg3 currentView:(id)arg4 extArg1:(id)arg5 promotionalChannel:(id)arg6;
+ (void)showToastView:(id)arg1 inView:(id)arg2;
+ (id)showAlert:(id)arg1;
+ (id)filterFooterSpaceCharacter:(id)arg1;
+ (id)filterHeaderSpaceCharacter:(id)arg1;
+ (id)filterHeaderFooterSpaceCharacter:(id)arg1;
+ (double)formSectionFooterLabelMarginLeft;
+ (id)currentUserID;
+ (id)currentUserName;
+ (_Bool)isCurrentOSVersionLowerThan:(id)arg1;
+ (_Bool)createDirectoryIfNecessaryAtPath:(id)arg1;
+ (id)tmpAudioPath;
+ (id)amountDescription:(id)arg1;
+ (id)fomatBankCard:(id)arg1;
+ (id)formatedMoney:(id)arg1;
+ (id)formatedMoneyFromNumber:(double)arg1;
+ (_Bool)isMoneyValid:(double)arg1;
+ (_Bool)isIPhone4;
+ (_Bool)isIPhone6Plus;
+ (_Bool)isIPad;
+ (id)imageWithBundleName:(id)arg1 imageName:(id)arg2 imageType:(id)arg3;
+ (id)tfCommonUIImageNamed:(id)arg1;
+ (id)bankIconWithMark:(id)arg1;
+ (id)tfNewTransferImageWithNamed:(id)arg1;
+ (id)tfBizImageWithNamed:(id)arg1;
+ (id)c2cImageWithNamed:(id)arg1;
+ (id)supportedColorString:(id)arg1;
+ (id)colorWithRGBAString:(id)arg1;
+ (id)colorFromHexRGB:(id)arg1;
+ (id)colorWithRGBString:(id)arg1;
+ (_Bool)isNumberOrDecimalWithString:(id)arg1;
+ (_Bool)isIntegerNumber:(id)arg1;
+ (_Bool)isEmptyString:(id)arg1;
+ (double)getRandomNumber;
+ (id)phoneNumberStringTrimingBy:(id)arg1;
+ (id)numberStringTrimingBy:(id)arg1;
+ (_Bool)deviceSupportCamera;
+ (id)hasErrorInRpcResponse:(id)arg1 rpcException:(id)arg2;

@end

