//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/GroupVerifyMsgListBaseCell.h>

@class UIButton, UILabel;

@interface GroupVerifyMsgListCell : GroupVerifyMsgListBaseCell
{
    UIButton *_actionBtn;
    UILabel *_resultLabel;
    UILabel *_line1Label;
    UILabel *_line2Label;
}

- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)groupIconTouch;
- (void)personalIconTouch;
- (void)actionButton;
- (void)setBtnText:(id)arg1;
- (void)modifyEveryControlWidth;
- (void)didClickNickName:(id)arg1;
- (void)setBackgroundColorInNomal:(id)arg1;
- (void)fillCellBeforeAppear;
- (id)_line1StrRestraintToWidth:(id)arg1;
- (void)createLine2TextLabel:(id)arg1;
- (void)createLine1TextLabel:(id)arg1 line2Exist:(_Bool)arg2;
- (id)getResultStr;
- (void)clearAlreadyExistSubView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

