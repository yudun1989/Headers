//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQPublicAccountInterestTribeAccountMessageViewCell.h>

#import <QQMainProject/QQMoreOptionTableViewCellDelegate-Protocol.h>

@class NSString;

@interface QQPublicServiceMultiMessageViewCell : QQPublicAccountInterestTribeAccountMessageViewCell <QQMoreOptionTableViewCellDelegate>
{
}

- (void)tableView:(id)arg1 buttonPressedInRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3 context:(id)arg4;
- (id)tableView:(id)arg1 backgroundColorForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (id)tableView:(id)arg1 titleColorForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (id)tableView:(id)arg1 titleForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (double)tableView:(id)arg1 widthForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (int)tableView:(id)arg1 leftButtonNumInRowAtIndexPath:(id)arg2;
- (void)setData:(id)arg1;
- (unsigned long long)getYellowTipKind:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

