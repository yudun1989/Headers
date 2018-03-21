//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageCellView.h"

@class MMWebImageView, ShareCardMessageViewModel, UILabel;

@interface ShareCardMessageCellView : CommonMessageCellView
{
    UILabel *m_nicknameLabel;
    UILabel *m_usernameLabel;
    MMWebImageView *m_iconNamePrefix;
}

- (void).cxx_destruct;
- (void)onTouchUpInside;
- (void)onTouchDown;
- (id)operationMenuItems;
- (void)initIconNamePostfix;
- (void)initUsernameLabel;
- (void)initNicknameLabel;
- (void)layoutContentView;
- (_Bool)canBeReused;

// Remaining properties
@property(readonly, nonatomic) ShareCardMessageViewModel *viewModel; // @dynamic viewModel;

@end

