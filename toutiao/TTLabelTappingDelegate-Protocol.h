//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, UILabel;

@protocol TTLabelTappingDelegate <NSObject>

@optional
- (void)label:(UILabel *)arg1 didLongPressLinkWithURL:(NSURL *)arg2;
- (void)label:(UILabel *)arg1 didSelectLinkWithURL:(NSURL *)arg2;
@end

