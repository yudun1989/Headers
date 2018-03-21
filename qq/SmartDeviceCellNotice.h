//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQAIOCell.h>

#import <QQMainProject/NIAttributedLabelDelegate-Protocol.h>

@class NIAttributedLabel, NSString, UIImageView;
@protocol SmartDeviceChatViewDelegate;

@interface SmartDeviceCellNotice : QQAIOCell <NIAttributedLabelDelegate>
{
    UIImageView *_grayLayer;
    NIAttributedLabel *_noticeLabel;
    id <SmartDeviceChatViewDelegate> _delegate;
}

+ (struct CGSize)calStringSize:(id)arg1;
+ (float)getCellHeight:(id)arg1;
@property(nonatomic) id <SmartDeviceChatViewDelegate> delegate; // @synthesize delegate=_delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

