//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APBNBizObject.h"

@class NSString;

@interface APBNScanCode : APBNBizObject
{
    NSString *_scanType;
}

@property(copy, nonatomic) NSString *scanType; // @synthesize scanType=_scanType;
- (void).cxx_destruct;
- (void)dealloc;
- (void)onScanCodeError:(id)arg1;
- (void)onScanCodeFinished:(id)arg1;
- (void)scanWithEvent:(id)arg1;

@end

