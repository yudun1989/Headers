//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTRpcUtils : NSObject
{
}

+ (id)getJsonValueFromString:(id)arg1;
+ (void)addRetryableOperationType:(id)arg1 value:(id)arg2;
+ (_Bool)useNewSign;
+ (id)compressGZip:(id)arg1;
+ (id)MD5String:(id)arg1;
+ (void)adduserId:(id)arg1;
+ (void)addProductVersion:(id)arg1;
+ (_Bool)storageCookie;
+ (id)hostToIP:(id)arg1;
+ (_Bool)amrpcSwitch;
+ (_Bool)cookieSwitch;
+ (id)c10to64:(unsigned long long)arg1;
+ (id)timestampLogger;
+ (id)productID;
+ (id)rpcKeyWithMethod:(id)arg1 params:(id)arg2;
+ (_Bool)isRpcURLOnline:(id)arg1;
+ (double)requestTimeout;
+ (void)initialize;

@end

