//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "SPGTMemberViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString;
@protocol SPDTFormTransferCellDelegate;

@interface SPDTFormTransferCell : UITableViewCell <SPGTMemberViewDelegate>
{
    id <SPDTFormTransferCellDelegate> _delegate;
    NSArray *_transferMembers;
    NSArray *_selectedMembers;
    NSMutableArray *_transferMemberViews;
}

+ (double)cellHeight;
+ (id)cellIdentifier;
@property(retain, nonatomic) NSMutableArray *transferMemberViews; // @synthesize transferMemberViews=_transferMemberViews;
@property(nonatomic) __weak NSArray *selectedMembers; // @synthesize selectedMembers=_selectedMembers;
@property(retain, nonatomic) NSArray *transferMembers; // @synthesize transferMembers=_transferMembers;
@property(nonatomic) __weak id <SPDTFormTransferCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)memberViewDidTapped:(id)arg1;
- (id)getTransferMemberViews;
- (_Bool)selectedIconOfContact:(id)arg1;
- (id)buildMemberView:(id)arg1 locX:(double)arg2;
- (void)buildCell;
- (void)reloadData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

