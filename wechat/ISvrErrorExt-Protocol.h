//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol ISvrErrorExt <NSObject>
- (void)OnGetBannerDisaster;
- (void)OnGetLoginDisaster:(NSString *)arg1 Tips:(NSString *)arg2 Url:(NSString *)arg3 isManualAuth:(_Bool)arg4;
- (void)OnGetSvrError:(NSString *)arg1 Url:(NSString *)arg2 Tips:(NSString *)arg3 TimeOut:(unsigned int)arg4;
@end

