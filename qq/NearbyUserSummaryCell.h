//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/TightTableViewCell.h>

#import <QQMainProject/UITextFieldDelegate-Protocol.h>

@class NSString, QQAsynUrlImageView, UIImageView, UILabel, UITextField;

@interface NearbyUserSummaryCell : TightTableViewCell <UITextFieldDelegate>
{
    UILabel *_titleLabel;
    QQAsynUrlImageView *_iconView;
    UIImageView *_professionIconImageView;
    UILabel *_professionTypeLabel;
    UILabel *_detailLabel;
    UILabel *_errorTipsLabel;
    UITextField *_detailTextField;
}

- (void).cxx_destruct;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)setDetailHighlight:(_Bool)arg1;
- (void)setDetailTextColor:(id)arg1;
- (void)layoutSubviews;
- (void)configure:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

