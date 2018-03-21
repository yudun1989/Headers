//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class WeAppComponent, WeAppViewManager;

@interface WeAppPopWindow : UIView
{
    WeAppComponent *_contentComponent;
    WeAppViewManager *_viewManager;
}

+ (void)dismiss;
@property(retain, nonatomic) WeAppViewManager *viewManager; // @synthesize viewManager=_viewManager;
@property(retain, nonatomic) WeAppComponent *contentComponent; // @synthesize contentComponent=_contentComponent;
- (void).cxx_destruct;
- (void)dealloc;
- (void)tappedCancel;
- (void)addContentView;
- (void)show;
- (id)initWithViewManager:(id)arg1 config:(id)arg2 bySize:(struct CGSize)arg3;

@end

