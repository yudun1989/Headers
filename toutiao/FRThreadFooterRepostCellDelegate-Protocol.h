//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UITableViewCell;
@protocol FRThreadFooterRepostProtocol;

@protocol FRThreadFooterRepostCellDelegate <NSObject>
- (void)fr_repostCell:(UITableViewCell *)arg1 contentUnfoldWithRepostModel:(id <FRThreadFooterRepostProtocol>)arg2;
- (void)fr_repostCell:(UITableViewCell *)arg1 avatarTappedWithRepostModel:(id <FRThreadFooterRepostProtocol>)arg2;
@end

