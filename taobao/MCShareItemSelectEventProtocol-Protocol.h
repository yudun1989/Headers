//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;
@protocol MCShareItemSelectInterface;

@protocol MCShareItemSelectEventProtocol <NSObject>
- (void)shareItemSelectComponent:(id <MCShareItemSelectInterface>)arg1 commitShareItems:(NSArray *)arg2;

@optional
- (void)shareItemSelectComponent:(id <MCShareItemSelectInterface>)arg1 selectedTabChanged:(unsigned long long)arg2;
@end

