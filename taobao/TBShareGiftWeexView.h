//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class WXSDKInstance;

@interface TBShareGiftWeexView : UIView
{
    CDUnknownBlockType _buttonBlock;
    WXSDKInstance *_instance;
    UIView *_weexView;
    struct CGRect _mFrame;
}

@property(nonatomic) struct CGRect mFrame; // @synthesize mFrame=_mFrame;
@property(retain, nonatomic) UIView *weexView; // @synthesize weexView=_weexView;
@property(retain, nonatomic) WXSDKInstance *instance; // @synthesize instance=_instance;
@property(copy, nonatomic) CDUnknownBlockType buttonBlock; // @synthesize buttonBlock=_buttonBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (void)createWeexUI:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withViewModel:(id)arg2;

@end

