//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDAOProtocol-Protocol.h"

@class APDAOResult, APLinkCardItem, NSString;

@protocol APLinkCardProxy <APDAOProtocol>
- (APLinkCardItem *)queryLinkCardItemWithLink:(NSString *)arg1;
- (APDAOResult *)insertLinkCardItem:(APLinkCardItem *)arg1;
@end

