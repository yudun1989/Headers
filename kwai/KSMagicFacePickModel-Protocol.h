//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class KSMagicFaceResource, NSArray, NSString;

@protocol KSMagicFacePickModel <NSObject>
@property(readonly, nonatomic) NSArray *magicFaceGroups;
- (void)cancelAllDownloaders;
- (void)downloadResource:(KSMagicFaceResource *)arg1 completedCallback:(void (^)(KSMagicFaceResource *, NSError *))arg2;
- (NSArray *)resourcesForGroupId:(NSString *)arg1;
@end

