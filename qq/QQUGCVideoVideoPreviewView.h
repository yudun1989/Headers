//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface QQUGCVideoVideoPreviewView : UIView
{
    UIButton *_cancelBtn;
    CDUnknownBlockType _removeAction;
    CDUnknownBlockType _clickAction;
}

@property(copy, nonatomic) CDUnknownBlockType clickAction; // @synthesize clickAction=_clickAction;
@property(copy, nonatomic) CDUnknownBlockType removeAction; // @synthesize removeAction=_removeAction;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
- (void).cxx_destruct;
- (void)refreshInfo:(float)arg1;
- (void)onCancelBtn:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 andImage:(id)arg2;

@end

