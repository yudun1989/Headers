//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MCRecommandItemViewProtocol <NSObject>
@property(nonatomic) _Bool subscribed;
@property(copy, nonatomic) NSString *subTitleText;
@property(copy, nonatomic) NSString *titleText;
@property(copy, nonatomic) NSString *iconUrl;
- (void)setItemTarget:(id)arg1 action:(SEL)arg2;
- (void)setSubscribeTarget:(id)arg1 action:(SEL)arg2;
- (void)setLastItem:(_Bool)arg1;
@end

