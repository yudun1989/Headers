//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/IFTSBaseProtocol-Protocol.h>

@class NSArray, NSString;

@protocol IFTSRelationEngine <IFTSBaseProtocol>

@optional
- (void)ftsContinueSearchRemainFilters:(NSString *)arg1 matchedResults:(NSArray *)arg2 matchedUids:(NSArray *)arg3 cmpBlock:(void (^)(NSArray *))arg4;
- (void)ftsGetRelationResultWithSearchKeyWord:(NSString *)arg1 completitonBlock:(void (^)(NSArray *))arg2;
@end
