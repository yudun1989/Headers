//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;

@protocol ALIJConfigProtocol <NSObject>
- (NSString *)pathOfFileWithUrl:(NSString *)arg1 fileName:(NSString *)arg2;
- (id)configWithGroup:(NSString *)arg1;
- (NSArray *)arrayConfigWithGroup:(NSString *)arg1 key:(NSString *)arg2;
- (NSDictionary *)dictionaryConfigWithGroup:(NSString *)arg1 key:(NSString *)arg2;
- (NSString *)stringConfigWithGroup:(NSString *)arg1 key:(NSString *)arg2;
- (double)floatConfigWithGroup:(NSString *)arg1 key:(NSString *)arg2;
- (long long)integerConfigWithGroup:(NSString *)arg1 key:(NSString *)arg2;
- (_Bool)boolConfigWithGroup:(NSString *)arg1 key:(NSString *)arg2;
@end

