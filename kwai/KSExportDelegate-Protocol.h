//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, NSURL;

@protocol KSExportDelegate <NSObject>
- (void)ksExportFinish:(int)arg1 outPath:(NSURL *)arg2 assetRenderRanges:(NSArray *)arg3 error:(NSError *)arg4;
- (void)ksExportProgress:(int)arg1;
@end

