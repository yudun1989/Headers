//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSError, NSString;

@protocol QNRecorderDelegate <NSObject>
- (NSError *)del:(NSString *)arg1;
- (NSData *)get:(NSString *)arg1;
- (NSError *)set:(NSString *)arg1 data:(NSData *)arg2;
@end

