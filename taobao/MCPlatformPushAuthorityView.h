//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIButton, UILabel;

@interface MCPlatformPushAuthorityView : UIControl
{
    UIButton *_closeButton;
    UIButton *_openButton;
    UILabel *_titleLabel;
    UIControl *_closeControl;
}

@property(retain, nonatomic) UIControl *closeControl; // @synthesize closeControl=_closeControl;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *openButton; // @synthesize openButton=_openButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

