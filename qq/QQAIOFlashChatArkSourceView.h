//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, QQSMItemElementPictureView, UIImageView, UILabel;

@interface QQAIOFlashChatArkSourceView : UIView
{
    QQSMItemElementPictureView *_iconView;
    UILabel *_nameLabel;
    UIImageView *_bgView;
    NSString *_scheme;
    NSString *_url;
}

@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) QQSMItemElementPictureView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)jump;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)configViewWithSourceName:(id)arg1 IconUrl:(id)arg2 Scheme:(id)arg3 JumpUrl:(id)arg4;
- (void)configViewWithSourceInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

